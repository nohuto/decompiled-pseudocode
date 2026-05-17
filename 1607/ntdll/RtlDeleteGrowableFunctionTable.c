/*
 * XREFs of RtlDeleteGrowableFunctionTable @ 0x18006EBC0
 * Callers:
 *     RtlDeleteFunctionTable @ 0x18006E9D0 (RtlDeleteFunctionTable.c)
 * Callees:
 *     LdrProtectMrdata @ 0x1800190A8 (LdrProtectMrdata.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlProtectHeap @ 0x18002D7A0 (RtlProtectHeap.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlAvlRemoveNode @ 0x18006ED80 (RtlAvlRemoveNode.c)
 *     RtlRaiseStatus @ 0x1800A5DE0 (RtlRaiseStatus.c)
 *     NtSetInformationProcess @ 0x1800A67A0 (NtSetInformationProcess.c)
 */

__int64 __fastcall RtlDeleteGrowableFunctionTable(unsigned __int64 a1)
{
  int v2; // eax
  char *v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // edi
  __int64 v7; // rdx
  _QWORD *v8; // rax
  void *ProcessHeap; // rcx
  char *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ecx
  unsigned __int64 v15; // [rsp+20h] [rbp-18h] BYREF
  char v16; // [rsp+28h] [rbp-10h]

  if ( *(_DWORD *)(a1 + 80) != 3 )
    RtlRaiseStatus(3221225485LL);
  v15 = a1;
  v16 = 1;
  v2 = NtSetInformationProcess(-1LL, 53LL, &v15, 16LL);
  if ( v2 < 0 )
    RtlRaiseStatus((unsigned int)v2);
  LdrProtectMrdata(0);
  if ( qword_180163310 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v3, v4, v5);
    v6 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      RtlProtectHeap(LdrpMrdataHeap, 0);
    if ( v6 == -1 )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v6 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpDynamicFunctionTableLock, v3, v4, v5);
  RtlAvlRemoveNode(&RtlpDynamicFunctionTableTreeMin, a1 + 88);
  RtlAvlRemoveNode(&RtlpDynamicFunctionTableTreeMax, a1 + 112);
  v7 = *(_QWORD *)a1;
  v8 = *(_QWORD **)(a1 + 8);
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || *v8 != a1 )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  if ( qword_180163310 )
    ProcessHeap = (void *)LdrpMrdataHeap;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  RtlFreeHeap((__int64)ProcessHeap, 0, a1);
  if ( qword_180163310 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v10, v11, v12);
    v13 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v13 - 1;
    if ( v13 == 1 )
      RtlProtectHeap(LdrpMrdataHeap, 1);
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  return LdrProtectMrdata(1);
}
