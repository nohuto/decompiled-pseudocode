/*
 * XREFs of VerifierCmUnRegisterCallback @ 0x1406C0330
 * Callers:
 *     <none>
 * Callees:
 *     CmUnRegisterCallback @ 0x1405DD2C0 (CmUnRegisterCallback.c)
 */

NTSTATUS __fastcall VerifierCmUnRegisterCallback(LARGE_INTEGER a1)
{
  return pXdvCmUnRegisterCallback(a1);
}
