/*
 * XREFs of DbgkpWerDeferredWriteRoutine @ 0x1405F1F64
 * Callers:
 *     <none>
 * Callees:
 *     WerLiveKernelSubmitReport_0 @ 0x1400012E8 (WerLiveKernelSubmitReport_0.c)
 *     KeCancelTimer @ 0x140091500 (KeCancelTimer.c)
 *     KeSetTimer @ 0x140091530 (KeSetTimer.c)
 *     DbgPrintEx @ 0x1400E6934 (DbgPrintEx.c)
 *     DbgkpWerCleanupContext @ 0x1405F1DC4 (DbgkpWerCleanupContext.c)
 *     IoWriteDeferredLiveDumpData @ 0x1405FC8A4 (IoWriteDeferredLiveDumpData.c)
 */

__int64 __fastcall DbgkpWerDeferredWriteRoutine(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rax
  struct _KTIMER *v4; // rbp
  int v5; // esi
  int v6; // eax

  DbgPrintEx(5u, 3u, "DBGK: DbgkpWerDeferredWriteRoutine entered, context 0x%p\n", (const void *)a1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = *(_QWORD *)(a1 + 128);
  v4 = *(struct _KTIMER **)(v3 + 16);
  if ( v4 )
    KeSetTimer(*(PKTIMER *)(v3 + 16), (LARGE_INTEGER)(-10000000LL * DbgkpWerDeferredWriteTimeoutSeconds), 0LL);
  v5 = IoWriteDeferredLiveDumpData(*(PVOID *)(a1 + 136));
  KeCancelTimer(v4);
  *(_QWORD *)(a1 + 136) = 0LL;
  if ( v5 >= 0 )
  {
    v6 = WerLiveKernelSubmitReport_0();
    if ( v6 >= 0 )
      *(_DWORD *)(a1 + 112) |= 1u;
    else
      DbgPrintEx(
        5u,
        0,
        "DBGK: DbgkpWerDeferredWriteRoutine: WerLiveKernelSubmitReport failed with status 0x%X\n",
        (unsigned int)v6);
  }
  else
  {
    DbgPrintEx(5u, 0, "DBGK: DbgkpWerDeferredWriteRoutine: dump write failed with status 0x%X\n", (unsigned int)v5);
  }
  DbgkpWerCleanupContext(a1);
  _InterlockedExchange(&DbgkpBusy, 0);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
