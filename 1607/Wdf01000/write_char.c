/*
 * XREFs of write_char @ 0x1C003B280
 * Callers:
 *     _woutput_l @ 0x1C003A9A4 (_woutput_l.c)
 *     write_multi_char @ 0x1C003B2CC (write_multi_char.c)
 *     write_string @ 0x1C003B320 (write_string.c)
 * Callees:
 *     _fputwc_nolock @ 0x1C003B3C0 (_fputwc_nolock.c)
 */

void __fastcall write_char(wchar_t ch, _iobuf *f, int *pnumwritten)
{
  if ( (f->_flag & 0x40) == 0 || f->_base )
  {
    if ( fputwc_nolock(ch, f) == 0xFFFF && (f->_flag & 0x20) != 0 )
      *pnumwritten = -1;
    else
      ++*pnumwritten;
  }
  else
  {
    ++*pnumwritten;
  }
}
