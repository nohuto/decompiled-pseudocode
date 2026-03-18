/*
 * XREFs of IopReleaseActiveConnectLock @ 0x1405037D4
 * Callers:
 *     IoDisconnectInterrupt @ 0x1404F405C (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x140503334 (IopConnectInterrupt.c)
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
