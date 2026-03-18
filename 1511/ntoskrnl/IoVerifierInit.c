/*
 * XREFs of IoVerifierInit @ 0x1406B47D8
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x1406B6A08 (VfInitSystemNoRebootNeeded.c)
 *     VfInitBootDriversLoaded @ 0x14074AA04 (VfInitBootDriversLoaded.c)
 * Callees:
 *     IopUpdateFunctionPointers @ 0x1401B770C (IopUpdateFunctionPointers.c)
 */

__int64 __fastcall IoVerifierInit(char a1)
{
  IovpInitCalled = 1;
  IopUpdateFunctionPointers(1, 1, 0);
  return IoVerifierCheckForSettingsChange(a1);
}
