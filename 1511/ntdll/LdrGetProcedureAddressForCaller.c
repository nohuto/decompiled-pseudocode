/*
 * XREFs of LdrGetProcedureAddressForCaller @ 0x180032870
 * Callers:
 *     LdrGetProcedureAddress @ 0x18004EE30 (LdrGetProcedureAddress.c)
 *     LdrGetProcedureAddressEx @ 0x1800812F0 (LdrGetProcedureAddressEx.c)
 * Callees:
 *     LdrpDropLastInProgressCount @ 0x1800052EC (LdrpDropLastInProgressCount.c)
 *     LdrpLoadForwardedDll @ 0x180010DF8 (LdrpLoadForwardedDll.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleasePath @ 0x18002F730 (RtlReleasePath.c)
 *     LdrpDrainWorkQueue @ 0x18002F794 (LdrpDrainWorkQueue.c)
 *     LdrpDereferenceModule @ 0x180032630 (LdrpDereferenceModule.c)
 *     LdrpGetProcedureAddress @ 0x180034810 (LdrpGetProcedureAddress.c)
 *     RtlpxLookupFunctionTable @ 0x180036540 (RtlpxLookupFunctionTable.c)
 *     LdrpInitializeGraphRecurse @ 0x180071E9C (LdrpInitializeGraphRecurse.c)
 *     LdrpReportError @ 0x1800785E8 (LdrpReportError.c)
 *     LdrpParseForwarderDescription @ 0x180078D08 (LdrpParseForwarderDescription.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 *     memset @ 0x1800AB900 (memset.c)
 *     AVrfCallAPILookupCallback @ 0x1800CDE10 (AVrfCallAPILookupCallback.c)
 */

NTSTATUS __cdecl LdrGetProcedureAddressForCaller(
        PVOID DllHandle,
        PANSI_STRING ProcedureName,
        ULONG ProcedureNumber,
        PVOID *ProcedureAddress,
        ULONG Flags,
        PVOID *Callback)
{
  bool v6; // zf
  PVOID *v7; // r12
  int v10; // r15d
  __int64 Length; // rcx
  unsigned int v12; // ebx
  char *Heap; // r13
  __int64 v14; // r14
  _RTL_BALANCED_NODE *Root; // rax
  unsigned __int64 ParentValue; // rcx
  __int64 v17; // rdx
  _RTL_BALANCED_NODE *v18; // rax
  WCHAR *v19; // rbx
  unsigned int v20; // r12d
  _QWORD *v21; // rdi
  int v22; // eax
  NTSTATUS ForwardedDll; // ebx
  void *v24; // rdi
  PVOID *v25; // rsi
  unsigned int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // [rsp+20h] [rbp-E0h]
  char v30; // [rsp+30h] [rbp-D0h]
  char v31[7]; // [rsp+31h] [rbp-CFh] BYREF
  void *v32; // [rsp+38h] [rbp-C8h] BYREF
  int v33; // [rsp+40h] [rbp-C0h]
  ULONG v34; // [rsp+44h] [rbp-BCh]
  ULONG v35; // [rsp+48h] [rbp-B8h] BYREF
  char *v36; // [rsp+50h] [rbp-B0h] BYREF
  PVOID *v37; // [rsp+58h] [rbp-A8h]
  void *v38; // [rsp+60h] [rbp-A0h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp-98h] BYREF
  PVOID *v40; // [rsp+70h] [rbp-90h]
  __int128 v41; // [rsp+78h] [rbp-88h]
  _BYTE v42[16]; // [rsp+90h] [rbp-70h] BYREF
  PWSTR Path[16]; // [rsp+A0h] [rbp-60h] BYREF
  char v44; // [rsp+120h] [rbp+20h] BYREF
  ULONG Flagsa; // [rsp+220h] [rbp+120h]

  v6 = (Flags & 1) == 0;
  Flagsa = Flags & 1;
  v7 = ProcedureAddress;
  v40 = Callback;
  v37 = ProcedureAddress;
  v34 = ProcedureNumber;
  v32 = 0LL;
  v30 = 0;
  if ( v6 || LdrpDllNotificationLock.OwningThread != NtCurrentTeb()->ClientId.UniqueThread )
    v10 = 9;
  else
    v10 = 6;
  if ( ProcedureName )
  {
    Length = ProcedureName->Length;
    v12 = Length + 1;
    if ( ProcedureName->MaximumLength < (unsigned int)(Length + 1) || (Heap = ProcedureName->Buffer, Heap[Length]) )
    {
      if ( v12 <= 0x80 )
      {
        Heap = &v44;
      }
      else
      {
        Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v12);
        if ( !Heap )
          return -1073741670;
        v30 = 1;
      }
      memmove(Heap, ProcedureName->Buffer, v12 - 1);
      Heap[v12 - 1] = 0;
    }
  }
  else
  {
    Heap = 0LL;
  }
  while ( 2 )
  {
    v14 = 0LL;
    if ( !DllHandle )
    {
LABEL_68:
      ForwardedDll = -1073741515;
      goto LABEL_46;
    }
    if ( DllHandle == (PVOID)LdrpSystemDllBase )
    {
      v14 = LdrpNtDllDataTableEntry;
      v33 = *(_DWORD *)(*(_QWORD *)(LdrpNtDllDataTableEntry + 152) + 56LL);
      goto LABEL_24;
    }
    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
    Root = LdrpModuleBaseAddressIndex.Root;
    if ( !LdrpModuleBaseAddressIndex.Root )
      goto LABEL_23;
    while ( 1 )
    {
      ParentValue = Root[-7].ParentValue;
      if ( (unsigned __int64)DllHandle < ParentValue )
        LODWORD(v17) = -1;
      else
        v17 = (unsigned __int64)DllHandle > ParentValue;
      if ( (int)v17 < 0 )
      {
        Root = Root->Children[0];
        goto LABEL_14;
      }
      if ( (int)v17 <= 0 )
        break;
      Root = Root->Children[1];
LABEL_14:
      if ( !Root )
        goto LABEL_23;
    }
    if ( Root )
    {
      v14 = (__int64)&Root[-9].16;
      v18 = Root[-2].Children[0];
      if ( LODWORD(v18[1].Children[0]) != -1 && (*(_BYTE *)&v18->Children[0][-3].0 & 0x20) == 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v14 + 276));
      v33 = *(_DWORD *)(*(_QWORD *)(v14 + 152) + 56LL);
    }
