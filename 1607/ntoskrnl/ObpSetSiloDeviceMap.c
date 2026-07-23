/*
 * XREFs of ObpSetSiloDeviceMap @ 0x14057A330
 * Callers:
 *     ObpCreateDosDevicesDirectory @ 0x14057A128 (ObpCreateDosDevicesDirectory.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140002F70 (xHalTimerWatchdogStop.c)
 *     PsGetEffectiveServerSilo @ 0x140076708 (PsGetEffectiveServerSilo.c)
 *     ObpSetDeviceMap @ 0x1404CBF4C (ObpSetDeviceMap.c)
 */

NTSTATUS __fastcall ObpSetSiloDeviceMap(__int64 a1, void *a2)
{
  void *EffectiveServerSilo; // rax
  PEPROCESS v5; // rdx
  char v6; // di

  EffectiveServerSilo = (void *)xHalTimerWatchdogStop();
  if ( (void *)a1 == EffectiveServerSilo )
  {
    v5 = PsInitialSystemProcess;
    v6 = 3;
  }
  else
  {
    v6 = 4;
    EffectiveServerSilo = (void *)PsGetEffectiveServerSilo(a1);
    v5 = 0LL;
  }
  return ObpSetDeviceMap(EffectiveServerSilo, (__int64)v5, a2, 0, v6, 0LL);
}
