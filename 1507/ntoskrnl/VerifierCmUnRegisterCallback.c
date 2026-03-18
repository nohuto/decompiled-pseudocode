/*
 * XREFs of VerifierCmUnRegisterCallback @ 0x140741B24
 * Callers:
 *     <none>
 * Callees:
 *     CmUnRegisterCallback @ 0x1406527EC (CmUnRegisterCallback.c)
 */

NTSTATUS __fastcall VerifierCmUnRegisterCallback(LARGE_INTEGER a1)
{
  return pXdvCmUnRegisterCallback(a1);
}
