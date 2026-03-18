/*
 * XREFs of xxxRedrawHungWindowFrame @ 0x1C0152ED0
 * Callers:
 *     xxxHungAppDemon @ 0x1C0059550 (xxxHungAppDemon.c)
 *     xxxSetForegroundWindow2 @ 0x1C009D654 (xxxSetForegroundWindow2.c)
 * Callees:
 *     ClearHungFlag @ 0x1C00554FC (ClearHungFlag.c)
 */

__int64 __fastcall xxxRedrawHungWindowFrame(struct tagWND *a1)
{
  ClearHungFlag(a1, 0x310u);
  return ProcessHungWindow();
}
