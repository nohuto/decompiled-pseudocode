/*
 * XREFs of _get_printf_count_output @ 0x1800A090C
 * Callers:
 *     _output_l @ 0x18009D0F0 (_output_l.c)
 *     _woutput_l @ 0x18009DA70 (_woutput_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_180150390 == (_security_cookie | 1);
}
