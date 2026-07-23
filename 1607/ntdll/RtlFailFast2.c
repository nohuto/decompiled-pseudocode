/*
 * XREFs of RtlFailFast2 @ 0x1800AAE70
 * Callers:
 *     RtlGuardCheckLongJumpTarget @ 0x180039AE0 (RtlGuardCheckLongJumpTarget.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x1800EFC70 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn RtlFailFast2(unsigned int a1)
{
  __fastfail(a1);
}
