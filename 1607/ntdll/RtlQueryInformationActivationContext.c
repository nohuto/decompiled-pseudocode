/*
 * XREFs of RtlQueryInformationActivationContext @ 0x18003DAF0
 * Callers:
 *     SbpRetrieveCompatibilityManifest @ 0x18002AF4C (SbpRetrieveCompatibilityManifest.c)
 *     RtlQueueWorkItem @ 0x180039CF0 (RtlQueueWorkItem.c)
 *     TppCleanupGroupMemberInitialize @ 0x18003D83C (TppCleanupGroupMemberInitialize.c)
 *     RtlQueryInformationActiveActivationContext @ 0x180085A10 (RtlQueryInformationActiveActivationContext.c)
 * Callees:
 *     LdrpDrainWorkQueue @ 0x18000D61C (LdrpDrainWorkQueue.c)
 *     LdrpFindLoadedDllByHandle @ 0x180031C50 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x180032238 (LdrpDereferenceModule.c)
 *     RtlPcToFileHeader @ 0x180037670 (RtlPcToFileHeader.c)
 *     RtlpGetActivationContextData @ 0x18003E078 (RtlpGetActivationContextData.c)
 *     RtlpQueryInformationActivationContextBasicInformation @ 0x18003E110 (RtlpQueryInformationActivationContextBasicInformation.c)
 *     DbgPrintEx @ 0x18005BFC0 (DbgPrintEx.c)
 *     LdrpDropLastInProgressCount @ 0x18007A61C (LdrpDropLastInProgressCount.c)
 *     RtlpQueryRunLevel @ 0x18007BA9C (RtlpQueryRunLevel.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x18007BB8C (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     RtlpQueryInformationActivationContextCompatibilityInformation @ 0x18007BDEC (RtlpQueryInformationActivationContextCompatibilityInformation.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x1800DABCC (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x1800DAE5C (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryInformationActivationContextManifestResourceName @ 0x1800DB0E4 (RtlpQueryInformationActivationContextManifestResourceName.c)
 */

__int64 __fastcall RtlQueryInformationActivationContext(
        int a1,
        struct _ACTIVATION_CONTEXT *a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        _QWORD *a7)
{
  int v7; // r15d
  struct _ACTIVATION_CONTEXT *ActivationContext; // rdi
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // rax
  char *v10; // rdx
  int ActivationContextData; // ebx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r10
  int v15; // ecx
  int InformationActivationContextBasicInformation; // eax
  int LoadedDllByHandle; // eax
  PVOID v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  int v23; // eax
  int v25; // [rsp+40h] [rbp-88h]
  __int64 v26; // [rsp+48h] [rbp-80h] BYREF
  int v27; // [rsp+50h] [rbp-78h] BYREF
  unsigned int v28; // [rsp+54h] [rbp-74h]
  int v29; // [rsp+58h] [rbp-70h]
  __int64 v30; // [rsp+60h] [rbp-68h] BYREF
  PVOID BaseOfImage; // [rsp+68h] [rbp-60h] BYREF
  int v32; // [rsp+70h] [rbp-58h] BYREF
  __int64 v33; // [rsp+74h] [rbp-54h]
  __int64 v34; // [rsp+7Ch] [rbp-4Ch]
  int v35; // [rsp+84h] [rbp-44h]
  __int64 v36; // [rsp+88h] [rbp-40h]
  int v37; // [rsp+D0h] [rbp+8h]
  struct _ACTIVATION_CONTEXT *v38; // [rsp+D8h] [rbp+10h]

  v38 = a2;
  v37 = a1;
  v7 = a4;
  ActivationContext = a2;
  v32 = 0;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0;
  v36 = 4LL;
  v30 = 0LL;
  v26 = 0LL;
  if ( a7 )
    *a7 = 0LL;
  if ( (a1 & 0x3FFFFFF8) != 0 )
    goto LABEL_52;
  v28 = a1 & 0x80000000;
  if ( a1 < 0 && ((((_DWORD)a4 - 1) & 0xFFFFFFFA) != 0 || (_DWORD)a4 == 2) )
  {
    DbgPrintEx(
      51LL,
      0LL,
      "SXS: %s() - Caller passed meaningless flags/class combination (0x%08lx/0x%08lx)\n",
      "RtlQueryInformationActivationContext",
      a1,
      a4);
    goto LABEL_54;
  }
  if ( (unsigned int)(a4 - 1) > 6 )
  {
    DbgPrintEx(
      51LL,
      0LL,
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
        51LL,
        0LL,
        "SXS: %s() - caller passed nonzero buffer length but NULL buffer pointer\n",
        "RtlQueryInformationActivationContext");
      ActivationContextData = -1073741582;
      goto LABEL_78;
    }
  }
  else if ( !a7 )
  {
    DbgPrintEx(
      51LL,
      0LL,
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
      51LL,
      0LL,
      "SXS: %s() - caller asked to use active activation context but passed %p\n",
      "RtlQueryInformationActivationContext",
      a2);
LABEL_60:
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
          51LL,
          0LL,
          "SXS: %s() - Caller asked to use activation context from address in .dll but passed NULL\n",
          "RtlQueryInformationActivationContext");
        goto LABEL_60;
      }
      v18 = RtlPcToFileHeader(a2, &BaseOfImage);
      BaseOfImage = v18;
      if ( !v18 )
      {
        DbgPrintEx(
          51LL,
          0LL,
          "SXS: %s() - Caller passed invalid address, not in any .dll (%p)\n",
          "RtlQueryInformationActivationContext",
          ActivationContext);
        ActivationContextData = -1073741515;
        goto LABEL_78;
      }
      ActivationContext = (struct _ACTIVATION_CONTEXT *)v18;
      v38 = (struct _ACTIVATION_CONTEXT *)v18;
      goto LABEL_28;
    }
