/*
 * XREFs of IopReleaseActiveConnectLock @ 0x14053A1AC
 * Callers:
 *     IoDisconnectInterrupt @ 0x1405324F4 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x140539BEC (IopConnectInterrupt.c)
 * Callees:
 *     IopAcquireReleaseConnectLockInternal @ 0x14053A144 (IopAcquireReleaseConnectLockInternal.c)
 */

NTSTATUS __fastcall IopReleaseActiveConnectLock(__int64 a1)
{
  NTSTATUS result; // eax

  if ( *(_QWORD *)(a1 + 24) )
    return IopAcquireReleaseConnectLockInternal(a1, 0, 0);
  return result;
}
