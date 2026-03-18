/*
 * XREFs of MmVerifyCallbackFunction @ 0x1406597F4
 * Callers:
 *     KeRegisterBoundCallback @ 0x1401D2A80 (KeRegisterBoundCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmVerifyCallbackFunction(unsigned __int64 a1)
{
  return MmVerifyCallbackFunctionCheckFlags(a1, 32);
}
