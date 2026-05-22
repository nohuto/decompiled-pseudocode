/*
 * XREFs of ?OnInputReportReceived@WGIController@@UEAAJ_KEIPEBE@Z @ 0x180062C90
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyCurrentGamepadReading@WGIController@@AEAAJXZ @ 0x180062CC4 (-NotifyCurrentGamepadReading@WGIController@@AEAAJXZ.c)
 */

__int64 __fastcall WGIController::OnInputReportReceived(WGIController *this)
{
  WGIController::NotifyCurrentGamepadReading((WGIController *)((char *)this - 32));
  return 0LL;
}
