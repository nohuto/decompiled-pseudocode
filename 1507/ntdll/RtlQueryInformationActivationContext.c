/*
 * XREFs of RtlQueryInformationActivationContext @ 0x18003E1C0
 * Callers:
 *     TppCleanupGroupMemberInitialize @ 0x18003DF0C (TppCleanupGroupMemberInitialize.c)
 *     SbpRetrieveCompatibilityManifest @ 0x180043E78 (SbpRetrieveCompatibilityManifest.c)
 *     RtlQueryInformationActiveActivationContext @ 0x180074F70 (RtlQueryInformationActiveActivationContext.c)
 *     RtlQueueWorkItem @ 0x18007C3C0 (RtlQueueWorkItem.c)
 * Callees:
 *     DbgPrintEx @ 0x18000F9B0 (DbgPrintEx.c)
 *     LdrpFindLoadedDllByHandle @ 0x180015F14 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x18001651C (LdrpDereferenceModule.c)
 *     RtlPcToFileHeader @ 0x180018580 (RtlPcToFileHeader.c)
 *     LdrpDrainWorkQueue @ 0x180035978 (LdrpDrainWorkQueue.c)
 *     LdrpDropLastInProgressCount @ 0x18003815C (LdrpDropLastInProgressCount.c)
 *     RtlpGetActivationContextData @ 0x18003E744 (RtlpGetActivationContextData.c)
 *     RtlpQueryInformationActivationContextBasicInformation @ 0x18003E7DC (RtlpQueryInformationActivationContextBasicInformation.c)
 *     RtlpQueryRunLevel @ 0x18006ECE0 (RtlpQueryRunLevel.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x18006EDD0 (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     RtlpQueryInformationActivationContextCompatibilityInformation @ 0x18006F030 (RtlpQueryInformationActivationContextCompatibilityInformation.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x1800C9E9C (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x1800CA12C (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryInformationActivationContextManifestResourceName @ 0x1800CA3B4 (RtlpQueryInformationActivationContextManifestResourceName.c)
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
  int v17; // eax
  int v19; // [rsp+40h] [rbp-88h]
  PVOID BaseAddress; // [rsp+48h] [rbp-80h] BYREF
  int v21; // [rsp+50h] [rbp-78h]
  int v22; // [rsp+54h] [rbp-74h] BYREF
  ULONG v23; // [rsp+58h] [rbp-70h]
  __int64 v24; // [rsp+60h] [rbp-68h] BYREF
  PVOID BaseOfImage; // [rsp+68h] [rbp-60h] BYREF
  int v26; // [rsp+70h] [rbp-58h] BYREF
  __int64 v27; // [rsp+74h] [rbp-54h]
  __int64 v28; // [rsp+7Ch] [rbp-4Ch]
  int v29; // [rsp+84h] [rbp-44h]
  __int64 v30; // [rsp+88h] [rbp-40h]
  ULONG v31; // [rsp+D0h] [rbp+8h]
  PACTIVATION_CONTEXT v32; // [rsp+D8h] [rbp+10h]

  v32 = ActivationContext;
  v31 = Flags;
  v8 = ActivationContext;
  v26 = 0;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0;
  v30 = 4LL;
  v24 = 0LL;
  BaseAddress = 0LL;
  if ( ReturnLength )
    *ReturnLength = 0LL;
  if ( (Flags & 0x3FFFFFF8) != 0 )
    goto LABEL_51;
  v23 = Flags & 0x80000000;
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
    goto LABEL_53;
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
LABEL_59:
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
        goto LABEL_59;
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
      v32 = v16;
      goto LABEL_28;
    }
LABEL_51:
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() - Caller passed invalid flags (0x%08lx)\n",
      "RtlQueryInformationActivationContext",
      Flags);
LABEL_53:
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
    goto LABEL_59;
  }
  LoadedDllByHandle = LdrpFindLoadedDllByHandle((__int64)v8, (__int64 *)&BaseAddress, &v22);
  ActivationContextData = LoadedDllByHandle;
  v19 = LoadedDllByHandle;
  if ( LoadedDllByHandle >= 0 && v22 < 5 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      ActivationContextData = LoadedDllByHandle;
    }
    else
    {
      LdrpDrainWorkQueue(0);
      v17 = v19;
      if ( *(_DWORD *)(*((_QWORD *)BaseAddress + 19) + 56LL) != 9 )
        v17 = -1073741515;
      ActivationContextData = v17;
      LdrpDropLastInProgressCount();
    }
    v8 = v32;
  }
  if ( ActivationContextData < 0 )
  {
    DbgPrintEx(0x33u, 0, "SXS: %s() - Caller passed invalid hmodule (%p)\n", "RtlQueryInformationActivationContext", v8);
    goto LABEL_78;
  }
  v8 = (PACTIVATION_CONTEXT)*((_QWORD *)BaseAddress + 17);
  Flags = v31;
LABEL_13:
  ActivationContextData = RtlpGetActivationContextData(
                            1LL,
                            v8,
                            (unsigned __int64)&v26 & -(__int64)((Flags & 0x40000000) != 0),
                            &v24);
  if ( ActivationContextData < 0 )
    goto LABEL_78;
  v12 = v24;
  if ( !v24 && (unsigned int)(ActivationContextInformationClass - 2) <= 5 )
    goto LABEL_53;
  v13 = (unsigned int)(ActivationContextInformationClass - 1);
  switch ( ActivationContextInformationClass )
  {
    case ActivationContextBasicInformation:
      v21 &= v13;
      if ( v23 != (_DWORD)v13 )
        v13 = 1LL;
      v21 = v13;
      InformationActivationContextBasicInformation = RtlpQueryInformationActivationContextBasicInformation(
                                                       v13,
                                                       v10,
                                                       v24);
LABEL_19:
      ActivationContextData = InformationActivationContextBasicInformation;
      if ( InformationActivationContextBasicInformation < 0 )
        break;
      goto LABEL_20;
    case ActivationContextDetailedInformation:
      InformationActivationContextBasicInformation = RtlpQueryInformationActivationContextDetailedInformation(
                                                       v24,
                                                       v10,
                                                       (_DWORD)ActivationContextInformation,
                                                       ActivationContextInformationLength,
                                                       (__int64)ReturnLength);
      goto LABEL_19;
    case AssemblyDetailedInformationInActivationContext:
      if ( SubInstanceIndex )
      {
        InformationActivationContextBasicInformation = RtlpQueryAssemblyInformationActivationContextDetailedInformation(
                                                         v24,
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
                                                         v24,
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
                                                       v24,
                                                       ActivationContextInformation,
                                                       ActivationContextInformationLength,
                                                       ReturnLength);
      goto LABEL_19;
    case ActivationContextManifestResourceName:
      InformationActivationContextBasicInformation = RtlpQueryInformationActivationContextManifestResourceName(
                                                       v24,
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
