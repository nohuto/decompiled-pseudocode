/*
 * XREFs of WdipSemReserveInstanceTableEntry @ 0x140541C74
 * Callers:
 *     WdipSemEnableScenario @ 0x1405417D8 (WdipSemEnableScenario.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C8620 (ExfReleasePushLock.c)
 *     WdipSemQueryEnabledInstanceTable @ 0x1404E4050 (WdipSemQueryEnabledInstanceTable.c)
 *     WdipSemBuildScenarioInstance @ 0x140541DAC (WdipSemBuildScenarioInstance.c)
 *     WdipSemLogInflightLimitExceededInformation @ 0x14069BA2C (WdipSemLogInflightLimitExceededInformation.c)
 */

_QWORD *__fastcall WdipSemReserveInstanceTableEntry(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v3; // rbx
  _QWORD *v6; // rdi
  _BYTE *v7; // rax
  signed __int8 v8; // cf
  _BYTE *v9; // rsi
  _QWORD *v10; // rax
  ULONG_PTR v11; // rtt
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v6 = 0LL;
  --CurrentThread->KernelApcDisable;
  v7 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_1402FDF18, 0LL, 0);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1402FDF18, 0LL);
  v9 = v7;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(&qword_1402FDF18, v7, (ULONG_PTR)&qword_1402FDF18);
  if ( v9 )
    v9[26] |= 1u;
  if ( a1 && a2 )
  {
    if ( (unsigned int)dword_1402FDF10 >= 0x80 )
    {
      WdipSemLogInflightLimitExceededInformation(a1, *(unsigned __int16 *)(a1 + 16), a2);
    }
    else if ( !WdipSemQueryEnabledInstanceTable(a2) )
    {
      v6 = (_QWORD *)WdipSemBuildScenarioInstance(a1, a2);
      if ( v6 )
      {
        v10 = (_QWORD *)qword_1402FDF08;
        if ( *(__int64 **)qword_1402FDF08 != &WdipSemEnabledInstanceTable )
          __fastfail(3u);
        *v6 = &WdipSemEnabledInstanceTable;
        v6[1] = v10;
        *v10 = v6;
        ++dword_1402FDF10;
        qword_1402FDF08 = (__int64)v6;
      }
    }
  }
  _m_prefetchw(&qword_1402FDF18);
  if ( (qword_1402FDF18 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v3 = qword_1402FDF18 - 16;
  if ( (qword_1402FDF18 & 2) != 0
    || (v11 = qword_1402FDF18,
        v11 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1402FDF18, v3, qword_1402FDF18)) )
  {
    ExfReleasePushLock(&qword_1402FDF18);
  }
  KeAbPostRelease((ULONG_PTR)&qword_1402FDF18);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v12, v13, v14);
  return v6;
}
