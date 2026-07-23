/*
 * XREFs of IopAcquireActiveConnectLock @ 0x14053A708
 * Callers:
 *     IoDisconnectInterrupt @ 0x140532A34 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x14053A12C (IopConnectInterrupt.c)
 * Callees:
 *     IopAcquireReleaseConnectLockInternal @ 0x14053A684 (IopAcquireReleaseConnectLockInternal.c)
 */

NTSTATUS __fastcall IopAcquireActiveConnectLock(__int64 a1)
{
  NTSTATUS result; // eax

  if ( *(_QWORD *)(a1 + 24) )
    return IopAcquireReleaseConnectLockInternal(a1, 1, 0);
  return result;
}
