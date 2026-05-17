/*
 * XREFs of RtlFailFast2 @ 0x1800967B0
 * Callers:
 *     RtlpHandleInvalidUserCallTarget @ 0x1800E5930 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn RtlFailFast2(unsigned int a1)
{
  __fastfail(a1);
}
