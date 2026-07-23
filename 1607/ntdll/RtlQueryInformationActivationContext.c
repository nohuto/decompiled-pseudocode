/*
 * XREFs of RtlQueryInformationActivationContext @ 0x18003DAE0
 * Callers:
 *     SbpRetrieveCompatibilityManifest @ 0x18002AF3C (SbpRetrieveCompatibilityManifest.c)
 *     RtlQueueWorkItem @ 0x180039CE0 (RtlQueueWorkItem.c)
 *     TppCleanupGroupMemberInitialize @ 0x18003D82C (TppCleanupGroupMemberInitialize.c)
 *     RtlQueryInformationActiveActivationContext @ 0x180085A00 (RtlQueryInformationActiveActivationContext.c)
 * Callees:
 *     LdrpDrainWorkQueue @ 0x18000D60C (LdrpDrainWorkQueue.c)
 *     LdrpFindLoadedDllByHandle @ 0x180031C40 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x180032228 (LdrpDereferenceModule.c)
 *     RtlPcToFileHeader @ 0x180037660 (RtlPcToFileHeader.c)
 *     RtlpGetActivationContextData @ 0x18003E068 (RtlpGetActivationContextData.c)
 *     RtlpQueryInformationActivationContextBasicInformation @ 0x18003E100 (RtlpQueryInformationActivationContextBasicInformation.c)
 *     DbgPrintEx @ 0x18005BFB0 (DbgPrintEx.c)
 *     LdrpDropLastInProgressCount @ 0x18007A60C (LdrpDropLastInProgressCount.c)
 *     RtlpQueryRunLevel @ 0x18007BA8C (RtlpQueryRunLevel.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x18007BB7C (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     RtlpQueryInformationActivationContextCompatibilityInformation @ 0x18007BDDC (RtlpQueryInformationActivationContextCompatibilityInformation.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x1800DAC8C (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x1800DAF1C (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryInformationActivationContextManifestResourceName @ 0x1800DB1A4 (RtlpQueryInformationActivationContextManifestResourceName.c)
 */

NTSTATUS __cdecl RtlQueryInformationActivationContext(
        ULONG Flags,
        PACTIVATION_CONTEXT ActivationContext,
        PACTIVATION_CONTEXT_QUERY_INDEX SubInstanceIndex,
        ACTIVATION_CONTEXT_INFO_CLASS ActivationContextInformationClass,
        PVOID ActivationContextInformation,
        SIZE_T ActivationContextInformationLength,
        PSIZE_T ReturnLength)
{
  PACTIVATION_CONTEXT v8; // rdi
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // rax
  __int64 v10; // rdx
  NTSTATUS ActivationContextData; // ebx
  __int64 v12; // r10
  __int64 v13; // rcx
  int InformationActivationContextBasicInformation; // eax
  int LoadedDllByHandle; // eax
  _ACTIVATION_CONTEXT *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  int v21; // eax
  int v23; // [rsp+40h] [rbp-88h]
  PVOID BaseAddress; // [rsp+48h] [rbp-80h] BYREF
  int v25; // [rsp+50h] [rbp-78h] BYREF
  ULONG v26; // [rsp+54h] [rbp-74h]
  int v27; // [rsp+58h] [rbp-70h]
  __int64 v28; // [rsp+60h] [rbp-68h] BYREF
  PVOID BaseOfImage; // [rsp+68h] [rbp-60h] BYREF
  int v30; // [rsp+70h] [rbp-58h] BYREF
  __int64 v31; // [rsp+74h] [rbp-54h]
  __int64 v32; // [rsp+7Ch] [rbp-4Ch]
  int v33; // [rsp+84h] [rbp-44h]
  __int64 v34; // [rsp+88h] [rbp-40h]
  ULONG v35; // [rsp+D0h] [rbp+8h]
  PACTIVATION_CONTEXT v36; // [rsp+D8h] [rbp+10h]

  v36 = ActivationContext;
  v35 = Flags;
  v8 = ActivationContext;
  v30 = 0;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0;
  v34 = 4LL;
  v28 = 0LL;
  BaseAddress = 0LL;
  if ( ReturnLength )
    *ReturnLength = 0LL;
  if ( (Flags & 0x3FFFFFF8) != 0 )
    goto LABEL_52;
  v26 = Flags & 0x80000000;
  if ( (Flags & 0x80000000) != 0
    && (((ActivationContextInformationClass - 1) & 0xFFFFFFFA) != 0
     || ActivationContextInformationClass == ActivationContextDetailedInformation) )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() - Caller passed meaningless flags/class combination (0x%08lx/0x%08lx)\n",
      "RtlQueryInformationActivationContext",
      Flags,
      ActivationContextInformationClass);
    goto LABEL_54;
  }
  if ( (unsigned int)(ActivationContextInformationClass - 1) > 6 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() - caller asked for unknown information class %lu\n",
      "RtlQueryInformationActivationContext",
      ActivationContextInformationClass);
    ActivationContextData = -1073741583;
    goto LABEL_78;
  }
  if ( ActivationContextInformationLength )
  {
    if ( !ActivationContextInformation )
    {
      DbgPrintEx(
        0x33u,
        0,
        "SXS: %s() - caller passed nonzero buffer length but NULL buffer pointer\n",
        "RtlQueryInformationActivationContext");
      ActivationContextData = -1073741582;
      goto LABEL_78;
    }
  }
  else if ( !ReturnLength )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() - caller supplied no buffer to populate and no place to return required byte count\n",
      "RtlQueryInformationActivationContext");
    ActivationContextData = -1073741580;
    goto LABEL_78;
  }
  if ( (Flags & 7) == 0 )
    goto LABEL_13;
  if ( (Flags & 7) == 1 )
  {
    if ( !ActivationContext )
    {
      ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
      if ( ActivationContextStackPointer->ActiveFrame )
        v8 = ActivationContextStackPointer->ActiveFrame->ActivationContext;
      else
        v8 = ActivationContext;
      goto LABEL_13;
    }
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() - caller asked to use active activation context but passed %p\n",
      "RtlQueryInformationActivationContext",
      ActivationContext);
