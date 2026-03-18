/*
 * XREFs of PopBuildDeviceNotifyListWatchdog @ 0x1403DF414
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     PnpBugcheckPowerTimeout @ 0x1401CDD08 (PnpBugcheckPowerTimeout.c)
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
