/*
 * XREFs of ?W32kCddIncPresentUniq@@YAXXZ @ 0x1C008A240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void W32kCddIncPresentUniq(void)
{
  ++LODWORD(WPP_MAIN_CB.DeviceQueue.Lock);
}
