/*
 * XREFs of ExAcquireCacheAwarePushLockExclusive @ 0x140119E10
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 */

volatile signed __int32 *__fastcall ExAcquireCacheAwarePushLockExclusive(
        volatile signed __int32 **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  volatile signed __int32 *result; // rax
  __int64 v6; // r9
  volatile signed __int32 **v7; // rsi
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 **v9; // rdi
  volatile signed __int32 *v10; // rcx
  __int64 v11; // rdx

  result = (volatile signed __int32 *)KeAbPreAcquire((ULONG_PTR)a1, 0LL, 0LL, a4);
  v7 = a1 + 1;
  v8 = result;
  v9 = a1 + 32;
  if ( _interlockedbittestandset64(*a1, 0LL) )
  {
    v10 = *a1;
    v11 = (__int64)result;
    goto LABEL_10;
  }
  while ( v7 < v9 )
  {
    result = *v7;
    if ( _interlockedbittestandset64(*v7, 0LL) )
    {
      result = *--v9;
      if ( _interlockedbittestandset64(*v9, 0LL) )
      {
        v10 = *v9;
        v11 = (__int64)v8;
LABEL_10:
        result = (volatile signed __int32 *)ExfAcquirePushLockExclusiveEx(
                                              (unsigned __int64 *)v10,
                                              v11,
                                              (ULONG_PTR)a1,
                                              v6);
      }
    }
    else
    {
      ++v7;
    }
  }
  if ( v8 )
  {
    result = (volatile signed __int32 *)*((_QWORD *)v8 + 4);
    *((_BYTE *)v8 + 26) |= 1u;
  }
  return result;
}
