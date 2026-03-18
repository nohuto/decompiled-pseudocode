/*
 * XREFs of IoVerifierInit @ 0x1407347D8
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140736CF8 (VfInitSystemNoRebootNeeded.c)
 *     VfInitBootDriversLoaded @ 0x1407CBEA0 (VfInitBootDriversLoaded.c)
 * Callees:
 *     IopUpdateFunctionPointers @ 0x1401F2AA4 (IopUpdateFunctionPointers.c)
 */

__int64 __fastcall IoVerifierInit(char a1)
{
  IovpInitCalled = 1;
  IopUpdateFunctionPointers(1, 1, 0);
  return IoVerifierCheckForSettingsChange(a1);
}
