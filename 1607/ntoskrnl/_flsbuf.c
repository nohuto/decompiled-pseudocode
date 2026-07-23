/*
 * XREFs of _flsbuf @ 0x1401569B8
 * Callers:
 *     _vsnwprintf_l @ 0x14014D23C (_vsnwprintf_l.c)
 *     _vsnprintf_l @ 0x14014D330 (_vsnprintf_l.c)
 *     _snprintf @ 0x14014D750 (_snprintf.c)
 *     _snwprintf @ 0x14014D7F8 (_snwprintf.c)
 *     _vswprintf_l @ 0x14014DC6C (_vswprintf_l.c)
 *     sprintf @ 0x14014E914 (sprintf.c)
 *     swprintf @ 0x14014F2C8 (swprintf.c)
 *     _vsprintf_l @ 0x14014F438 (_vsprintf_l.c)
 *     write_char_0 @ 0x140151390 (write_char_0.c)
 *     _soutput_s @ 0x140154224 (_soutput_s.c)
 *     _swoutput_s @ 0x1401543BC (_swoutput_s.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}
