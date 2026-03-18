/*
 * XREFs of IoVerifierInit @ 0x140700648
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x1407031D4 (VfInitSystemNoRebootNeeded.c)
 *     VfInitBootDriversLoaded @ 0x1407A52D8 (VfInitBootDriversLoaded.c)
 * Callees:
 *     IopUpdateFunctionPointers @ 0x1401C5478 (IopUpdateFunctionPointers.c)
 */

__int64 __fastcall IoVerifierInit(char a1)
{
  IopUpdateFunctionPointers(1, 1, 0);
  return IoVerifierCheckForSettingsChange(a1);
}
