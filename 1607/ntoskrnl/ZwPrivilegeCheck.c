/*
 * XREFs of ZwPrivilegeCheck @ 0x14015C6F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPrivilegeCheck(HANDLE ClientToken, PPRIVILEGE_SET RequiredPrivileges, PBOOLEAN Result)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ClientToken);
}
