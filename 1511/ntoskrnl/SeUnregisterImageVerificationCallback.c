/*
 * XREFs of SeUnregisterImageVerificationCallback @ 0x14064D3AC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SeUnregisterImageVerificationCallback(PVOID CallbackRegistration)
{
  _InterlockedDecrement(&dword_14031A500);
  ExUnregisterCallback(CallbackRegistration);
}
