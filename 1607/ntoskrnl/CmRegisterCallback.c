/*
 * XREFs of CmRegisterCallback @ 0x140581C4C
 * Callers:
 *     <none>
 * Callees:
 *     CmpRegisterCallbackInternal @ 0x14055163C (CmpRegisterCallbackInternal.c)
 */

NTSTATUS __stdcall CmRegisterCallback(PEX_CALLBACK_FUNCTION Function, PVOID Context, PLARGE_INTEGER Cookie)
{
  return CmpRegisterCallbackInternal((__int64)Function, (__int64)Context, (const void **)&CmLegacyAltitude, 1, Cookie);
}
