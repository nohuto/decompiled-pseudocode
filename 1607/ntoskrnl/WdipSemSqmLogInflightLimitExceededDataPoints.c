/*
 * XREFs of WdipSemSqmLogInflightLimitExceededDataPoints @ 0x14051C458
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x14051C244 (WdipTimeoutCheckRoutine.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C8620 (ExfReleasePushLock.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     WdipSemFastFree @ 0x1404E4414 (WdipSemFastFree.c)
 *     WdipSemGetGuidKey @ 0x14069C474 (WdipSemGetGuidKey.c)
 *     WdipSemSqmAddToStream @ 0x14069C628 (WdipSemSqmAddToStream.c)
 *     WdipSemSqmIncrementDword @ 0x14069C7C0 (WdipSemSqmIncrementDword.c)
 */

__int64 WdipSemSqmLogInflightLimitExceededDataPoints()
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v1; // rbx
  int v2; // esi
  _BYTE *v3; // rax
  __int64 v4; // rcx
  signed __int8 v5; // cf
  _BYTE *v6; // rdi
  __int64 v7; // rdi
  unsigned int i; // ebp
  ULONG_PTR v9; // rtt
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rdi
  int v17; // [rsp+20h] [rbp-38h] BYREF
  _DWORD v18[4]; // [rsp+28h] [rbp-30h] BYREF

  CurrentThread = KeGetCurrentThread();
  v1 = 0LL;
  v17 = 0;
  v2 = 0;
  --CurrentThread->KernelApcDisable;
  v3 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_140300348, 0LL, 0);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140300348, 0LL);
  v6 = v3;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&qword_140300348, v3, (ULONG_PTR)&qword_140300348);
  if ( v6 )
    v6[26] |= 1u;
  v7 = (unsigned int)dword_140300340;
  if ( dword_140300340 )
  {
    v2 = WdipSemSqmIncrementDword(v4, (unsigned int)dword_140300340);
    if ( v2 < 0 )
      v2 = 0;
    if ( (_DWORD)v7 )
    {
      v14 = &WdipSemFrequentScenarioTable;
      do
      {
        v15 = *v14;
        if ( (int)WdipSemGetGuidKey(*v14, &v17) >= 0 )
        {
          v18[0] = v17;
          v18[1] = *(unsigned __int16 *)(v15 + 16);
          v18[2] = *(_DWORD *)(v15 + 20);
          v2 = WdipSemSqmAddToStream(1062LL, 3LL, v18);
          if ( v2 < 0 )
            v2 = 0;
        }
        else
        {
          v2 = 0;
        }
        ++v14;
        --v7;
      }
      while ( v7 );
    }
  }
  for ( i = 0; i < dword_140300340; *((_QWORD *)&WdipSemFrequentScenarioTable + v16) = 0LL )
  {
    v16 = i;
    WdipSemFastFree(5, *((struct _SLIST_ENTRY **)&WdipSemFrequentScenarioTable + i++));
  }
  dword_140300340 = 0;
  _m_prefetchw(&qword_140300348);
  if ( (qword_140300348 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v1 = qword_140300348 - 16;
  if ( (qword_140300348 & 2) != 0
    || (v9 = qword_140300348,
        v9 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140300348, v1, qword_140300348)) )
  {
    ExfReleasePushLock(&qword_140300348);
  }
  KeAbPostRelease((ULONG_PTR)&qword_140300348);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v10, v11, v12);
  return (unsigned int)v2;
}
