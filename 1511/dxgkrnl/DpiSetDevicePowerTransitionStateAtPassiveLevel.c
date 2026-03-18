/*
 * XREFs of DpiSetDevicePowerTransitionStateAtPassiveLevel @ 0x1C0023460
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C00CA970 (DpiFdoHandleDevicePower.c)
 *     DpiPowerArbiterThread @ 0x1C00E8F50 (DpiPowerArbiterThread.c)
 * Callees:
 *     DxgkReportDevicePoweredOn @ 0x1C001C05C (DxgkReportDevicePoweredOn.c)
 */

void __fastcall DpiSetDevicePowerTransitionStateAtPassiveLevel(__int64 a1, int a2, char a3)
{
  __int64 v3; // rdi
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = a2;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 2712), &LockHandle);
  if ( (_DWORD)v3 != 5 || *(_DWORD *)(a1 + 2776) == 4 )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdPower();
    v6[5] = 0LL;
    v6[3] = a1;
    v6[4] = v3;
    WdLogEvent5_WdPower(v6);
    *(_DWORD *)(a1 + 2776) = v3;
  }
  if ( a3 && !*(_DWORD *)(a1 + 2780) )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdPower();
    v7[3] = a1;
    v7[4] = v3;
    v7[5] = 1LL;
    WdLogEvent5_WdPower(v7);
    DxgkReportDevicePoweredOn(*(_QWORD *)(a1 + 2544));
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
