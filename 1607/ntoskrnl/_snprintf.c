/*
 * XREFs of _snprintf @ 0x14014D750
 * Callers:
 *     <none>
 * Callees:
 *     xHalFreeMessageTarget @ 0x1401312D4 (xHalFreeMessageTarget.c)
 *     _output_l @ 0x140150B48 (_output_l.c)
 *     _flsbuf @ 0x1401569B8 (_flsbuf.c)
 */

int snprintf(char *Dest, size_t Count, const char *Format, ...)
{
  int result; // eax
  int v5; // ebx
  FILE File; // [rsp+30h] [rbp-48h] BYREF
  va_list va; // [rsp+98h] [rbp+20h] BYREF

  va_start(va, Format);
  if ( Format && (!Count || Dest) )
  {
    File._flag = 66;
    File._base = Dest;
    File._ptr = Dest;
    if ( Count > 0x7FFFFFFF )
      LODWORD(Count) = 0x7FFFFFFF;
    File._cnt = Count;
    result = output_l(&File, Format, 0LL, (__int64 *)va);
    v5 = result;
    if ( Dest )
    {
      if ( --File._cnt < 0 )
        flsbuf(0, &File);
      else
        *File._ptr = 0;
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
