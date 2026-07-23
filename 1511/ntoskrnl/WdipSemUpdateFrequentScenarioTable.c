/*
 * XREFs of WdipSemUpdateFrequentScenarioTable @ 0x14065C618
 * Callers:
 *     WdipSemLogInflightLimitExceededInformation @ 0x14065C464 (WdipSemLogInflightLimitExceededInformation.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     WdipSemFastAllocate @ 0x140504B4C (WdipSemFastAllocate.c)
 */

__int64 __fastcall WdipSemUpdateFrequentScenarioTable(_SLIST_ENTRY *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v2; // rbx
  unsigned int v4; // esi
  __int64 v5; // rax
  signed __int8 v6; // cf
  __int64 v7; // rdi
  PSLIST_ENTRY v8; // rax
  ULONG_PTR v9; // rtt

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  v4 = 0;
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((ULONG_PTR)&qword_1402DAE08, 0LL, 0LL);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1402DAE08, 0LL);
  v7 = v5;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(&qword_1402DAE08, v5, (ULONG_PTR)&qword_1402DAE08);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  if ( a1 )
  {
    if ( (unsigned int)dword_1402DAE00 < 0x80 )
    {
      v8 = WdipSemFastAllocate(5, 0x18u);
      if ( v8 )
      {
        *v8 = *a1;
        v8[1].Next = a1[1].Next;
        WdipSemFrequentScenarioTable[dword_1402DAE00++] = v8;
      }
      else
      {
        v4 = -1073741670;
      }
    }
    else
    {
      v4 = -1073741823;
    }
  }
  else
  {
    v4 = -1073741811;
  }
  _m_prefetchw(&qword_1402DAE08);
  if ( (qword_1402DAE08 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v2 = qword_1402DAE08 - 16;
  if ( (qword_1402DAE08 & 2) != 0
    || (v9 = qword_1402DAE08,
        v9 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1402DAE08, v2, qword_1402DAE08)) )
  {
    ExfReleasePushLock(&qword_1402DAE08);
  }
  KeAbPostRelease((ULONG_PTR)&qword_1402DAE08);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v4;
}
