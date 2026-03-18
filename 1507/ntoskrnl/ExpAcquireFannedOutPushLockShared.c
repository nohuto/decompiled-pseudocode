/*
 * XREFs of ExpAcquireFannedOutPushLockShared @ 0x14015ADEC
 * Callers:
 *     ExAcquireAutoExpandPushLockShared @ 0x1400FF100 (ExAcquireAutoExpandPushLockShared.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 */

unsigned __int64 *__fastcall ExpAcquireFannedOutPushLockShared(unsigned __int64 a1, __int64 a2, ULONG_PTR a3)
{
  unsigned int v3; // eax
  unsigned __int64 v4; // r11
  unsigned int v5; // ecx
  __int64 v6; // r9
  unsigned __int64 *v7; // rbx

  v3 = ((unsigned int)a1 >> 13) & 0x3FFFF;
  v4 = a1 >> 4;
  _BitScanReverse(&v5, v3);
  v6 = v3 ^ (1 << v5);
  v7 = (unsigned __int64 *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v5 - 2) + 8 * v6 + 8)
                          + 8 * (v4 & 0x1FF));
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v7, a2, a3, v6);
  return v7;
}
