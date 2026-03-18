/*
 * XREFs of _get_printf_count_output @ 0x14015146C
 * Callers:
 *     _woutput_l @ 0x14014FB8C (_woutput_l.c)
 *     _output_l @ 0x140150590 (_output_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_1402F9BA0 == (_security_cookie | 1);
}
