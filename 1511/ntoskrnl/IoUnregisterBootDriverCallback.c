/*
 * XREFs of IoUnregisterBootDriverCallback @ 0x1407725A0
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
