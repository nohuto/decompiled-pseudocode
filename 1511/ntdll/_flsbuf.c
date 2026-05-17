/*
 * XREFs of _flsbuf @ 0x1800A46A4
 * Callers:
 *     _snprintf @ 0x1800964E0 (_snprintf.c)
 *     _snwprintf @ 0x180096590 (_snwprintf.c)
 *     swprintf @ 0x180096B90 (swprintf.c)
 *     _vswprintf_l @ 0x180096D14 (_vswprintf_l.c)
 *     _vsnprintf_l @ 0x180096DDC (_vsnprintf_l.c)
 *     _vsnwprintf_l @ 0x180096EAC (_vsnwprintf_l.c)
 *     sprintf @ 0x180099BE0 (sprintf.c)
 *     _vsprintf_l @ 0x18009B0DC (_vsprintf_l.c)
 *     write_char @ 0x18009C524 (write_char.c)
 *     _soutput_s @ 0x1800A1E0C (_soutput_s.c)
 *     write_char_1 @ 0x1800A1EE8 (write_char_1.c)
 *     _swoutput_s @ 0x1800A2C8C (_swoutput_s.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}
