/*
 * XREFs of WdipSemSqmLogInflightLimitExceededDataPoints @ 0x1404B6B3C
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x1404B691C (WdipTimeoutCheckRoutine.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     WdipSemFastFree @ 0x140504B28 (WdipSemFastFree.c)
 *     WdipSemSqmAddToStream @ 0x14065CDDC (WdipSemSqmAddToStream.c)
 *     WdipSemSqmIncrementDword @ 0x14065CF74 (WdipSemSqmIncrementDword.c)
 *     WdipSemGetGuidKey @ 0x14065D248 (WdipSemGetGuidKey.c)
 */

__int64 WdipSemSqmLogInflightLimitExceededDataPoints()
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v1; // rbx
  int v2; // esi
  __int64 v3; // rax
  __int64 v4; // rcx
  signed __int8 v5; // cf
  __int64 v6; // rdi
  __int64 v7; // rdi
  unsigned int i; // ebp
  ULONG_PTR v9; // rtt
  _QWORD *v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rdi
  int v14; // [rsp+20h] [rbp-38h] BYREF
  _DWORD v15[4]; // [rsp+28h] [rbp-30h] BYREF

  CurrentThread = KeGetCurrentThread();
  v1 = 0LL;
  v14 = 0;
  v2 = 0;
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)&qword_1402DAE08, 0LL, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1402DAE08, 0LL);
  v6 = v3;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&qword_1402DAE08, v3, (ULONG_PTR)&qword_1402DAE08);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  v7 = (unsigned int)dword_1402DAE00;
  if ( dword_1402DAE00 )
  {
    v2 = WdipSemSqmIncrementDword(v4, (unsigned int)dword_1402DAE00);
    if ( v2 < 0 )
      v2 = 0;
    if ( (_DWORD)v7 )
    {
      v11 = WdipSemFrequentScenarioTable;
      do
      {
        v12 = *v11;
        if ( (int)WdipSemGetGuidKey(*v11, &v14) >= 0 )
        {
          v15[0] = v14;
          v15[1] = *(unsigned __int16 *)(v12 + 16);
          v15[2] = *(_DWORD *)(v12 + 20);
          v2 = WdipSemSqmAddToStream(1062LL, 3LL, v15);
          if ( v2 < 0 )
            v2 = 0;
        }
        else
        {
          v2 = 0;
        }
        ++v11;
        --v7;
      }
      while ( v7 );
    }
  }
  for ( i = 0; i < dword_1402DAE00; WdipSemFrequentScenarioTable[v13] = 0LL )
  {
    v13 = i;
    WdipSemFastFree(5LL, WdipSemFrequentScenarioTable[i++]);
  }
  dword_1402DAE00 = 0;
  _m_prefetchw(&qword_1402DAE08);
  if ( (qword_1402DAE08 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v1 = qword_1402DAE08 - 16;
  if ( (qword_1402DAE08 & 2) != 0
    || (v9 = qword_1402DAE08,
        v9 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1402DAE08, v1, qword_1402DAE08)) )
  {
    ExfReleasePushLock(&qword_1402DAE08);
  }
  KeAbPostRelease((ULONG_PTR)&qword_1402DAE08);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v2;
}
