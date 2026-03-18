/*
 * XREFs of vCvtToItalicBmp @ 0x1C02484F8
 * Callers:
 *     BmfdQueryFontData @ 0x1C0116898 (BmfdQueryFontData.c)
 * Callees:
 *     memset @ 0x1C0152CC0 (memset.c)
 */

unsigned __int64 __fastcall vCvtToItalicBmp(_DWORD *a1, __int64 a2, char *a3, int a4, int a5, int a6)
{
  int v6; // r15d
  _DWORD *v7; // rbp
  signed int v9; // r13d
  signed int v11; // esi
  int v12; // edx
  signed int v13; // ebx
  unsigned int v14; // r12d
  unsigned __int64 result; // rax
  int v16; // r9d
  int v17; // edi
  char v18; // r8
  _BYTE *v19; // rdx
  char *v20; // r10
  __int64 v21; // r12
  char v22; // r8
  char v23; // al
  unsigned __int64 v24; // [rsp+68h] [rbp+10h]

  v6 = a5;
  v7 = a1 + 4;
  *a1 = 0;
  a1[3] = a5;
  a1[1] = -a6;
  v9 = (unsigned int)(a4 + 7) >> 3;
  v11 = (unsigned int)(a5 - 1) >> 4;
  v12 = ((unsigned int)(a5 - 1) >> 1) + a4;
  v13 = ((unsigned int)(a5 - 1) >> 1) & 7;
  a1[2] = v12;
  v14 = (unsigned int)(v12 + 7) >> 3;
  result = (unsigned __int64)memset(a1 + 4, 0, a5 * v14);
  v16 = 0;
  if ( a5 > 0 )
  {
    result = v14;
    v17 = -a4 & 7;
    v24 = v14;
    do
    {
      if ( v13 < 0 )
      {
        v13 = 7;
        --v11;
      }
      v18 = 0;
      v19 = (char *)v7 + v11;
      v20 = a3;
      if ( v9 > 0 )
      {
        v21 = (unsigned int)v9;
        do
        {
          *v19++ = v18 | ((unsigned __int8)*v20 >> v13);
          v22 = *v20;
          v20 += (unsigned int)v6;
          v18 = v22 << (8 - v13);
          --v21;
        }
        while ( v21 );
        v6 = a5;
        result = v24;
      }
      if ( v17 < v13 )
        *v19 = v18;
      v7 = (_DWORD *)((char *)v7 + result);
      ++a3;
      v23 = v16++;
      v13 -= v23 & 1;
      result = v24;
    }
    while ( v16 < v6 );
  }
  return result;
}
