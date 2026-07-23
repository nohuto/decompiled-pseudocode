/*
 * XREFs of ZwStopProfile @ 0x140182390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwStopProfile(HANDLE ProfileHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProfileHandle);
}
