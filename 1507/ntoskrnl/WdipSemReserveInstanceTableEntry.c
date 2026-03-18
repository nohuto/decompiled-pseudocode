/*
 * XREFs of WdipSemReserveInstanceTableEntry @ 0x14056BBB0
 * Callers:
 *     WdipSemEnableScenario @ 0x140581A0C (WdipSemEnableScenario.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     WdipSemQueryEnabledInstanceTable @ 0x1405521E8 (WdipSemQueryEnabledInstanceTable.c)
 *     WdipSemBuildScenarioInstance @ 0x14056BD00 (WdipSemBuildScenarioInstance.c)
 *     WdipSemLogInflightLimitExceededInformation @ 0x1406DECE0 (WdipSemLogInflightLimitExceededInformation.c)
 */

__int64 *__fastcall WdipSemReserveInstanceTableEntry(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r9
  signed __int8 v11; // cf
  __int64 v12; // rdi
  __int64 **v13; // rax
  signed __int64 v14; // rcx
  ULONG_PTR v15; // rtt
  struct _KTHREAD *v16; // rcx
  __int16 v17; // ax

  CurrentThread = KeGetCurrentThread();
  v7 = 0LL;
  --CurrentThread->KernelApcDisable;
  v8 = KeAbPreAcquire((ULONG_PTR)&qword_14032AB58, 0LL, 0LL, a4);
  v11 = _interlockedbittestandset64((volatile signed __int32 *)&qword_14032AB58, 0LL);
  v12 = v8;
  if ( v11 )
    ExfAcquirePushLockExclusiveEx(&qword_14032AB58, v8, (ULONG_PTR)&qword_14032AB58, v10);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  if ( a1 && a2 )
  {
    if ( (unsigned int)dword_14032AB50 >= 0x80 )
    {
      WdipSemLogInflightLimitExceededInformation(a1, *(unsigned __int16 *)(a1 + 16), a2);
    }
    else if ( !WdipSemQueryEnabledInstanceTable(a2) )
    {
      v7 = (__int64 *)WdipSemBuildScenarioInstance(a1, a2);
      if ( v7 )
      {
        v13 = (__int64 **)qword_14032AB48;
        *v7 = (__int64)&WdipSemEnabledInstanceTable;
        v7[1] = (__int64)v13;
        if ( *v13 != &WdipSemEnabledInstanceTable )
          __fastfail(3u);
        *v13 = v7;
        ++dword_14032AB50;
        qword_14032AB48 = (__int64)v7;
      }
    }
  }
  _m_prefetchw(&qword_14032AB58);
  v14 = qword_14032AB58 - 16;
  if ( (qword_14032AB58 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v14 = 0LL;
  if ( (qword_14032AB58 & 2) != 0
    || (v15 = qword_14032AB58,
        v15 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14032AB58, v14, qword_14032AB58)) )
  {
    ExfReleasePushLock(&qword_14032AB58, v9);
  }
  KeAbPostRelease((ULONG_PTR)&qword_14032AB58);
  v16 = KeGetCurrentThread();
  v17 = v16->KernelApcDisable + 1;
  v16->KernelApcDisable = v17;
  if ( !v17
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v16->ApcState.ApcListHead[0].Flink != &v16->152
    && !v16->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v7;
}
