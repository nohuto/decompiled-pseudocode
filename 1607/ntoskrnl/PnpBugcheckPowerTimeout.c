/*
 * XREFs of PnpBugcheckPowerTimeout @ 0x1401CDB54
 * Callers:
 *     PopBuildDeviceNotifyListWatchdog @ 0x1403DF414 (PopBuildDeviceNotifyListWatchdog.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

void __noreturn PnpBugcheckPowerTimeout()
{
  ULONG_PTR v0; // r9
  ULONG_PTR BugCheckParameter4[5]; // [rsp+30h] [rbp-28h] BYREF

  v0 = PnpDeviceEventThread;
  if ( !PnpDeviceEventThread )
    v0 = PnpDeviceActionThread;
  BugCheckParameter4[0] = 98305LL;
  BugCheckParameter4[1] = (ULONG_PTR)&PnpDeviceCompletionQueue;
  BugCheckParameter4[2] = ExWorkerQueue;
  KeBugCheckEx(0x9Fu, 4uLL, (unsigned int)PopWatchdogSleepTimeout, v0, (ULONG_PTR)BugCheckParameter4);
}
