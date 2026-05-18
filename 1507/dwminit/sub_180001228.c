/*
 * XREFs of sub_180001228 @ 0x180001228
 * Callers:
 *     sub_180001564 @ 0x180001564 (sub_180001564.c)
 *     sub_180001A88 @ 0x180001A88 (sub_180001A88.c)
 *     sub_1800043E0 @ 0x1800043E0 (sub_1800043E0.c)
 *     sub_1800049A0 @ 0x1800049A0 (sub_1800049A0.c)
 * Callees:
 *     <none>
 */

__int64 sub_180001228(wchar_t *Buffer, __int64 a2, const wchar_t *a3, ...)
{
  int v4; // edi
  unsigned __int64 v5; // rbx
  int v6; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, a3);
  v4 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v4 = -2147024809;
  if ( v4 < 0 )
  {
    if ( a2 )
      *Buffer = 0;
  }
  else
  {
    v5 = a2 - 1;
    v4 = 0;
    v6 = vsnwprintf(Buffer, a2 - 1, a3, Args);
    if ( v6 < 0 || v6 > v5 )
    {
      Buffer[v5] = 0;
      return (unsigned int)-2147024774;
    }
    else if ( v6 == v5 )
    {
      Buffer[v5] = 0;
    }
  }
  return (unsigned int)v4;
}
