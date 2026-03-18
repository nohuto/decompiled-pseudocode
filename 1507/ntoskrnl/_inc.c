/*
 * XREFs of _inc @ 0x140179940
 * Callers:
 *     sub_140179634 @ 0x140179634 (sub_140179634.c)
 *     _input_s @ 0x140179968 (_input_s.c)
 * Callees:
 *     _filbuf_s @ 0x14017B13C (_filbuf_s.c)
 */

__int64 __fastcall inc(FILE *a1)
{
  if ( --a1->_cnt < 0 )
    return (unsigned int)filbuf_s(a1);
  else
    return *(unsigned __int8 *)a1->_ptr++;
}
