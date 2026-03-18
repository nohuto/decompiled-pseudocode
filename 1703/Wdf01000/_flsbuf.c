/*
 * XREFs of _flsbuf @ 0x1C003E3DC
 * Callers:
 *     _vsnwprintf_l @ 0x1C003E2FC (_vsnwprintf_l.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall flsbuf(int ch, _iobuf *str)
{
  str->_flag |= 0x20u;
  return 0xFFFFFFFFLL;
}
