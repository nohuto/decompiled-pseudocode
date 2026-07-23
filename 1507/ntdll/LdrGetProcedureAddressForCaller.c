/*
 * XREFs of LdrGetProcedureAddressForCaller @ 0x180016020
 * Callers:
 *     LdrGetProcedureAddress @ 0x180003560 (LdrGetProcedureAddress.c)
 *     LdrGetProcedureAddressEx @ 0x18007A0E0 (LdrGetProcedureAddressEx.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x180015180 (RtlpxLookupFunctionTable.c)
 *     LdrpGetProcedureAddress @ 0x180015BD0 (LdrpGetProcedureAddress.c)
 *     LdrpDereferenceModule @ 0x18001651C (LdrpDereferenceModule.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     LdrpDrainWorkQueue @ 0x180035978 (LdrpDrainWorkQueue.c)
 *     RtlReleasePath @ 0x180035A90 (RtlReleasePath.c)
 *     LdrpDropLastInProgressCount @ 0x18003815C (LdrpDropLastInProgressCount.c)
 *     LdrpInitializeGraphRecurse @ 0x180044D18 (LdrpInitializeGraphRecurse.c)
 *     LdrpReportError @ 0x18006A65C (LdrpReportError.c)
 *     LdrpParseForwarderDescription @ 0x18006DE40 (LdrpParseForwarderDescription.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     LdrpLoadForwardedDll @ 0x18007A1FC (LdrpLoadForwardedDll.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     memmove @ 0x180098200 (memmove.c)
 *     memset @ 0x180098540 (memset.c)
 *     AVrfCallAPILookupCallback @ 0x1800C4AE0 (AVrfCallAPILookupCallback.c)
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
  int v9; // r15d
  __int64 Length; // rcx
  unsigned int v11; // ebx
  _BYTE *Buffer; // r13
  __int64 v13; // rsi
  _RTL_BALANCED_NODE *Root; // rax
  unsigned __int64 ParentValue; // rcx
  __int64 v16; // rdx
  _RTL_BALANCED_NODE *v17; // rax
  int v18; // r12d
  int v19; // r15d
  WCHAR *v20; // rbx
  const char *v21; // r14
  unsigned int v22; // r13d
  _QWORD *v23; // rdi
  int v24; // eax
  NTSTATUS ForwardedDll; // ebx
  void *v26; // rdi
  PVOID *v27; // r14
  PVOID v28; // rdi
  unsigned int v30; // eax
  __int64 v31; // rcx
  char v32; // [rsp+30h] [rbp-D0h]
  char v33[7]; // [rsp+31h] [rbp-CFh] BYREF
  char *v34; // [rsp+38h] [rbp-C8h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp-C0h]
  ULONG v36; // [rsp+48h] [rbp-B8h] BYREF
  int v37; // [rsp+4Ch] [rbp-B4h]
  ULONG v38; // [rsp+50h] [rbp-B0h]
  PVOID v39; // [rsp+58h] [rbp-A8h] BYREF
  PVOID *v40; // [rsp+60h] [rbp-A0h]
  const char *v41; // [rsp+68h] [rbp-98h] BYREF
  char *v42; // [rsp+70h] [rbp-90h] BYREF
  PVOID *v43; // [rsp+78h] [rbp-88h]
  __int128 v44; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v45[24]; // [rsp+98h] [rbp-68h] BYREF
  PWSTR Path[16]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v47[128]; // [rsp+130h] [rbp+30h] BYREF
  ULONG Flagsa; // [rsp+230h] [rbp+130h]

  v6 = (Flags & 1) == 0;
  Flagsa = Flags & 1;
  v40 = Callback;
  v43 = ProcedureAddress;
  v38 = ProcedureNumber;
  v34 = 0LL;
  v32 = 0;
  if ( v6 || LdrpDllNotificationLock.OwningThread != NtCurrentTeb()->ClientId.UniqueThread )
    v9 = 9;
  else
    v9 = 6;
  if ( ProcedureName )
  {
    Length = ProcedureName->Length;
    v11 = Length + 1;
    if ( ProcedureName->MaximumLength < (unsigned int)(Length + 1)
      || (Buffer = ProcedureName->Buffer, BaseAddress = Buffer, Buffer[Length]) )
    {
      if ( v11 <= 0x80 )
      {
        Buffer = v47;
        BaseAddress = v47;
      }
      else
      {
        BaseAddress = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v11);
        Buffer = BaseAddress;
        if ( !BaseAddress )
          return -1073741670;
        v32 = 1;
      }
      memmove(Buffer, ProcedureName->Buffer, v11 - 1);
      Buffer[v11 - 1] = 0;
    }
  }
  else
  {
    Buffer = 0LL;
    BaseAddress = 0LL;
  }
  while ( 2 )
  {
    v13 = 0LL;
    if ( !DllHandle )
    {
LABEL_79:
      ForwardedDll = -1073741515;
      v28 = BaseAddress;
      goto LABEL_45;
    }
    if ( DllHandle == (PVOID)LdrpSystemDllBase )
    {
      v13 = LdrpNtDllDataTableEntry;
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
        LODWORD(v16) = -1;
      else
        v16 = (unsigned __int64)DllHandle > ParentValue;
      if ( (int)v16 < 0 )
      {
        Root = Root->Children[0];
        goto LABEL_14;
      }
      if ( (int)v16 <= 0 )
        break;
      Root = Root->Children[1];
LABEL_14:
      if ( !Root )
        goto LABEL_23;
    }
    if ( Root )
    {
      v13 = (__int64)&Root[-9].16;
      v17 = Root[-2].Children[0];
      if ( LODWORD(v17[1].Children[0]) != -1 && (*(_BYTE *)&v17->Children[0][-3].0 & 0x20) == 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v13 + 276));
      v37 = *(_DWORD *)(*(_QWORD *)(v13 + 152) + 56LL);
    }
LABEL_23:
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
LABEL_24:
    if ( !v13 )
      goto LABEL_79;
    v18 = v37;
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) == 0 && v37 < v9 )
    {
      LdrpDereferenceModule((PVOID)v13);
      LdrpDrainWorkQueue(0LL);
      LdrpDropLastInProgressCount();
      continue;
    }
    break;
  }
  v19 = v38;
  v20 = *(WCHAR **)(v13 + 80);
  v21 = Buffer;
  v41 = Buffer;
  v22 = 0;
  v36 = v38;
  v39 = (PVOID)v13;
  v23 = (_QWORD *)v13;
  memset(Path, 0, sizeof(Path));
  LODWORD(Path[3]) = 0;
  Path[4] = v20;
  while ( 1 )
  {
    v24 = LdrpGetProcedureAddress(v23[6], v21, v19, &v34);
    ForwardedDll = v24;
    if ( v24 != -1073741267 )
      break;
    v30 = v22++;
    if ( v30 >= 0x20 )
    {
      ForwardedDll = -1073741701;
      goto LABEL_34;
    }
    ForwardedDll = LdrpParseForwarderDescription(v34, v45, &v41, &v36);
    if ( ForwardedDll < 0 )
      goto LABEL_34;
    LODWORD(Path[3]) = *((_DWORD *)v23 + 68);
    ForwardedDll = LdrpLoadForwardedDll((unsigned int)v45, (unsigned int)Path, v13, (_DWORD)v23, 2, (__int64)&v39);
    if ( ForwardedDll < 0 )
      goto LABEL_34;
    v23 = v39;
    LdrpDereferenceModule(v39);
    v21 = v41;
    v19 = v36;
  }
  if ( v24 >= 0 )
  {
    v26 = (void *)v23[6];
    if ( LdrSystemDllInitBlock.Wow64SharedInformation[9] )
    {
      if ( (unsigned __int64)v26 < LdrSystemDllInitBlock.MitigationOptionsMap.Map[1]
        || (unsigned __int64)v26 >= LdrSystemDllInitBlock.MitigationOptionsMap.Map[1]
                                  + LODWORD(LdrSystemDllInitBlock.MitigationOptionsMap.Map[2]) )
      {
        RtlpxLookupFunctionTable(v26, (__int64)&v44);
      }
      else
      {
        v44 = *(_OWORD *)LdrSystemDllInitBlock.MitigationOptionsMap.Map;
      }
      if ( *((void **)&v44 + 1) != v26 )
        __fastfail(0x18u);
    }
  }
LABEL_34:
  if ( BYTE4(Path[15]) )
    RtlReleasePath(Path[0]);
  if ( ForwardedDll >= 0 )
  {
    if ( v18 == 7
      && !Flagsa
      && (NtCurrentTeb()->SameTebFlags & 0x1000) != 0
      && LdrpDllNotificationLock.OwningThread != NtCurrentTeb()->ClientId.UniqueThread )
    {
      v31 = *(_QWORD *)(v13 + 152);
      v33[0] = 0;
      ForwardedDll = LdrpInitializeGraphRecurse(v31, 0LL, v33);
    }
    if ( ForwardedDll < 0 )
    {
      v34 = 0LL;
    }
    else
    {
      v27 = v40;
      if ( AvrfpAPILookupCallbacksEnabled )
        AVrfCallAPILookupCallback((_DWORD)v40, *(_QWORD *)(v13 + 48), (_DWORD)v34, 0, (__int64)&v34);
      if ( g_ShimsEnabled )
      {
        v42 = 0LL;
        ((void (__fastcall *)(char **, __int64, char *, _QWORD, PVOID *))((unsigned int)MEMORY[0x7FFE0330] ^ __ROR8__(g_pfnSE_GetProcAddressForCaller, 64 - ((unsigned __int8)MEMORY[0x7FFE0330] & 0x3Fu))))(
          &v42,
          v13,
          v34,
          0LL,
          v27);
        if ( v42 )
          v34 = v42;
      }
    }
  }
  if ( ForwardedDll == -1073741515 || ForwardedDll == -1073741502 )
    ForwardedDll = -1073741702;
  LdrpDereferenceModule((PVOID)v13);
  v28 = BaseAddress;
  if ( ForwardedDll == -1073741702 )
  {
    if ( BaseAddress )
    {
      ForwardedDll = -1073741511;
    }
    else
    {
      v28 = (PVOID)v38;
      ForwardedDll = -1073741512;
    }
    LdrpReportError(0LL, v28, (unsigned int)ForwardedDll);
  }
LABEL_45:
  if ( v32 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v28);
  *v43 = v34;
  return ForwardedDll;
}
