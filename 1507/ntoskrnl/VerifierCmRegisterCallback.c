/*
 * XREFs of VerifierCmRegisterCallback @ 0x140741B14
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierCmRegisterCallback(PEX_CALLBACK_FUNCTION Function, PVOID Context, PLARGE_INTEGER Cookie)
{
  return pXdvCmRegisterCallback(Function, Context, Cookie);
}
