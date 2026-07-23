/*
 * XREFs of PfSnPowerBoostWorker @ 0x140669DB0
 * Callers:
 *     <none>
 * Callees:
 *     PfSnPowerBoostUpdate @ 0x1404CD05C (PfSnPowerBoostUpdate.c)
 */

void __fastcall PfSnPowerBoostWorker(struct _EX_RUNDOWN_REF *a1)
{
  PfSnPowerBoostUpdate(0);
  ExReleaseRundownProtection(a1);
}
