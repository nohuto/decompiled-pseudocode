/*
 * XREFs of RtlFailFast2 @ 0x1800A9B90
 * Callers:
 *     RtlpHandleInvalidUserCallTarget @ 0x1800EA410 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn RtlFailFast2(unsigned int a1)
{
  __fastfail(a1);
}
