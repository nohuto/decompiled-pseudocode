/*
 * XREFs of _get_printf_count_output @ 0x1401480D0
 * Callers:
 *     _woutput_l @ 0x1401467A8 (_woutput_l.c)
 *     _output_l @ 0x1401471F0 (_output_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_1402D4840 == (_security_cookie | 1);
}
