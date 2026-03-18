/*
 * XREFs of vCvtToBmp @ 0x1C0018A80
 * Callers:
 *     BmfdQueryFontData @ 0x1C0018508 (BmfdQueryFontData.c)
 * Callees:
 *     memset @ 0x1C015A380 (memset.c)
 */

unsigned __int8 __fastcall vCvtToBmp(_DWORD *a1, __int64 a2, unsigned __int8 *a3, int a4, int a5, int a6)
{
  unsigned __int8 *v6; // rdi
  __int64 v8; // rbx
  size_t v9; // r14
  unsigned __int8 result; // al
  unsigned __int8 *v11; // r8
  unsigned __int64 v12; // rcx
  unsigned __int8 *i; // rdx

  v6 = (unsigned __int8 *)(a1 + 4);
  *a1 = 0;
  a1[1] = -a6;
  a1[3] = a5;
  a1[2] = a4;
  v8 = (unsigned int)(a4 + 7) >> 3;
  v9 = a5 * ((unsigned int)(a4 + 7) >> 3);
  result = (unsigned __int8)memset(a1 + 4, 0, v9);
  v11 = &v6[v8];
  if ( v6 < &v6[v8] )
  {
    v12 = (unsigned __int64)&v6[v9];
    do
    {
      for ( i = v6; (unsigned __int64)i < v12; i += (unsigned int)v8 )
      {
        result = *a3++;
        *i = result;
      }
      ++v6;
      ++v12;
    }
    while ( v6 < v11 );
  }
  return result;
}
