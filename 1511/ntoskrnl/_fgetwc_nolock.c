/*
 * XREFs of _fgetwc_nolock @ 0x14014D15C
 * Callers:
 *     sub_14014C224 @ 0x14014C224 (sub_14014C224.c)
 *     _whiteout @ 0x14014C6A4 (_whiteout.c)
 *     _winput_s @ 0x14014C6F4 (_winput_s.c)
 * Callees:
 *     PopPoCoalescinCallback @ 0x1401264C0 (PopPoCoalescinCallback.c)
 */

wint_t __cdecl fgetwc_nolock(FILE *File)
{
  wint_t result; // ax
  int v3; // eax
  char *ptr; // rcx

  if ( File )
  {
    v3 = File->_cnt - 2;
    File->_cnt = v3;
    if ( v3 < 0 )
    {
      return filwbuf_s(File, File);
    }
    else
    {
      ptr = File->_ptr;
      result = *(_WORD *)ptr;
      File->_ptr = ptr + 2;
    }
  }
  else
  {
    PopPoCoalescinCallback();
    return -1;
  }
  return result;
}
