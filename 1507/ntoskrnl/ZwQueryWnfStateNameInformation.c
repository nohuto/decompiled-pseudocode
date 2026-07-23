/*
 * XREFs of ZwQueryWnfStateNameInformation @ 0x140181930
 * Callers:
 *     DbgkpStartSystemErrorHandler @ 0x1404090C4 (DbgkpStartSystemErrorHandler.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryWnfStateNameInformation(
        PCWNF_STATE_NAME StateName,
        WNF_STATE_NAME_INFORMATION NameInfoClass,
        const void *ExplicitScope,
        PVOID InfoBuffer,
        ULONG InfoBufferSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(StateName);
}
