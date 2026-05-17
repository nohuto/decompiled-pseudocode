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

__int64 __fastcall RtlQueryInformationActivationContext(
        int a1,
        struct _ACTIVATION_CONTEXT *a2,
        _DWORD *a3,
        int a4,
        __int64 a5,
        unsigned __int64 a6,
        _QWORD *a7)
{
  struct _ACTIVATION_CONTEXT *ActivationContext; // rdi
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // rax
  int v10; // edx
  int ActivationContextData; // ebx
  int v12; // r9d
  __int64 v13; // r10
  int v14; // ecx
  int InformationActivationContextBasicInformation; // eax
  int LoadedDllByHandle; // eax
  PVOID v17; // rax
  int v18; // eax
  int v20; // [rsp+40h] [rbp-88h]
  __int64 v21; // [rsp+48h] [rbp-80h] BYREF
  int v22; // [rsp+50h] [rbp-78h]
  int v23; // [rsp+54h] [rbp-74h] BYREF
  unsigned int v24; // [rsp+58h] [rbp-70h]
  __int64 v25; // [rsp+60h] [rbp-68h] BYREF
  PVOID BaseOfImage; // [rsp+68h] [rbp-60h] BYREF
  int v27; // [rsp+70h] [rbp-58h] BYREF
  __int64 v28; // [rsp+74h] [rbp-54h]
  __int64 v29; // [rsp+7Ch] [rbp-4Ch]
  int v30; // [rsp+84h] [rbp-44h]
  __int64 v31; // [rsp+88h] [rbp-40h]
  int v32; // [rsp+D0h] [rbp+8h]
  struct _ACTIVATION_CONTEXT *v33; // [rsp+D8h] [rbp+10h]

  v33 = a2;
  v32 = a1;
  ActivationContext = a2;
  v27 = 0;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0;
  v31 = 4LL;
  v25 = 0LL;
  v21 = 0LL;
  if ( a7 )
    *a7 = 0LL;
  if ( (a1 & 0x3FFFFFF8) != 0 )
    goto LABEL_51;
  v24 = a1 & 0x80000000;
  if ( a1 < 0 && (((a4 - 1) & 0xFFFFFFFA) != 0 || a4 == 2) )
  {
    DbgPrintEx(
      51,
      0,
      "SXS: %s() - Caller passed meaningless flags/class combination (0x%08lx/0x%08lx)\n",
      "RtlQueryInformationActivationContext",
      a1,
      a4);
    goto LABEL_53;
  }
  if ( (unsigned int)(a4 - 1) > 6 )
  {
    DbgPrintEx(
      51,
      0,
      "SXS: %s() - caller asked for unknown information class %lu\n",
      "RtlQueryInformationActivationContext",
      a4);
    ActivationContextData = -1073741583;
    goto LABEL_78;
  }
  if ( a6 )
  {
    if ( !a5 )
    {
      DbgPrintEx(
        51,
        0,
        "SXS: %s() - caller passed nonzero buffer length but NULL buffer pointer\n",
        "RtlQueryInformationActivationContext");
      ActivationContextData = -1073741582;
      goto LABEL_78;
    }
  }
  else if ( !a7 )
  {
    DbgPrintEx(
      51,
      0,
      "SXS: %s() - caller supplied no buffer to populate and no place to return required byte count\n",
      "RtlQueryInformationActivationContext");
    ActivationContextData = -1073741580;
    goto LABEL_78;
  }
  if ( (a1 & 7) == 0 )
    goto LABEL_13;
  if ( (a1 & 7) == 1 )
  {
    if ( !a2 )
    {
      ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
      if ( ActivationContextStackPointer->ActiveFrame )
        ActivationContext = ActivationContextStackPointer->ActiveFrame->ActivationContext;
      else
        ActivationContext = a2;
      goto LABEL_13;
    }
    DbgPrintEx(
      51,
      0,
      "SXS: %s() - caller asked to use active activation context but passed %p\n",
      "RtlQueryInformationActivationContext",
      a2);
LABEL_59:
    ActivationContextData = -1073741584;
    goto LABEL_78;
  }
  if ( (a1 & 7) != 2 )
  {
    if ( (a1 & 7) == 4 )
    {
      if ( !a2 )
      {
        DbgPrintEx(
          51,
          0,
          "SXS: %s() - Caller asked to use activation context from address in .dll but passed NULL\n",
          "RtlQueryInformationActivationContext");
        goto LABEL_59;
      }
      v17 = RtlPcToFileHeader(a2, &BaseOfImage);
      BaseOfImage = v17;
      if ( !v17 )
      {
        DbgPrintEx(
          51,
          0,
          "SXS: %s() - Caller passed invalid address, not in any .dll (%p)\n",
          "RtlQueryInformationActivationContext",
          ActivationContext);
        ActivationContextData = -1073741515;
        goto LABEL_78;
      }
      ActivationContext = (struct _ACTIVATION_CONTEXT *)v17;
      v33 = (struct _ACTIVATION_CONTEXT *)v17;
      goto LABEL_28;
    }
LABEL_51:
    DbgPrintEx(51, 0, "SXS: %s() - Caller passed invalid flags (0x%08lx)\n", "RtlQueryInformationActivationContext", a1);
LABEL_53:
    ActivationContextData = -1073741585;
    goto LABEL_78;
  }
LABEL_28:
  if ( !ActivationContext )
  {
    DbgPrintEx(
      51,
      0,
      "SXS: %s() - Caller asked to use activation context from hmodule but passed NULL\n",
      "RtlQueryInformationActivationContext");
    goto LABEL_59;
  }
  LoadedDllByHandle = LdrpFindLoadedDllByHandle((__int64)ActivationContext, &v21, &v23);
  ActivationContextData = LoadedDllByHandle;
  v20 = LoadedDllByHandle;
  if ( LoadedDllByHandle >= 0 && v23 < 5 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      ActivationContextData = LoadedDllByHandle;
    }
    else
    {
      LdrpDrainWorkQueue(0);
      v18 = v20;
      if ( *(_DWORD *)(*(_QWORD *)(v21 + 152) + 56LL) != 9 )
        v18 = -1073741515;
      ActivationContextData = v18;
      LdrpDropLastInProgressCount();
    }
    ActivationContext = v33;
  }
  if ( ActivationContextData < 0 )
  {
    DbgPrintEx(
      51,
      0,
      "SXS: %s() - Caller passed invalid hmodule (%p)\n",
      "RtlQueryInformationActivationContext",
      ActivationContext);
    goto LABEL_78;
  }
  ActivationContext = *(struct _ACTIVATION_CONTEXT **)(v21 + 136);
  a1 = v32;
