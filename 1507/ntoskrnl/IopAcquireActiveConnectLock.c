/*
 * XREFs of IopAcquireActiveConnectLock @ 0x14057D3C4
 * Callers:
 *     IoDisconnectInterrupt @ 0x1405682D8 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x14057CE68 (IopConnectInterrupt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopAcquireActiveConnectLock(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 24) )
  {
    LOBYTE(a2) = 1;
    return IopAcquireReleaseConnectLockInternal(a1, a2, 0LL);
  }
  return result;
}
