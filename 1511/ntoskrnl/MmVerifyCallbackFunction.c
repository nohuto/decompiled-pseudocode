/*
 * XREFs of MmVerifyCallbackFunction @ 0x1404E2C04
 * Callers:
 *     KeRegisterBoundCallback @ 0x1401C3ED8 (KeRegisterBoundCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmVerifyCallbackFunction(unsigned __int64 a1)
{
  return MmVerifyCallbackFunctionCheckFlags(a1, 32);
}
