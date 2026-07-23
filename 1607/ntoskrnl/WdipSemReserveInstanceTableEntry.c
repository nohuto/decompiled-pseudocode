/*
 * XREFs of WdipSemReserveInstanceTableEntry @ 0x1405421B4
 * Callers:
 *     WdipSemEnableScenario @ 0x140541D18 (WdipSemEnableScenario.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     WdipSemQueryEnabledInstanceTable @ 0x1404C6D08 (WdipSemQueryEnabledInstanceTable.c)
 *     WdipSemBuildScenarioInstance @ 0x1405422EC (WdipSemBuildScenarioInstance.c)
 *     WdipSemLogInflightLimitExceededInformation @ 0x14069BB10 (WdipSemLogInflightLimitExceededInformation.c)
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
  v7 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_1402FDEF8, 0LL, 0);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1402FDEF8, 0LL);
  v9 = v7;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(&qword_1402FDEF8, v7, (ULONG_PTR)&qword_1402FDEF8);
  if ( v9 )
    v9[26] |= 1u;
  if ( a1 && a2 )
  {
    if ( (unsigned int)dword_1402FDEF0 >= 0x80 )
    {
      WdipSemLogInflightLimitExceededInformation(a1, *(unsigned __int16 *)(a1 + 16), a2);
    }
    else if ( !WdipSemQueryEnabledInstanceTable(a2) )
    {
      v6 = (_QWORD *)WdipSemBuildScenarioInstance(a1, a2);
      if ( v6 )
      {
        v10 = (_QWORD *)qword_1402FDEE8;
        if ( *(__int64 **)qword_1402FDEE8 != &WdipSemEnabledInstanceTable )
          __fastfail(3u);
        *v6 = &WdipSemEnabledInstanceTable;
        v6[1] = v10;
        *v10 = v6;
        ++dword_1402FDEF0;
        qword_1402FDEE8 = (__int64)v6;
      }
    }
  }
  _m_prefetchw(&qword_1402FDEF8);
  if ( (qword_1402FDEF8 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v3 = qword_1402FDEF8 - 16;
  if ( (qword_1402FDEF8 & 2) != 0
    || (v11 = qword_1402FDEF8,
        v11 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1402FDEF8, v3, qword_1402FDEF8)) )
  {
    ExfReleasePushLock(&qword_1402FDEF8);
  }
  KeAbPostRelease((ULONG_PTR)&qword_1402FDEF8);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v12, v13, v14);
  return v6;
}
