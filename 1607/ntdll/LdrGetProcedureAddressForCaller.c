/*
 * XREFs of LdrGetProcedureAddressForCaller @ 0x180031D50
 * Callers:
 *     LdrGetProcedureAddress @ 0x180075EC0 (LdrGetProcedureAddress.c)
 *     LdrGetProcedureAddressEx @ 0x18007E3E0 (LdrGetProcedureAddressEx.c)
 * Callees:
 *     RtlReleasePath @ 0x180009190 (RtlReleasePath.c)
 *     LdrpDrainWorkQueue @ 0x18000D60C (LdrpDrainWorkQueue.c)
 *     LdrpLoadForwardedDll @ 0x1800132F0 (LdrpLoadForwardedDll.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     LdrpDereferenceModule @ 0x180032228 (LdrpDereferenceModule.c)
 *     LdrpGetProcedureAddress @ 0x180032360 (LdrpGetProcedureAddress.c)
 *     RtlpxLookupFunctionTable @ 0x1800362E0 (RtlpxLookupFunctionTable.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     LdrpInitializeGraphRecurse @ 0x1800722A8 (LdrpInitializeGraphRecurse.c)
 *     LdrpDropLastInProgressCount @ 0x18007A60C (LdrpDropLastInProgressCount.c)
 *     LdrpReportError @ 0x18007AF78 (LdrpReportError.c)
 *     LdrpParseForwarderDescription @ 0x18007B834 (LdrpParseForwarderDescription.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     AVrfCallAPILookupCallback @ 0x1800D5E80 (AVrfCallAPILookupCallback.c)
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
  PVOID *v7; // r15
  int v10; // r14d
  __int64 Length; // rcx
  unsigned int v12; // ebx
  char *Heap; // r13
  __int64 v14; // rdi
  _RTL_BALANCED_NODE *Root; // rax
  unsigned __int64 ParentValue; // rcx
  __int64 v17; // rdx
  _RTL_BALANCED_NODE *v18; // rax
  WCHAR *v19; // rbx
  unsigned int v20; // r12d
  _QWORD *v21; // rsi
  int v22; // eax
  NTSTATUS v23; // ebx
  void *v24; // rsi
  PVOID *v25; // rsi
  unsigned int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // [rsp+20h] [rbp-E0h]
  char v34; // [rsp+30h] [rbp-D0h]
  char v35[7]; // [rsp+31h] [rbp-CFh] BYREF
  void *v36; // [rsp+38h] [rbp-C8h] BYREF
  int v37; // [rsp+40h] [rbp-C0h]
  ULONG v38; // [rsp+44h] [rbp-BCh] BYREF
  ULONG v39; // [rsp+48h] [rbp-B8h]
  PVOID BaseAddress; // [rsp+50h] [rbp-B0h] BYREF
  char *v41; // [rsp+58h] [rbp-A8h] BYREF
  PVOID *v42; // [rsp+60h] [rbp-A0h]
  void *v43; // [rsp+68h] [rbp-98h] BYREF
  PVOID *v44; // [rsp+70h] [rbp-90h]
  __int128 v45; // [rsp+78h] [rbp-88h]
  ANSI_STRING v46; // [rsp+90h] [rbp-70h] BYREF
  PWSTR Path[16]; // [rsp+A0h] [rbp-60h] BYREF
  char v48; // [rsp+120h] [rbp+20h] BYREF
  ULONG Flagsa; // [rsp+220h] [rbp+120h]

  v6 = (Flags & 1) == 0;
  Flagsa = Flags & 1;
  v7 = ProcedureAddress;
  v42 = Callback;
  v44 = ProcedureAddress;
  v39 = ProcedureNumber;
  v36 = 0LL;
  v34 = 0;
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
        Heap = &v48;
      }
      else
      {
        Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v12);
        if ( !Heap )
          return -1073741670;
        v34 = 1;
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
LABEL_80:
      v23 = -1073741515;
      goto LABEL_46;
    }
    if ( DllHandle == (PVOID)LdrpSystemDllBase )
    {
      v14 = LdrpNtDllDataTableEntry;
      v37 = *(_DWORD *)(*(_QWORD *)(LdrpNtDllDataTableEntry + 152) + 56LL);
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
      v37 = *(_DWORD *)(*(_QWORD *)(v14 + 152) + 56LL);
    }
LABEL_23:
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
LABEL_24:
    if ( !v14 )
      goto LABEL_80;
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) == 0 && v37 < v10 )
    {
      LdrpDereferenceModule((PVOID)v14);
      LdrpDrainWorkQueue(0);
      LdrpDropLastInProgressCount(v30, v29, v31, v32);
      continue;
    }
    break;
  }
  v19 = *(WCHAR **)(v14 + 80);
  v20 = 0;
  v38 = v39;
  v41 = Heap;
  BaseAddress = (PVOID)v14;
  v21 = (_QWORD *)v14;
  memset(Path, 0, sizeof(Path));
  LODWORD(Path[3]) = 0;
  Path[4] = v19;
  while ( 1 )
  {
    v22 = LdrpGetProcedureAddress(v21[6]);
    v23 = v22;
    if ( v22 != -1073741267 )
      break;
    v27 = v20++;
    if ( v27 >= 0x20 )
    {
      v23 = -1073741701;
      goto LABEL_34;
    }
    v23 = LdrpParseForwarderDescription(v36, &v46, &v41, &v38);
    if ( v23 < 0 )
      goto LABEL_34;
    LODWORD(Path[3]) = *((_DWORD *)v21 + 68);
    LODWORD(v33) = 2;
    v23 = LdrpLoadForwardedDll(&v46, (__int64)Path, v14, (__int64)v21, v33, (__int64)&BaseAddress);
    if ( v23 < 0 )
      goto LABEL_34;
    v21 = BaseAddress;
    LdrpDereferenceModule(BaseAddress);
  }
  if ( v22 >= 0 )
  {
    v24 = (void *)v21[6];
    if ( LdrSystemDllInitBlock.Wow64SharedInformation[9] )
    {
      if ( (unsigned __int64)v24 < *((_QWORD *)&xmmword_180163430 + 1)
        || (unsigned __int64)v24 >= *((_QWORD *)&xmmword_180163430 + 1)
                                  + (unsigned __int64)(unsigned int)qword_180163440 )
      {
        RtlpxLookupFunctionTable(v24);
      }
      else
      {
        v45 = xmmword_180163430;
      }
      if ( *((void **)&v45 + 1) != v24 )
        __fastfail(0x18u);
    }
  }
LABEL_34:
  if ( BYTE4(Path[15]) )
    RtlReleasePath(Path[0]);
  if ( v23 >= 0 )
  {
    if ( v37 == 7
      && !Flagsa
      && (NtCurrentTeb()->SameTebFlags & 0x1000) != 0
      && LdrpDllNotificationLock.OwningThread != NtCurrentTeb()->ClientId.UniqueThread )
    {
      v28 = *(_QWORD *)(v14 + 152);
      v35[0] = 0;
      v23 = LdrpInitializeGraphRecurse(v28, 0LL, v35);
    }
    if ( v23 < 0 )
    {
      v36 = 0LL;
    }
    else
    {
      v25 = v42;
      if ( AvrfpAPILookupCallbacksEnabled )
        AVrfCallAPILookupCallback((_DWORD)v42, *(_QWORD *)(v14 + 48), (_DWORD)v36, 0, (__int64)&v36);
      if ( g_ShimsEnabled )
      {
        v43 = 0LL;
        ((void (__fastcall *)(void **, __int64, void *, _QWORD, PVOID *))(MEMORY[0x7FFE0330] ^ __ROR8__(
                                                                                                 g_pfnSE_GetProcAddressForCaller,
                                                                                                 64
                                                                                               - (MEMORY[0x7FFE0330] & 0x3Fu))))(
          &v43,
          v14,
          v36,
          0LL,
          v25);
        if ( v43 )
          v36 = v43;
      }
    }
  }
  if ( v23 == -1073741515 || v23 == -1073741502 )
    v23 = -1073741702;
  LdrpDereferenceModule((PVOID)v14);
  if ( v23 == -1073741702 )
  {
    if ( Heap )
    {
      v23 = -1073741511;
    }
    else
    {
      Heap = (char *)v39;
      v23 = -1073741512;
    }
    LdrpReportError(0LL, Heap, (unsigned int)v23);
  }
  v7 = v44;
LABEL_46:
  if ( v34 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  *v7 = v36;
  return v23;
}
