/*
 * XREFs of _inc @ 0x14014B8C4
 * Callers:
 *     sub_14014B5B8 @ 0x14014B5B8 (sub_14014B5B8.c)
 *     _input_s @ 0x14014B8EC (_input_s.c)
 * Callees:
 *     _filbuf_s @ 0x14014D0C8 (_filbuf_s.c)
 */

__int64 __fastcall inc(FILE *a1)
{
  if ( --a1->_cnt < 0 )
    return (unsigned int)filbuf_s(a1);
  else
    return *(unsigned __int8 *)a1->_ptr++;
}
