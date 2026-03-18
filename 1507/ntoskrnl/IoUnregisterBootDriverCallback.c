/*
 * XREFs of IoUnregisterBootDriverCallback @ 0x1407E91A4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall IoUnregisterBootDriverCallback(PVOID CallbackRegistration)
{
  ExUnregisterCallback(CallbackRegistration);
}
