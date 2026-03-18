/*
 * XREFs of WdipSemDeleteTransitionalInstance @ 0x140552314
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x14054CD10 (WdipTimeoutCheckRoutine.c)
 *     WdipSemDisableScenario @ 0x140551F04 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x140581A0C (WdipSemEnableScenario.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 */

__int64 __fastcall WdipSemDeleteTransitionalInstance(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r9
  signed __int8 v9; // cf
  __int64 v10; // rbx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  signed __int64 v13; // rcx
  ULONG_PTR v14; // rtt
  struct _KTHREAD *v15; // rcx
  __int16 v16; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((ULONG_PTR)&qword_14032AB58, 0LL, 0LL, a4);
  v9 = _interlockedbittestandset64((volatile signed __int32 *)&qword_14032AB58, 0LL);
  v10 = v6;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(&qword_14032AB58, v6, (ULONG_PTR)&qword_14032AB58, v8);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  v11 = *a1;
  v12 = (_QWORD *)a1[1];
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (_QWORD *)*v12 != a1 )
    __fastfail(3u);
  *v12 = v11;
  *(_QWORD *)(v11 + 8) = v12;
  --dword_14032AB50;
  _m_prefetchw(&qword_14032AB58);
  v13 = qword_14032AB58 - 16;
  if ( (qword_14032AB58 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v13 = 0LL;
  if ( (qword_14032AB58 & 2) != 0
    || (v14 = qword_14032AB58,
        v14 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14032AB58, v13, qword_14032AB58)) )
  {
    ExfReleasePushLock(&qword_14032AB58, v7);
  }
  KeAbPostRelease((ULONG_PTR)&qword_14032AB58);
  v15 = KeGetCurrentThread();
  v16 = v15->KernelApcDisable + 1;
  v15->KernelApcDisable = v16;
  if ( !v16
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v15->ApcState.ApcListHead[0].Flink != &v15->152
    && !v15->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return WdipSemFastFree(3LL, a1);
}
