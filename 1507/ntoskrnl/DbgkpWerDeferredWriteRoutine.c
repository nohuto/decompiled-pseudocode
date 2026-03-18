/*
 * XREFs of DbgkpWerDeferredWriteRoutine @ 0x14066AC5C
 * Callers:
 *     <none>
 * Callees:
 *     WerLiveKernelSubmitReport_0 @ 0x1400012E8 (WerLiveKernelSubmitReport_0.c)
 *     KeCancelTimer @ 0x140066860 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x140068414 (KiSetTimerEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     DbgPrintEx @ 0x140131EAC (DbgPrintEx.c)
 *     DbgkpWerCleanupContext @ 0x14066AABC (DbgkpWerCleanupContext.c)
 *     IoWriteDeferredLiveDumpData @ 0x1406771E4 (IoWriteDeferredLiveDumpData.c)
 */

void __fastcall DbgkpWerDeferredWriteRoutine(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTIMER *v3; // rsi
  int v4; // edi
  int v5; // eax
  struct _KTHREAD *v6; // rcx
  __int16 v7; // ax

  DbgPrintEx(5u, 3u, "DBGK: DbgkpWerDeferredWriteRoutine entered, context 0x%p\n", (const void *)a1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = *(struct _KTIMER **)(*(_QWORD *)(a1 + 128) + 16LL);
  if ( v3 )
    KiSetTimerEx((__int64)v3, -10000000LL * DbgkpWerDeferredWriteTimeoutSeconds, 0, 0, 0LL);
  v4 = IoWriteDeferredLiveDumpData(*(PVOID *)(a1 + 136));
  KeCancelTimer(v3);
  *(_QWORD *)(a1 + 136) = 0LL;
  if ( v4 >= 0 )
  {
    v5 = WerLiveKernelSubmitReport_0();
    if ( v5 >= 0 )
      *(_DWORD *)(a1 + 112) |= 1u;
    else
      DbgPrintEx(
        5u,
        0,
        "DBGK: DbgkpWerDeferredWriteRoutine: WerLiveKernelSubmitReport failed with status 0x%X\n",
        (unsigned int)v5);
  }
  else
  {
    DbgPrintEx(5u, 0, "DBGK: DbgkpWerDeferredWriteRoutine: dump write failed with status 0x%X\n", (unsigned int)v4);
  }
  DbgkpWerCleanupContext(a1);
  _InterlockedExchange(&DbgkpBusy, 0);
  v6 = KeGetCurrentThread();
  v7 = v6->KernelApcDisable + 1;
  v6->KernelApcDisable = v7;
  if ( !v7
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v6->ApcState.ApcListHead[0].Flink != &v6->152
    && !v6->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