LABEL_60:
    ActivationContextData = -1073741584;
    goto LABEL_78;
  }
  if ( (Flags & 7) != 2 )
  {
    if ( (Flags & 7) == 4 )
    {
      if ( !ActivationContext )
      {
        DbgPrintEx(
          0x33u,
          0,
          "SXS: %s() - Caller asked to use activation context from address in .dll but passed NULL\n",
          "RtlQueryInformationActivationContext");
        goto LABEL_60;
      }
      v16 = (_ACTIVATION_CONTEXT *)RtlPcToFileHeader(ActivationContext, &BaseOfImage);
      BaseOfImage = v16;
      if ( !v16 )
      {
        DbgPrintEx(
          0x33u,
          0,
          "SXS: %s() - Caller passed invalid address, not in any .dll (%p)\n",
          "RtlQueryInformationActivationContext",
          v8);
        ActivationContextData = -1073741515;
        goto LABEL_78;
      }
      v8 = v16;
      v36 = v16;
      goto LABEL_28;
    }
LABEL_52:
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() - Caller passed invalid flags (0x%08lx)\n",
      "RtlQueryInformationActivationContext",
      Flags);
LABEL_54:
    ActivationContextData = -1073741585;
    goto LABEL_78;
  }
LABEL_28:
  if ( !v8 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() - Caller asked to use activation context from hmodule but passed NULL\n",
      "RtlQueryInformationActivationContext");
    goto LABEL_60;
  }
  LoadedDllByHandle = LdrpFindLoadedDllByHandle((__int64)v8, (__int64 *)&BaseAddress, &v25);
  ActivationContextData = LoadedDllByHandle;
  v23 = LoadedDllByHandle;
  if ( LoadedDllByHandle >= 0 && v25 < 5 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      ActivationContextData = LoadedDllByHandle;
    }
    else
    {
      LdrpDrainWorkQueue(0);
      v20 = *((_QWORD *)BaseAddress + 19);
      v21 = v23;
      if ( *(_DWORD *)(v20 + 56) != 9 )
        v21 = -1073741515;
      ActivationContextData = v21;
      LdrpDropLastInProgressCount(v20, v17, v18, v19);
    }
    v8 = v36;
  }
  if ( ActivationContextData < 0 )
  {
    DbgPrintEx(0x33u, 0, "SXS: %s() - Caller passed invalid hmodule (%p)\n", "RtlQueryInformationActivationContext", v8);
    goto LABEL_78;
  }
  v8 = (PACTIVATION_CONTEXT)*((_QWORD *)BaseAddress + 17);
  Flags = v35;
