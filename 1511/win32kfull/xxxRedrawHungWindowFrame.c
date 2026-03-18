/*
 * XREFs of xxxRedrawHungWindowFrame @ 0x1C01425EC
 * Callers:
 *     xxxHungAppDemon @ 0x1C008C230 (xxxHungAppDemon.c)
 *     xxxSetForegroundWindow2 @ 0x1C008D958 (xxxSetForegroundWindow2.c)
 * Callees:
 *     ClearHungFlag @ 0x1C0067F28 (ClearHungFlag.c)
 */

__int64 __fastcall xxxRedrawHungWindowFrame(struct tagWND *a1)
{
  ClearHungFlag(a1, 0x310u);
  return ProcessHungWindow(a1);
}
