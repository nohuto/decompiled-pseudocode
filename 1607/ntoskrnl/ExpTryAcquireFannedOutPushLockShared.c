/*
 * XREFs of ExpTryAcquireFannedOutPushLockShared @ 0x14022D3A4
 * Callers:
 *     ExTryAcquireAutoExpandPushLockShared @ 0x14013428C (ExTryAcquireAutoExpandPushLockShared.c)
 * Callees:
 *     ExfTryAcquirePushLockShared @ 0x1400C5AB8 (ExfTryAcquirePushLockShared.c)
 */

volatile signed __int64 *__fastcall ExpTryAcquireFannedOutPushLockShared(unsigned __int64 a1)
{
  unsigned int v1; // r8d
  unsigned __int64 v2; // r10
  unsigned int v3; // ecx
  __int64 v4; // r10
  __int64 v5; // rdx
  volatile signed __int64 *v6; // rbx

  v1 = ((unsigned int)a1 >> 13) & 0x3FFFF;
  v2 = a1 >> 4;
  _BitScanReverse(&v3, v1);
  v4 = v2 & 0x1FF;
  v5 = *(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v3 - 2) + 8LL * (v1 ^ (1 << v3)) + 8);
  v6 = (volatile signed __int64 *)(v5 + 8 * v4);
  if ( _InterlockedCompareExchange64(v6, 17LL, 0LL) )
    return (volatile signed __int64 *)(-(__int64)(ExfTryAcquirePushLockShared((signed __int64 *)(v5 + 8 * v4)) != 0) & (unsigned __int64)v6);
  return v6;
}