LABEL_13:
  ActivationContextData = RtlpGetActivationContextData(
                            1LL,
                            v8,
                            (unsigned __int64)&v30 & -(__int64)((Flags & 0x40000000) != 0),
                            &v28);
  if ( ActivationContextData < 0 )
    goto LABEL_78;
  v12 = v28;
  if ( !v28 && (unsigned int)(ActivationContextInformationClass - 2) <= 5 )
    goto LABEL_54;
  v13 = (unsigned int)(ActivationContextInformationClass - 1);
  switch ( ActivationContextInformationClass )
  {
    case ActivationContextBasicInformation:
      v27 &= v13;
      if ( v26 != (_DWORD)v13 )
        v13 = 1LL;
      v27 = v13;
      InformationActivationContextBasicInformation = RtlpQueryInformationActivationContextBasicInformation(
                                                       v13,
                                                       v10,
                                                       v28);
LABEL_19:
      ActivationContextData = InformationActivationContextBasicInformation;
      if ( InformationActivationContextBasicInformation < 0 )
        break;
      goto LABEL_20;
    case ActivationContextDetailedInformation:
      InformationActivationContextBasicInformation = RtlpQueryInformationActivationContextDetailedInformation(
                                                       v28,
                                                       v10,
                                                       (_DWORD)ActivationContextInformation,
                                                       ActivationContextInformationLength,
                                                       (__int64)ReturnLength);
      goto LABEL_19;
    case AssemblyDetailedInformationInActivationContext:
      if ( SubInstanceIndex )
      {
        InformationActivationContextBasicInformation = RtlpQueryAssemblyInformationActivationContextDetailedInformation(
                                                         v28,
                                                         SubInstanceIndex->ulAssemblyIndex,
                                                         (_DWORD)ActivationContextInformation,
                                                         ActivationContextInformationLength,
                                                         (__int64)ReturnLength);
        goto LABEL_19;
      }
      goto LABEL_75;
    case FileInformationInAssemblyOfAssemblyInActivationContext:
      if ( SubInstanceIndex )
      {
        InformationActivationContextBasicInformation = RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation(
                                                         v28,
                                                         (_DWORD)SubInstanceIndex,
                                                         (_DWORD)ActivationContextInformation,
                                                         ActivationContextInformationLength,
                                                         (__int64)ReturnLength);
        goto LABEL_19;
      }
LABEL_75:
      ActivationContextData = -1073741811;
      break;
    case RunlevelInformationInActivationContext:
      if ( ActivationContextInformationLength >= 0xC )
      {
        *(_QWORD *)ActivationContextInformation = 0LL;
        *((_DWORD *)ActivationContextInformation + 2) = 0;
        ActivationContextData = RtlpQueryRunLevel(
                                  (unsigned int)(ActivationContextInformationClass - 5),
                                  v12,
                                  ActivationContextInformation);
        if ( ActivationContextData < 0 )
          break;
        if ( ReturnLength )
          *ReturnLength = 12LL;
LABEL_20:
        ActivationContextData = 0;
        break;
      }
      ActivationContextData = -1073741789;
      if ( ReturnLength )
        *ReturnLength = 12LL;
      break;
    case CompatibilityInformationInActivationContext:
      InformationActivationContextBasicInformation = RtlpQueryInformationActivationContextCompatibilityInformation(
                                                       v28,
                                                       ActivationContextInformation,
                                                       ActivationContextInformationLength,
                                                       ReturnLength);
      goto LABEL_19;
    case ActivationContextManifestResourceName:
      InformationActivationContextBasicInformation = RtlpQueryInformationActivationContextManifestResourceName(
                                                       v28,
                                                       ActivationContextInformation,
                                                       ActivationContextInformationLength,
                                                       ReturnLength);
      goto LABEL_19;
    default:
      DbgPrintEx(
        0x33u,
        0,
        "SXS: %s() - internal coding error; missing switch statement branch for InfoClass == %lu\n",
        "RtlQueryInformationActivationContext",
        ActivationContextInformationClass);
      ActivationContextData = -1073741595;
      break;
  }
LABEL_78:
  if ( BaseAddress )
    LdrpDereferenceModule((char *)BaseAddress);
  return ActivationContextData;
}
