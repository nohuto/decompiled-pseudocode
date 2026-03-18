/*
 * XREFs of _get_printf_count_output @ 0x14017615C
 * Callers:
 *     _woutput_l @ 0x1401747E0 (_woutput_l.c)
 *     _output_l @ 0x140175228 (_output_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_140323960 == (_security_cookie | 1);
}
