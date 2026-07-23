/*
 * XREFs of swprintf @ 0x14014F2C8
 * Callers:
 *     <none>
 * Callees:
 *     xHalFreeMessageTarget @ 0x1401312D4 (xHalFreeMessageTarget.c)
 *     _woutput_l @ 0x140150144 (_woutput_l.c)
 *     _flsbuf @ 0x1401569B8 (_flsbuf.c)
 */

int swprintf(wchar_t *a1, const wchar_t *a2, ...)
{
  int v3; // eax
  bool v4; // sf
  int v5; // ebx
  char *ptr; // rcx
  FILE File; // [rsp+30h] [rbp-38h] BYREF
  va_list va; // [rsp+90h] [rbp+28h] BYREF

  va_start(va, a2);
  if ( a2 && a1 )
  {
    File._base = (char *)a1;
    File._ptr = (char *)a1;
    File._flag = 66;
    File._cnt = 0x7FFFFFFF;
    v3 = woutput_l(&File, a2, 0LL, va);
    v4 = --File._cnt < 0;
    v5 = v3;
    if ( v4 )
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
  else
  {
    xHalFreeMessageTarget();
    return -1;
  }
}
