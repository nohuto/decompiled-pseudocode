/*
 * XREFs of _purecall @ 0x14022EAFC
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1400F6738 (RtlRaiseStatus.c)
 */

void __noreturn purecall()
{
  RtlRaiseStatus(-1073741822);
}
