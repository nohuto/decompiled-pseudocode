/*
 * XREFs of PfSnPowerBoostWorker @ 0x140631B58
 * Callers:
 *     <none>
 * Callees:
 *     PfSnPowerBoostUpdate @ 0x1404C17F0 (PfSnPowerBoostUpdate.c)
 */

void __fastcall PfSnPowerBoostWorker(struct _EX_RUNDOWN_REF *a1)
{
  PfSnPowerBoostUpdate(0);
  ExReleaseRundownProtection_0(a1);
}
