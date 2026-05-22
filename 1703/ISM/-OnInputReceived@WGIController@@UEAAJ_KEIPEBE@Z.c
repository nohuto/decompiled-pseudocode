/*
 * XREFs of ?OnInputReceived@WGIController@@UEAAJ_KEIPEBE@Z @ 0x180062CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyCurrentGamepadReading@WGIController@@AEAAJXZ @ 0x180062CC4 (-NotifyCurrentGamepadReading@WGIController@@AEAAJXZ.c)
 */

__int64 __fastcall WGIController::OnInputReceived(WGIController *this)
{
  WGIController::NotifyCurrentGamepadReading((WGIController *)((char *)this - 40));
  return 0LL;
}
