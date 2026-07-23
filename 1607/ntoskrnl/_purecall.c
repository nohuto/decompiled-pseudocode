/*
 * XREFs of _purecall @ 0x14022E928
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 */

void __noreturn purecall()
{
  RtlRaiseStatus(-1073741822);
}
