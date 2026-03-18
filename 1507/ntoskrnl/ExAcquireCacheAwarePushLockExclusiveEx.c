/*
 * XREFs of ExAcquireCacheAwarePushLockExclusiveEx @ 0x140263724
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 */

volatile signed __int32 *__fastcall ExAcquireCacheAwarePushLockExclusiveEx(
        volatile signed __int32 **a1,
        char a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rbx
  volatile signed __int32 *result; // rax
  volatile signed __int32 **v7; // rsi
  volatile signed __int32 **v8; // r14
  unsigned __int64 *v9; // rcx

  if ( (a2 & 2) != 0 )
    v5 = 0LL;
  else
    v5 = KeAbPreAcquire((ULONG_PTR)a1, 0LL, 0LL, a4);
  result = *a1;
  v7 = a1 + 1;
  v8 = a1 + 32;
  if ( _interlockedbittestandset64(*a1, 0LL) )
  {
    v9 = (unsigned __int64 *)*a1;
LABEL_10:
    result = (volatile signed __int32 *)ExfAcquirePushLockExclusiveEx(v9, v5, (ULONG_PTR)a1, a4);
  }
  while ( v7 < v8 )
  {
    result = *v7;
    if ( _interlockedbittestandset64(*v7, 0LL) )
    {
      result = *--v8;
      if ( _interlockedbittestandset64(*v8, 0LL) )
      {
        v9 = (unsigned __int64 *)*v8;
        goto LABEL_10;
      }
    }
    else
    {
      ++v7;
    }
  }
  if ( v5 )
  {
    result = *(volatile signed __int32 **)(v5 + 32);
    *(_BYTE *)(v5 + 26) |= 1u;
  }
  return result;
}
