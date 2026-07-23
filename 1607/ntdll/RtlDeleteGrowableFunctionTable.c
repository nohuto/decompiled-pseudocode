/*
 * XREFs of RtlDeleteGrowableFunctionTable @ 0x18006EBB0
 * Callers:
 *     RtlDeleteFunctionTable @ 0x18006E9C0 (RtlDeleteFunctionTable.c)
 * Callees:
 *     LdrProtectMrdata @ 0x180019098 (LdrProtectMrdata.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlProtectHeap @ 0x18002D790 (RtlProtectHeap.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlAvlRemoveNode @ 0x18006ED70 (RtlAvlRemoveNode.c)
 *     RtlRaiseStatus @ 0x1800A5DE0 (RtlRaiseStatus.c)
 *     NtSetInformationProcess @ 0x1800A67A0 (NtSetInformationProcess.c)
 */

void __cdecl RtlDeleteGrowableFunctionTable(PVOID DynamicTable)
{
  int v2; // eax
  int v3; // edi
  _QWORD *v4; // rdx
  PVOID *v5; // rax
  PVOID ProcessHeap; // rcx
  int v7; // ecx
  PVOID v8; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]

  if ( *((_DWORD *)DynamicTable + 20) != 3 )
    RtlRaiseStatus(-1073741811);
  v8 = DynamicTable;
  v9 = 1;
  v2 = NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessDynamicFunctionTableInformation, &v8, 0x10u);
  if ( v2 < 0 )
    RtlRaiseStatus(v2);
  LdrProtectMrdata(0);
  if ( LdrSystemDllInitBlock.Wow64SharedInformation[9] )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v3 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      RtlProtectHeap(LdrpMrdataHeap, 0);
    if ( v3 == -1 )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v3 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  RtlAcquireSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  RtlAvlRemoveNode(&RtlpDynamicFunctionTableTreeMin, (char *)DynamicTable + 88);
  RtlAvlRemoveNode(&RtlpDynamicFunctionTableTreeMax, (char *)DynamicTable + 112);
  v4 = *(_QWORD **)DynamicTable;
  v5 = (PVOID *)*((_QWORD *)DynamicTable + 1);
  if ( *(PVOID *)(*(_QWORD *)DynamicTable + 8LL) != DynamicTable || *v5 != DynamicTable )
    __fastfail(3u);
  *v5 = v4;
  v4[1] = v5;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  if ( LdrSystemDllInitBlock.Wow64SharedInformation[9] )
    ProcessHeap = LdrpMrdataHeap;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  RtlFreeHeap(ProcessHeap, 0, DynamicTable);
  if ( LdrSystemDllInitBlock.Wow64SharedInformation[9] )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v7 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v7 - 1;
    if ( v7 == 1 )
      RtlProtectHeap(LdrpMrdataHeap, 1u);
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  LdrProtectMrdata(1);
}
