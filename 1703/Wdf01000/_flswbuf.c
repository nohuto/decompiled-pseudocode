/*
 * XREFs of _flswbuf @ 0x1C003EF5C
 * Callers:
 *     _fputwc_nolock @ 0x1C003EE28 (_fputwc_nolock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall flswbuf(int ch, _iobuf *str)
{
  str->_flag |= 0x20u;
  return 0xFFFFLL;
}
