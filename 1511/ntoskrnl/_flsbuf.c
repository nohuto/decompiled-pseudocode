/*
 * XREFs of _flsbuf @ 0x14014D0C0
 * Callers:
 *     _vsnwprintf_l @ 0x1401439D0 (_vsnwprintf_l.c)
 *     _vsnprintf_l @ 0x140143AC4 (_vsnprintf_l.c)
 *     _snprintf @ 0x140143DC0 (_snprintf.c)
 *     _snwprintf @ 0x140143E68 (_snwprintf.c)
 *     _vswprintf_l @ 0x1401442DC (_vswprintf_l.c)
 *     sprintf @ 0x140144F74 (sprintf.c)
 *     swprintf @ 0x140145928 (swprintf.c)
 *     _vsprintf_l @ 0x140145A9C (_vsprintf_l.c)
 *     write_char_0 @ 0x140147A34 (write_char_0.c)
 *     _soutput_s @ 0x14014A8E4 (_soutput_s.c)
 *     _swoutput_s @ 0x14014AA7C (_swoutput_s.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}
