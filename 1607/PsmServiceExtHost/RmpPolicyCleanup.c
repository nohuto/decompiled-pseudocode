/*
 * XREFs of RmpPolicyCleanup @ 0x180033FD8
 * Callers:
 *     RmpDestroyResourceManagerServer @ 0x180029DB0 (RmpDestroyResourceManagerServer.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RmpPolicyCleanup(__int64 a1)
{
  void *v2; // r8
  void *v3; // r8

  RtlEnterCriticalSection(&RmpGlobalLock);
  v2 = *(void **)(a1 + 1784);
  if ( v2 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
    *(_QWORD *)(a1 + 1784) = 0LL;
  }
  v3 = *(void **)(a1 + 1792);
  if ( v3 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
    *(_QWORD *)(a1 + 1792) = 0LL;
  }
  *(_DWORD *)(a1 + 1816) = 0;
  return RtlLeaveCriticalSection(&RmpGlobalLock);
}
