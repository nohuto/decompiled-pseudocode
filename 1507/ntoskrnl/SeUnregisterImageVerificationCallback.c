/*
 * XREFs of SeUnregisterImageVerificationCallback @ 0x1406D07E4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SeUnregisterImageVerificationCallback(PVOID CallbackRegistration)
{
  _InterlockedDecrement(&dword_14036A864);
  ExUnregisterCallback(CallbackRegistration);
}
