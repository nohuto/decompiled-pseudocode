/*
 * XREFs of sub_180001488 @ 0x180001488
 * Callers:
 *     sub_18000150C @ 0x18000150C (sub_18000150C.c)
 * Callees:
 *     <none>
 */

wchar_t *sub_180001488(wchar_t *a1, wchar_t *a2, const wchar_t *a3, ...)
{
  __int64 v4; // r10
  wchar_t *v5; // rbx
  unsigned __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rax
  va_list Args; // [rsp+58h] [rbp+20h] BYREF

  va_start(Args, a3);
  v4 = a2 - a1;
  v5 = a1;
  if ( (unsigned __int64)(v4 - 1) > 0x7FFFFFFE )
  {
    if ( v4 )
      *a1 = 0;
  }
  else
  {
    v6 = v4 - 1;
    v7 = vsnwprintf(a1, v4 - 1, a3, Args);
    if ( v7 < 0 || v7 >= v6 )
      v5[v6] = 0;
  }
  if ( a2 != v5 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( v5[v8] );
    v5 += v8;
  }
  return v5;
}
