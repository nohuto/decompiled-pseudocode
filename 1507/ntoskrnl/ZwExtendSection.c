/*
 * XREFs of ZwExtendSection @ 0x140180A50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwExtendSection(HANDLE SectionHandle, PLARGE_INTEGER NewMaximumSize)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle, NewMaximumSize, v2);
}
