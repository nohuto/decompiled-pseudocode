/*
 * XREFs of CiAcquireProcessLock @ 0x1C000A020
 * Callers:
 *     CiProcessSuspend @ 0x1C0001000 (CiProcessSuspend.c)
 *     CiThreadReferenceTaskIndex @ 0x1C0001A90 (CiThreadReferenceTaskIndex.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CiAcquireProcessLock(__int64 a1)
{
  return CiSystemAcquirePushLock(a1 + 16);
}
