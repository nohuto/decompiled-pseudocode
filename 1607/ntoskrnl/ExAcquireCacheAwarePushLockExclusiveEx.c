/*
 * XREFs of ExAcquireCacheAwarePushLockExclusiveEx @ 0x14022D420
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquireCacheAwarePushLockExclusiveEx @ 0x1400C5550 (ExfAcquireCacheAwarePushLockExclusiveEx.c)
 */

volatile signed __int32 *__fastcall ExAcquireCacheAwarePushLockExclusiveEx(volatile signed __int32 **a1, char a2)
{
  __int64 v3; // rbx
  volatile signed __int32 *result; // rax

  if ( (a2 & 2) != 0 )
    v3 = 0LL;
  else
    v3 = KeAbPreAcquire((ULONG_PTR)a1, 0LL, 0);
  result = ExfAcquireCacheAwarePushLockExclusiveEx(a1, v3, (__int64)a1);
  if ( v3 )
  {
    result = *(volatile signed __int32 **)(v3 + 32);
    *(_BYTE *)(v3 + 26) |= 1u;
  }
  return result;
}
