/*
 * XREFs of _fputwc_nolock @ 0x1401480E8
 * Callers:
 *     write_char @ 0x1401470C8 (write_char.c)
 * Callees:
 *     PopPoCoalescinCallback @ 0x1401264C0 (PopPoCoalescinCallback.c)
 */

wint_t __cdecl fputwc_nolock(wchar_t Ch, FILE *File)
{
  wint_t result; // ax
  int v3; // eax

  if ( File )
  {
    v3 = File->_cnt - 2;
    File->_cnt = v3;
    if ( v3 < 0 )
    {
      return flswbuf(Ch);
    }
    else
    {
      *(_WORD *)File->_ptr = Ch;
      result = Ch;
      File->_ptr += 2;
    }
  }
  else
  {
    PopPoCoalescinCallback();
    return -1;
  }
  return result;
}
