/*
 * XREFs of _get_printf_count_output @ 0x18008DD4C
 * Callers:
 *     _output_l @ 0x18008A538 (_output_l.c)
 *     _woutput_l @ 0x18008AEC0 (_woutput_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_180144310 == (_security_cookie | 1);
}
