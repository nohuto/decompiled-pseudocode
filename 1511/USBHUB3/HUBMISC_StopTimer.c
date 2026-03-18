/*
 * XREFs of HUBMISC_StopTimer @ 0x1C0023CE4
 * Callers:
 *     HUBDSM_StoppingTimerOnHubSuspendInSettingAddress @ 0x1C00181D0 (HUBDSM_StoppingTimerOnHubSuspendInSettingAddress.c)
 *     HUBDSM_StoppingTimerAndRequestingCycleOnStopSuspend @ 0x1C001A4C0 (HUBDSM_StoppingTimerAndRequestingCycleOnStopSuspend.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBMISC_StopTimer(__int64 a1)
{
  char v1; // al
  unsigned int v2; // ecx

  v1 = ExCancelTimer(*(_QWORD *)(a1 + 1528), 0LL);
  v2 = 4065;
  if ( v1 == 1 )
    return 4077;
  return v2;
}
