/*
 * XREFs of ExpAcquireFannedOutPushLockShared @ 0x140133654
 * Callers:
 *     ExAcquireAutoExpandPushLockShared @ 0x1400C55E0 (ExAcquireAutoExpandPushLockShared.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 */

unsigned __int64 *__fastcall ExpAcquireFannedOutPushLockShared(unsigned __int64 a1, __int64 a2, ULONG_PTR a3)
{
  unsigned int v3; // eax
  unsigned __int64 v4; // r11
  unsigned int v5; // ecx
  unsigned __int64 *v6; // rbx

  v3 = ((unsigned int)a1 >> 13) & 0x3FFFF;
  v4 = a1 >> 4;
  _BitScanReverse(&v5, v3);
  v6 = (unsigned __int64 *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v5 - 2)
                                      + 8LL * (v3 ^ (1 << v5))
                                      + 8)
                          + 8 * (v4 & 0x1FF));
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v6, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v6, a2, a3);
  return v6;
}
