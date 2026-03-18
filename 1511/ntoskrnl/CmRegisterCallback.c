/*
 * XREFs of CmRegisterCallback @ 0x140548A04
 * Callers:
 *     VerifierCmRegisterCallback @ 0x1406C0320 (VerifierCmRegisterCallback.c)
 * Callees:
 *     CmpRegisterCallbackInternal @ 0x140548A24 (CmpRegisterCallbackInternal.c)
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
