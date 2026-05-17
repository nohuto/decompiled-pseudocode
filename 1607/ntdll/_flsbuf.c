/*
 * XREFs of _flsbuf @ 0x1800A5A68
 * Callers:
 *     _snprintf @ 0x1800978F0 (_snprintf.c)
 *     _snwprintf @ 0x1800979A0 (_snwprintf.c)
 *     swprintf @ 0x180097FA0 (swprintf.c)
 *     _vswprintf_l @ 0x1800980E4 (_vswprintf_l.c)
 *     _vsnprintf_l @ 0x1800981AC (_vsnprintf_l.c)
 *     _vsnwprintf_l @ 0x18009827C (_vsnwprintf_l.c)
 *     sprintf @ 0x18009AFA0 (sprintf.c)
 *     _vsprintf_l @ 0x18009C47C (_vsprintf_l.c)
 *     write_char @ 0x18009D93C (write_char.c)
 *     _soutput_s @ 0x1800A3218 (_soutput_s.c)
 *     write_char_1 @ 0x1800A32F4 (write_char_1.c)
 *     _swoutput_s @ 0x1800A4098 (_swoutput_s.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}
