/*
 * XREFs of ObpSetSiloDeviceMap @ 0x140579DF0
 * Callers:
 *     ObpCreateDosDevicesDirectory @ 0x140579BE8 (ObpCreateDosDevicesDirectory.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140002DFC (xHalTimerWatchdogStop.c)
 *     PsGetEffectiveServerSilo @ 0x140076688 (PsGetEffectiveServerSilo.c)
 *     ObpSetDeviceMap @ 0x1404E9E58 (ObpSetDeviceMap.c)
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
