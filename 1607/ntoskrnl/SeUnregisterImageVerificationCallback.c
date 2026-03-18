/*
 * XREFs of SeUnregisterImageVerificationCallback @ 0x14068C9B8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SeUnregisterImageVerificationCallback(PVOID CallbackRegistration)
{
  _InterlockedDecrement(&dword_14033E224);
  ExUnregisterCallback(CallbackRegistration);
}
