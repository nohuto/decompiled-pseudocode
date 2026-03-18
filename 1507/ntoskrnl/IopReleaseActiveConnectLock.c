/*
 * XREFs of IopReleaseActiveConnectLock @ 0x14057D3B0
 * Callers:
 *     IoDisconnectInterrupt @ 0x1405682D8 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x14057CE68 (IopConnectInterrupt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopReleaseActiveConnectLock(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 24) )
    return IopAcquireReleaseConnectLockInternal(a1, 0LL, 0LL);
  return result;
}