LABEL_23:
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
LABEL_24:
    if ( !v14 )
      goto LABEL_68;
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) == 0 && v33 < v10 )
    {
      LdrpDereferenceModule((char *)v14);
      LdrpDrainWorkQueue(0);
      LdrpDropLastInProgressCount();
      continue;
    }
    break;
  }
  v19 = *(WCHAR **)(v14 + 80);
  v20 = 0;
  v35 = v34;
  v36 = Heap;
  BaseAddress = (PVOID)v14;
  v21 = (_QWORD *)v14;
  memset(Path, 0, sizeof(Path));
  LODWORD(Path[3]) = 0;
  Path[4] = v19;
  while ( 1 )
  {
    v22 = LdrpGetProcedureAddress(v21[6]);
    ForwardedDll = v22;
    if ( v22 != -1073741267 )
      break;
    v27 = v20++;
    if ( v27 >= 0x20 )
    {
      ForwardedDll = -1073741701;
      goto LABEL_34;
    }
    ForwardedDll = LdrpParseForwarderDescription(v32, v42, &v36, &v35);
    if ( ForwardedDll < 0 )
      goto LABEL_34;
    LODWORD(Path[3]) = *((_DWORD *)v21 + 68);
    LODWORD(v29) = 2;
    ForwardedDll = LdrpLoadForwardedDll((__int64)v42, (__int64)Path, v14, (__int64)v21, v29, (__int64)&BaseAddress);
    if ( ForwardedDll < 0 )
      goto LABEL_34;
    v21 = BaseAddress;
    LdrpDereferenceModule((char *)BaseAddress);
  }
  if ( v22 >= 0 )
  {
    v24 = (void *)v21[6];
    if ( LdrSystemDllInitBlock.Wow64SharedInformation[9] )
    {
      if ( (unsigned __int64)v24 < LdrSystemDllInitBlock.MitigationOptionsMap.Map[1]
        || (unsigned __int64)v24 >= LdrSystemDllInitBlock.MitigationOptionsMap.Map[1]
                                  + LODWORD(LdrSystemDllInitBlock.MitigationOptionsMap.Map[2]) )
      {
        RtlpxLookupFunctionTable(v24);
      }
      else
      {
        v41 = *(_OWORD *)LdrSystemDllInitBlock.MitigationOptionsMap.Map;
      }
      if ( *((void **)&v41 + 1) != v24 )
        __fastfail(0x18u);
    }
  }
LABEL_34:
  if ( BYTE4(Path[15]) )
    RtlReleasePath(Path[0]);
  if ( ForwardedDll >= 0 )
  {
    if ( v33 == 7
      && !Flagsa
      && (NtCurrentTeb()->SameTebFlags & 0x1000) != 0
      && LdrpDllNotificationLock.OwningThread != NtCurrentTeb()->ClientId.UniqueThread )
    {
      v28 = *(_QWORD *)(v14 + 152);
      v31[0] = 0;
      ForwardedDll = LdrpInitializeGraphRecurse(v28, 0LL, v31);
    }
    if ( ForwardedDll < 0 )
    {
      v32 = 0LL;
    }
    else
    {
      v25 = v40;
      if ( AvrfpAPILookupCallbacksEnabled )
        AVrfCallAPILookupCallback((_DWORD)v40, *(_QWORD *)(v14 + 48), (_DWORD)v32, 0, (__int64)&v32);
      if ( g_ShimsEnabled )
      {
        v38 = 0LL;
        ((void (__fastcall *)(void **, __int64, void *, _QWORD, PVOID *))((unsigned int)MEMORY[0x7FFE0330] ^ __ROR8__(g_pfnSE_GetProcAddressForCaller, 64 - ((unsigned __int8)MEMORY[0x7FFE0330] & 0x3Fu))))(
          &v38,
          v14,
          v32,
          0LL,
          v25);
        if ( v38 )
          v32 = v38;
      }
    }
  }
  if ( ForwardedDll == -1073741515 || ForwardedDll == -1073741502 )
    ForwardedDll = -1073741702;
  LdrpDereferenceModule((char *)v14);
  if ( ForwardedDll == -1073741702 )
  {
    if ( Heap )
    {
      ForwardedDll = -1073741511;
    }
    else
    {
      Heap = (char *)v34;
      ForwardedDll = -1073741512;
    }
    LdrpReportError(0LL, Heap, (unsigned int)ForwardedDll);
  }
  v7 = v37;
LABEL_46:
  if ( v30 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  *v7 = v32;
  return ForwardedDll;
}
