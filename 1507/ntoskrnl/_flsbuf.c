/*
 * XREFs of _flsbuf @ 0x1401747D8
 * Callers:
 *     _vsnwprintf_l @ 0x140171A50 (_vsnwprintf_l.c)
 *     _vsnprintf_l @ 0x140171B44 (_vsnprintf_l.c)
 *     _snprintf @ 0x140171E40 (_snprintf.c)
 *     _snwprintf @ 0x140171EE8 (_snwprintf.c)
 *     _vswprintf_l @ 0x14017235C (_vswprintf_l.c)
 *     sprintf @ 0x140172FA4 (sprintf.c)
 *     swprintf @ 0x140173958 (swprintf.c)
 *     _vsprintf_l @ 0x140173ACC (_vsprintf_l.c)
 *     write_char_0 @ 0x140175A6C (write_char_0.c)
 *     _soutput_s @ 0x1401789B4 (_soutput_s.c)
 *     _swoutput_s @ 0x140178AF8 (_swoutput_s.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}