LABEL_13:
  ActivationContextData = RtlpGetActivationContextData(
                            1LL,
                            ActivationContext,
                            (unsigned __int64)&v27 & -(__int64)((a1 & 0x40000000) != 0),
                            &v25);
  if ( ActivationContextData < 0 )
    goto LABEL_78;
  v13 = v25;
  if ( !v25 && (unsigned int)(a4 - 2) <= 5 )
    goto LABEL_53;
  v14 = a4 - 1;
  switch ( a4 )
  {
    case 1:
      v22 &= v14;
      if ( v24 != v14 )
        v14 = 1;
      v22 = v14;
      InformationActivationContextBasicInformation = RtlpQueryInformationActivationContextBasicInformation(
                                                       v14,
                                                       v10,
                                                       v25,
                                                       v12,
                                                       a5,
                                                       a6,
                                                       (__int64)a7);
LABEL_19:
      ActivationContextData = InformationActivationContextBasicInformation;
      if ( InformationActivationContextBasicInformation < 0 )
        break;
      goto LABEL_20;
    case 2:
      InformationActivationContextBasicInformation = RtlpQueryInformationActivationContextDetailedInformation(
                                                       v25,
                                                       v10,
                                                       a5,
                                                       a6,
                                                       (__int64)a7);
      goto LABEL_19;
    case 3:
      if ( a3 )
      {
        InformationActivationContextBasicInformation = RtlpQueryAssemblyInformationActivationContextDetailedInformation(
                                                         v25,
                                                         *a3,
                                                         a5,
                                                         a6,
                                                         (__int64)a7);
        goto LABEL_19;
      }
      goto LABEL_75;
    case 4:
      if ( a3 )
      {
        InformationActivationContextBasicInformation = RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation(
                                                         v25,
                                                         (_DWORD)a3,
                                                         a5,
                                                         a6,
                                                         (__int64)a7);
        goto LABEL_19;
      }
LABEL_75:
      ActivationContextData = -1073741811;
      break;
    case 5:
      if ( a6 >= 0xC )
      {
        *(_QWORD *)a5 = 0LL;
        *(_DWORD *)(a5 + 8) = 0;
        ActivationContextData = RtlpQueryRunLevel((unsigned int)(a4 - 5), v13, a5);
        if ( ActivationContextData < 0 )
          break;
        if ( a7 )
          *a7 = 12LL;
LABEL_20:
        ActivationContextData = 0;
        break;
      }
      ActivationContextData = -1073741789;
      if ( a7 )
        *a7 = 12LL;
      break;
    case 6:
      InformationActivationContextBasicInformation = RtlpQueryInformationActivationContextCompatibilityInformation(
                                                       v25,
                                                       a5,
                                                       a6,
                                                       a7);
      goto LABEL_19;
    case 7:
      InformationActivationContextBasicInformation = RtlpQueryInformationActivationContextManifestResourceName(
                                                       v25,
                                                       a5,
                                                       a6,
                                                       a7);
      goto LABEL_19;
    default:
      DbgPrintEx(
        51,
        0,
        "SXS: %s() - internal coding error; missing switch statement branch for InfoClass == %lu\n",
        "RtlQueryInformationActivationContext",
        a4);
      ActivationContextData = -1073741595;
      break;
  }
LABEL_78:
  if ( v21 )
    LdrpDereferenceModule(v21);
  return (unsigned int)ActivationContextData;
}
