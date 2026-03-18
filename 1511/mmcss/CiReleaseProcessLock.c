/*
 * XREFs of CiReleaseProcessLock @ 0x1C000A000
 * Callers:
 *     CiProcessSuspend @ 0x1C0001000 (CiProcessSuspend.c)
 *     CiThreadReferenceTaskIndex @ 0x1C0001A90 (CiThreadReferenceTaskIndex.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CiReleaseProcessLock(__int64 a1)
{
  __int64 v1; // rcx

  v1 = a1 + 16;
  *(_QWORD *)(v1 + 8) = 0LL;
  return ExReleasePushLockExclusiveEx(v1, 0LL);
}
