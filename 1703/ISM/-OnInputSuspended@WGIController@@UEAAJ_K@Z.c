/*
 * XREFs of ?OnInputSuspended@WGIController@@UEAAJ_K@Z @ 0x180062800
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyCurrentGamepadReading@WGIController@@AEAAJXZ @ 0x180062CC4 (-NotifyCurrentGamepadReading@WGIController@@AEAAJXZ.c)
 */

__int64 __fastcall WGIController::OnInputSuspended(WGIController *this)
{
  WGIController::NotifyCurrentGamepadReading(this);
  return 0LL;
}
