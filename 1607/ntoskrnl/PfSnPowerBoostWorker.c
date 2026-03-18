/*
 * XREFs of PfSnPowerBoostWorker @ 0x140669CCC
 * Callers:
 *     <none>
 * Callees:
 *     PfSnPowerBoostUpdate @ 0x1404EB038 (PfSnPowerBoostUpdate.c)
 */

void __fastcall PfSnPowerBoostWorker(struct _EX_RUNDOWN_REF *a1)
{
  PfSnPowerBoostUpdate(0);
  ExReleaseRundownProtection(a1);
}
