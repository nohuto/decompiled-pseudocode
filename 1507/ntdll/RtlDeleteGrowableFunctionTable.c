/*
 * XREFs of RtlDeleteGrowableFunctionTable @ 0x180070AD0
 * Callers:
 *     RtlDeleteFunctionTable @ 0x180070600 (RtlDeleteFunctionTable.c)
 * Callees:
 *     RtlProtectHeap @ 0x180005E30 (RtlProtectHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     LdrProtectMrdata @ 0x18003611C (LdrProtectMrdata.c)
 *     RtlRaiseStatus @ 0x1800932C0 (RtlRaiseStatus.c)
 *     NtSetInformationProcess @ 0x180093AC0 (NtSetInformationProcess.c)
 */

signed __int64 __fastcall RtlDeleteGrowableFunctionTable(unsigned __int64 a1)
{
  int v2; // eax
  char *v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  char *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // edi
  __int64 v10; // rdx
  _QWORD *v11; // rax
  void *ProcessHeap; // rcx
  char *v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // ecx
  unsigned __int64 v18; // [rsp+20h] [rbp-18h] BYREF
  char v19; // [rsp+28h] [rbp-10h]

  if ( *(_DWORD *)(a1 + 80) != 3 )
    RtlRaiseStatus(3221225485LL);
  v18 = a1;
  v19 = 1;
  v2 = NtSetInformationProcess(-1LL, 53LL, &v18);
  if ( v2 < 0 )
    RtlRaiseStatus((unsigned int)v2);
  LdrProtectMrdata(0, v3, v4, v5);
  if ( qword_1801572F0 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock, v6, v7, v8);
    v9 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      RtlProtectHeap(LdrpMrdataHeap, 0);
    if ( v9 == -1 )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v9 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  RtlAcquireSRWLockExclusive(&RtlpDynamicFunctionTableLock, v6, v7, v8);
  v10 = *(_QWORD *)a1;
  v11 = *(_QWORD **)(a1 + 8);
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || *v11 != a1 )
    __fastfail(3u);
  *v11 = v10;
  *(_QWORD *)(v10 + 8) = v11;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  if ( qword_1801572F0 )
    ProcessHeap = (void *)LdrpMrdataHeap;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  RtlFreeHeap((__int64)ProcessHeap, 0, a1);
  if ( qword_1801572F0 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock, v13, v14, v15);
    v16 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v16 - 1;
    if ( v16 == 1 )
      RtlProtectHeap(LdrpMrdataHeap, 1);
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  return LdrProtectMrdata(1, v13, v14, v15);
}
