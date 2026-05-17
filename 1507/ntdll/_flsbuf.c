/*
 * XREFs of _flsbuf @ 0x18008A528
 * Callers:
 *     _snprintf @ 0x180084D30 (_snprintf.c)
 *     _snwprintf @ 0x180084DE0 (_snwprintf.c)
 *     swprintf @ 0x1800853E0 (swprintf.c)
 *     _vswprintf_l @ 0x180085564 (_vswprintf_l.c)
 *     _vsnprintf_l @ 0x18008562C (_vsnprintf_l.c)
 *     _vsnwprintf_l @ 0x1800856FC (_vsnwprintf_l.c)
 *     sprintf @ 0x180088430 (sprintf.c)
 *     _vsprintf_l @ 0x18008992C (_vsprintf_l.c)
 *     write_char @ 0x18008AD84 (write_char.c)
 *     _soutput_s @ 0x18009066C (_soutput_s.c)
 *     write_char_1 @ 0x180090748 (write_char_1.c)
 *     _swoutput_s @ 0x1800914EC (_swoutput_s.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}
