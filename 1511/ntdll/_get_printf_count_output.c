/*
 * XREFs of _get_printf_count_output @ 0x18009F4EC
 * Callers:
 *     _output_l @ 0x18009BCD8 (_output_l.c)
 *     _woutput_l @ 0x18009C660 (_woutput_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_180143350 == (_security_cookie | 1);
}
