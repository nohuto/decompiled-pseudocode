/*
 * XREFs of RmpActivityHostCleanupModule @ 0x18002EC5C
 * Callers:
 *     RmpDestroyResourceManagerServer @ 0x180029DB0 (RmpDestroyResourceManagerServer.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall RmpActivityHostCleanupModule(_QWORD *a1)
{
  void *v2; // rsi
  BOOLEAN result; // al
  __int64 v4; // rcx
  __int64 v5; // rcx
  void *v6; // r8
  void *v7; // r8

  RtlAcquireSRWLockExclusive(a1 + 4);
  v2 = (void *)a1[3];
  result = RtlReleaseSRWLockExclusive(a1 + 4);
  if ( v2 )
    result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
  v4 = a1[379];
  if ( v4 )
    result = TpReleaseCleanupGroup(v4);
  v5 = a1[390];
  if ( v5 )
    result = TpReleaseCleanupGroup(v5);
  if ( a1[389] )
    result = TpReleasePool();
  v6 = (void *)a1[376];
  if ( v6 )
    result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
  v7 = (void *)a1[378];
  if ( v7 )
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
  return result;
}
