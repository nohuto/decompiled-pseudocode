/*
 * XREFs of WdipSemActivateInstance @ 0x14056BDC8
 * Callers:
 *     WdipSemDisableScenario @ 0x140551F04 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x140581A0C (WdipSemEnableScenario.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 */

void __fastcall WdipSemActivateInstance(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r9
  signed __int8 v9; // cf
  __int64 v10; // rbx
  signed __int64 v11; // rcx
  ULONG_PTR v12; // rtt
  struct _KTHREAD *v13; // rcx
  __int16 v14; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((ULONG_PTR)&qword_14032AB58, 0LL, 0LL, a4);
  v9 = _interlockedbittestandset64((volatile signed __int32 *)&qword_14032AB58, 0LL);
  v10 = v6;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(&qword_14032AB58, v6, (ULONG_PTR)&qword_14032AB58, v8);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  *(_DWORD *)(a1 + 44) = 0;
  _m_prefetchw(&qword_14032AB58);
  v11 = qword_14032AB58 - 16;
  if ( (qword_14032AB58 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v11 = 0LL;
  if ( (qword_14032AB58 & 2) != 0
    || (v12 = qword_14032AB58,
        v12 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14032AB58, v11, qword_14032AB58)) )
  {
    ExfReleasePushLock(&qword_14032AB58, v7);
  }
  KeAbPostRelease((ULONG_PTR)&qword_14032AB58);
  v13 = KeGetCurrentThread();
  v14 = v13->KernelApcDisable + 1;
  v13->KernelApcDisable = v14;
  if ( !v14
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
    && !v13->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
