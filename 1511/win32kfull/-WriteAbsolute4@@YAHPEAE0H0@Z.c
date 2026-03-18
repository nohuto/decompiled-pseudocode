/*
 * XREFs of ?WriteAbsolute4@@YAHPEAE0H0@Z @ 0x1C02C5290
 * Callers:
 *     EncodeRLE4 @ 0x1C02C6BAC (EncodeRLE4.c)
 * Callees:
 *     memmove @ 0x1C0152980 (memmove.c)
 */

__int64 __fastcall WriteAbsolute4(unsigned __int8 *Src, unsigned __int8 *a2, int a3, unsigned __int8 *a4)
{
  unsigned int v4; // edi
  int v5; // edi
  __int64 result; // rax
  unsigned __int8 *v7; // rsi
  int v8; // ebx
  unsigned __int8 *v9; // rsi

  if ( a3 >= 3 )
  {
    v5 = a3 + 1;
    if ( (((_BYTE)a3 + 1) & 2) != 0 )
      v4 = (v5 >> 1) + 3;
    else
      v4 = (v5 >> 1) + 2;
  }
  else
  {
    v4 = 2;
  }
  if ( !a2 )
    return v4;
  if ( &a2[v4] > a4 )
    return 0LL;
  if ( a3 >= 3 )
  {
    *a2 = 0;
    a2[1] = a3;
    v7 = a2 + 2;
    v8 = a3 + 1;
    memmove(a2 + 2, Src, (a3 + 1) >> 1);
    v9 = &v7[(__int64)v8 >> 1];
    result = v4;
    if ( (v8 & 2) != 0 )
      *v9 = 0;
  }
  else
  {
    *a2 = a3;
    a2[1] = *Src;
    return 2LL;
  }
  return result;
}
