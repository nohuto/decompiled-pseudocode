/*
 * XREFs of ?W32kCddIncPresentUniq@@YAXXZ @ 0x1C00892A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void W32kCddIncPresentUniq(void)
{
  ++WPP_MAIN_CB.Dpc.TargetInfoAsUlong;
}
