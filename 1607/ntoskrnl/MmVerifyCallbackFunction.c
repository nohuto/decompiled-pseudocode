/*
 * XREFs of MmVerifyCallbackFunction @ 0x1406598D8
 * Callers:
 *     KeRegisterBoundCallback @ 0x1401D28AC (KeRegisterBoundCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmVerifyCallbackFunction(unsigned __int64 a1)
{
  return MmVerifyCallbackFunctionCheckFlags(a1, 32);
}
