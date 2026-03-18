/*
 * XREFs of PopBuildDeviceNotifyListWatchdog @ 0x1403B2728
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     PnpBugcheckPowerTimeout @ 0x1401BF780 (PnpBugcheckPowerTimeout.c)
 */

void __fastcall __noreturn PopBuildDeviceNotifyListWatchdog(
        struct _KDPC *Dpc,
        struct _KEVENT *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  KeSetEvent(DeferredContext, 0, 0);
  PnpBugcheckPowerTimeout();
}
