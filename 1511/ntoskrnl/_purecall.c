/*
 * XREFs of _purecall @ 0x140214D00
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 */

void __noreturn purecall()
{
  RtlRaiseStatus(-1073741822);
}
