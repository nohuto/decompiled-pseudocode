/*
 * XREFs of ?IsEndOfCapture@MPCGamepadProcessor@@UEAA_NPEAUInputInfo@@@Z @ 0x18002E810
 * Callers:
 *     <none>
 * Callees:
 *     ?AnyInputPressed@MPCGamepadProcessor@@AEAA_NXZ @ 0x18002E828 (-AnyInputPressed@MPCGamepadProcessor@@AEAA_NXZ.c)
 */

bool __fastcall MPCGamepadProcessor::IsEndOfCapture(MPCGamepadProcessor *this, struct InputInfo *a2)
{
  return !MPCGamepadProcessor::AnyInputPressed((MPCGamepadProcessor *)((char *)this - 24));
}
