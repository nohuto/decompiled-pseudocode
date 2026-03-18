/*
 * XREFs of WdipSemReserveInstanceTableEntry @ 0x1405046F8
 * Callers:
 *     WdipSemEnableScenario @ 0x140505934 (WdipSemEnableScenario.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     WdipSemBuildScenarioInstance @ 0x140504830 (WdipSemBuildScenarioInstance.c)
 *     WdipSemQueryEnabledInstanceTable @ 0x1405058F4 (WdipSemQueryEnabledInstanceTable.c)
 *     WdipSemLogInflightLimitExceededInformation @ 0x14065C464 (WdipSemLogInflightLimitExceededInformation.c)
 */

__int64 *__fastcall WdipSemReserveInstanceTableEntry(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v3; // rbx
  __int64 *v6; // rdi
  __int64 v7; // rax
  signed __int8 v8; // cf
  __int64 v9; // rsi
  __int64 **v10; // rax
  ULONG_PTR v11; // rtt

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v6 = 0LL;
  --CurrentThread->KernelApcDisable;
  v7 = KeAbPreAcquire((ULONG_PTR)&qword_1402DA7B8, 0LL, 0LL);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1402DA7B8, 0LL);
  v9 = v7;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(&qword_1402DA7B8, v7, (ULONG_PTR)&qword_1402DA7B8);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  if ( a1 && a2 )
  {
    if ( (unsigned int)dword_1402DA7B0 >= 0x80 )
    {
      WdipSemLogInflightLimitExceededInformation(a1, *(unsigned __int16 *)(a1 + 16), a2);
    }
    else if ( !WdipSemQueryEnabledInstanceTable(a2) )
    {
      v6 = (__int64 *)WdipSemBuildScenarioInstance(a1, a2);
      if ( v6 )
      {
        v10 = (__int64 **)qword_1402DA7A8;
        *v6 = (__int64)&WdipSemEnabledInstanceTable;
        v6[1] = (__int64)v10;
        if ( *v10 != &WdipSemEnabledInstanceTable )
          __fastfail(3u);
        *v10 = v6;
        ++dword_1402DA7B0;
        qword_1402DA7A8 = (__int64)v6;
      }
    }
  }
  _m_prefetchw(&qword_1402DA7B8);
  if ( (qword_1402DA7B8 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v3 = qword_1402DA7B8 - 16;
  if ( (qword_1402DA7B8 & 2) != 0
    || (v11 = qword_1402DA7B8,
        v11 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1402DA7B8, v3, qword_1402DA7B8)) )
  {
    ExfReleasePushLock(&qword_1402DA7B8);
  }
  KeAbPostRelease((ULONG_PTR)&qword_1402DA7B8);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v6;
}
