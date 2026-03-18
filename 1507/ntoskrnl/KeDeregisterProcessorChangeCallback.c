/*
 * XREFs of KeDeregisterProcessorChangeCallback @ 0x140698E58
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall KeDeregisterProcessorChangeCallback(PVOID CallbackHandle)
{
  ExUnregisterCallback(CallbackHandle);
}
