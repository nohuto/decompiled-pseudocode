/*
 * XREFs of sub_140010294 @ 0x140010294
 * Callers:
 *     sub_140010EDC @ 0x140010EDC (sub_140010EDC.c)
 * Callees:
 *     <none>
 */

__int64 sub_140010294(__int64 a1, const wchar_t *a2, ...)
{
  wchar_t *v3; // rcx
  size_t v4; // rdi
  int v5; // ebx
  unsigned __int16 v6; // ax
  int v7; // eax
  va_list Args; // [rsp+60h] [rbp+18h] BYREF

  va_start(Args, a2);
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0;
  if ( (*(_BYTE *)a1 & 1) != 0 )
    return (unsigned int)-1073741811;
  v6 = *(_WORD *)(a1 + 2);
  if ( (v6 & 1) != 0 || *(_WORD *)a1 > v6 || v6 == 0xFFFF )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    if ( !*(_QWORD *)(a1 + 8) && (*(_WORD *)a1 || v6) )
    {
      v5 = -1073741811;
    }
    else
    {
      v3 = *(wchar_t **)(a1 + 8);
      v4 = (unsigned __int64)v6 >> 1;
    }
    if ( v5 >= 0 )
    {
      v5 = 0;
      v7 = vsnwprintf(v3, v4, a2, Args);
      if ( v7 < 0 || v7 > v4 )
      {
        LOWORD(v7) = v4;
        v5 = -2147483643;
      }
      *(_WORD *)a1 = 2 * v7;
    }
  }
  return (unsigned int)v5;
}
