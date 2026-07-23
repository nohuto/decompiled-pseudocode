/*
 * XREFs of ExfReleasePushLockExclusive @ 0x1400C65A0
 * Callers:
 *     ExfAcquireReleasePushLockExclusive @ 0x1400A8F6C (ExfAcquireReleasePushLockExclusive.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ExfReleasePushLockExclusive(volatile signed __int64 *a1)
{
  signed __int64 result; // rax
  __int64 v2; // r8
  __int64 v3; // rdx
  signed __int64 v4; // rtt

  result = _InterlockedCompareExchange64(a1, 0LL, 1LL);
  if ( result != 1 )
  {
    do
    {
      v2 = -1LL;
      if ( (result & 6) == 2 )
        v2 = 3LL;
      v3 = v2 + result;
      v4 = result;
      result = _InterlockedCompareExchange64(a1, v2 + result, result);
    }
    while ( v4 != result );
    if ( v2 == 3 )
      return ExpWakePushLock(a1, v3);
  }
  return result;
}
