/*
 * XREFs of _snwprintf @ 0x14014D7F8
 * Callers:
 *     <none>
 * Callees:
 *     xHalFreeMessageTarget @ 0x1401312D4 (xHalFreeMessageTarget.c)
 *     _woutput_l @ 0x140150144 (_woutput_l.c)
 *     _flsbuf @ 0x1401569B8 (_flsbuf.c)
 */

int snwprintf(wchar_t *Dest, size_t Count, const wchar_t *Format, ...)
{
  int result; // eax
  int v5; // edi
  char *ptr; // rax
  FILE File; // [rsp+30h] [rbp-30h] BYREF
  va_list va; // [rsp+98h] [rbp+38h] BYREF

  va_start(va, Format);
  if ( Format && (!Count || Dest) )
  {
    File._flag = 66;
    File._base = (char *)Dest;
    File._ptr = (char *)Dest;
    if ( Count <= 0x3FFFFFFF )
      File._cnt = 2 * Count;
    else
      File._cnt = 0x7FFFFFFF;
    result = woutput_l(&File, Format, 0LL, (__int64 *)va);
    v5 = result;
    if ( Dest )
    {
      if ( --File._cnt < 0 )
      {
        flsbuf(0, &File);
        ptr = File._ptr;
      }
      else
      {
        *File._ptr = 0;
        ptr = ++File._ptr;
      }
      if ( --File._cnt < 0 )
        flsbuf(0, &File);
      else
        *ptr = 0;
      return v5;
    }
  }
  else
  {
    xHalFreeMessageTarget();
    return -1;
  }
  return result;
}
