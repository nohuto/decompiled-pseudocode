/*
 * XREFs of _flswbuf @ 0x1C003B4E0
 * Callers:
 *     _fputwc_nolock @ 0x1C003B3C0 (_fputwc_nolock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall flswbuf(int ch, _iobuf *str)
{
  str->_flag |= 0x20u;
  return 0xFFFFLL;
}
