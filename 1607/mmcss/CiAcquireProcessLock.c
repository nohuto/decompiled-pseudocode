/*
 * XREFs of CiAcquireProcessLock @ 0x1C000A000
 * Callers:
 *     CiThreadReferenceTaskIndex @ 0x1C0001A00 (CiThreadReferenceTaskIndex.c)
 *     CiProcessSuspend @ 0x1C0001A50 (CiProcessSuspend.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CiAcquireProcessLock(__int64 a1)
{
  return CiSystemAcquirePushLock(a1 + 16);
}
