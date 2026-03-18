/*
 * XREFs of _flsbuf @ 0x14014FB84
 * Callers:
 *     _vsnwprintf_l @ 0x14014CCCC (_vsnwprintf_l.c)
 *     _vsnprintf_l @ 0x14014CDC0 (_vsnprintf_l.c)
 *     _snprintf @ 0x14014D1E0 (_snprintf.c)
 *     _snwprintf @ 0x14014D288 (_snwprintf.c)
 *     _vswprintf_l @ 0x14014D6FC (_vswprintf_l.c)
 *     sprintf @ 0x14014E354 (sprintf.c)
 *     swprintf @ 0x14014ED08 (swprintf.c)
 *     _vsprintf_l @ 0x14014EE78 (_vsprintf_l.c)
 *     write_char_0 @ 0x140150DD8 (write_char_0.c)
 *     _soutput_s @ 0x140153CB4 (_soutput_s.c)
 *     _swoutput_s @ 0x140153E4C (_swoutput_s.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}
