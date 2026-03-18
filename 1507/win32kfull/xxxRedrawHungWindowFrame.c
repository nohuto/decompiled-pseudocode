/*
 * XREFs of xxxRedrawHungWindowFrame @ 0x1C0117688
 * Callers:
 *     xxxSetForegroundWindow2 @ 0x1C0045D90 (xxxSetForegroundWindow2.c)
 *     xxxHungAppDemon @ 0x1C008CC20 (xxxHungAppDemon.c)
 * Callees:
 *     ClearHungFlag @ 0x1C0089EE8 (ClearHungFlag.c)
 */

__int64 __fastcall xxxRedrawHungWindowFrame(struct tagWND *a1)
{
  ClearHungFlag(a1, 0x310u);
  return ProcessHungWindow(a1);
}
