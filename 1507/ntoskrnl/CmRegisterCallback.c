/*
 * XREFs of CmRegisterCallback @ 0x1405BDDBC
 * Callers:
 *     VerifierCmRegisterCallback @ 0x140741B14 (VerifierCmRegisterCallback.c)
 * Callees:
 *     CmpRegisterCallbackInternal @ 0x1405BDDDC (CmpRegisterCallbackInternal.c)
 */

NTSTATUS __stdcall CmRegisterCallback(PEX_CALLBACK_FUNCTION Function, PVOID Context, PLARGE_INTEGER Cookie)
{
  return CmpRegisterCallbackInternal(
           (_DWORD)Function,
           (_DWORD)Context,
           (unsigned int)&CmLegacyAltitude,
           1,
           (__int64)Cookie);
}
