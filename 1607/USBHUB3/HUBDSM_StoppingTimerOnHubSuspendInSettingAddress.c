/*
 * XREFs of HUBDSM_StoppingTimerOnHubSuspendInSettingAddress @ 0x1C0018220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_StoppingTimerOnHubSuspendInSettingAddress(__int64 a1)
{
  return HUBMISC_StopTimer(*(_QWORD *)(a1 + 960));
}