LABEL_52:
    DbgPrintEx(
      51LL,
      0LL,
      "SXS: %s() - Caller passed invalid flags (0x%08lx)\n",
      "RtlQueryInformationActivationContext",
      a1);
LABEL_54:
    ActivationContextData = -1073741585;
    goto LABEL_78;
  }
LABEL_28:
  if ( !ActivationContext )
  {
    DbgPrintEx(
      51LL,
      0LL,
      "SXS: %s() - Caller asked to use activation context from hmodule but passed NULL\n",
      "RtlQueryInformationActivationContext");
    goto LABEL_60;
  }
  LoadedDllByHandle = LdrpFindLoadedDllByHandle((__int64)ActivationContext, (char *)&v26, &v27, a4);
  ActivationContextData = LoadedDllByHandle;
  v25 = LoadedDllByHandle;
  if ( LoadedDllByHandle >= 0 && v27 < 5 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      ActivationContextData = LoadedDllByHandle;
    }
    else
    {
      LdrpDrainWorkQueue(0);
      v22 = *(_QWORD *)(v26 + 152);
      v23 = v25;
      if ( *(_DWORD *)(v22 + 56) != 9 )
        v23 = -1073741515;
      ActivationContextData = v23;
      LdrpDropLastInProgressCount(v22, v19, v20, v21);
    }
    ActivationContext = v38;
  }
  if ( ActivationContextData < 0 )
  {
    DbgPrintEx(
      51LL,
      0LL,
      "SXS: %s() - Caller passed invalid hmodule (%p)\n",
      "RtlQueryInformationActivationContext",
      ActivationContext);
    goto LABEL_78;
  }
  ActivationContext = *(struct _ACTIVATION_CONTEXT **)(v26 + 136);
  a1 = v37;
LABEL_13:
  ActivationContextData = RtlpGetActivationContextData(
                            1LL,
                            ActivationContext,
                            (unsigned __int64)&v32 & -(__int64)((a1 & 0x40000000) != 0),
                            &v30);
  if ( ActivationContextData < 0 )
    goto LABEL_78;
  v14 = v30;
  if ( !v30 && (unsigned int)(v7 - 2) <= 5 )
    goto LABEL_54;
  v15 = v7 - 1;
  switch ( v7 )
  {
    case 1:
      v29 &= v15;
      if ( v28 != v15 )
        v15 = 1;
      v29 = v15;
      InformationActivationContextBasicInformation = RtlpQueryInformationActivationContextBasicInformation(
                                                       v15,
                                                       (_DWORD)v10,
                                                       v30,
                                                       v13,
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
                                                       v30,
                                                       (_DWORD)v10,
                                                       a5,
                                                       a6,
                                                       (__int64)a7);
      goto LABEL_19;
    case 3:
      if ( a3 )
      {
        InformationActivationContextBasicInformation = RtlpQueryAssemblyInformationActivationContextDetailedInformation(
                                                         v30,
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
                                                         v30,
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
        ActivationContextData = RtlpQueryRunLevel((unsigned int)(v7 - 5), v14, a5);
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
                                                       v30,
                                                       a5,
                                                       a6,
                                                       a7);
      goto LABEL_19;
    case 7:
      InformationActivationContextBasicInformation = RtlpQueryInformationActivationContextManifestResourceName(
                                                       v30,
                                                       a5,
                                                       a6,
                                                       a7);
      goto LABEL_19;
    default:
      DbgPrintEx(
        51LL,
        0LL,
        "SXS: %s() - internal coding error; missing switch statement branch for InfoClass == %lu\n",
        "RtlQueryInformationActivationContext",
        v7);
      ActivationContextData = -1073741595;
      break;
  }
LABEL_78:
  if ( v26 )
    LdrpDereferenceModule(v26, v10, v12, v13);
  return (unsigned int)ActivationContextData;
}
