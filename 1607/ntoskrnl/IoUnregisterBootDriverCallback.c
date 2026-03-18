/*
 * XREFs of IoUnregisterBootDriverCallback @ 0x1407BD3C4
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
