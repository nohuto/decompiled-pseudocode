/*
 * XREFs of IopReleaseActiveConnectLock @ 0x14053A6EC
 * Callers:
 *     IoDisconnectInterrupt @ 0x140532A34 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x14053A12C (IopConnectInterrupt.c)
 * Callees:
 *     IopAcquireReleaseConnectLockInternal @ 0x14053A684 (IopAcquireReleaseConnectLockInternal.c)
 */

NTSTATUS __fastcall IopReleaseActiveConnectLock(__int64 a1)
{
  NTSTATUS result; // eax

  if ( *(_QWORD *)(a1 + 24) )
    return IopAcquireReleaseConnectLockInternal(a1, 0, 0);
  return result;
}
