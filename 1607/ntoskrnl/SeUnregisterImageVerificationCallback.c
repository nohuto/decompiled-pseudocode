/*
 * XREFs of SeUnregisterImageVerificationCallback @ 0x14068CA9C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SeUnregisterImageVerificationCallback(PVOID CallbackRegistration)
{
  _InterlockedDecrement(&dword_14033E264);
  ExUnregisterCallback(CallbackRegistration);
}
