/*
 * XREFs of _get_printf_count_output @ 0x140151A24
 * Callers:
 *     _woutput_l @ 0x140150144 (_woutput_l.c)
 *     _output_l @ 0x140150B48 (_output_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_1402F9BA0 == (_security_cookie | 1);
}
