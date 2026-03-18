/*
 * XREFs of vCvtToBoldBmp @ 0x1C02482B4
 * Callers:
 *     BmfdQueryFontData @ 0x1C0116898 (BmfdQueryFontData.c)
 * Callees:
 *     memset @ 0x1C0152CC0 (memset.c)
 */

void *__fastcall vCvtToBoldBmp(_DWORD *a1, __int64 a2, char *a3, int a4, unsigned int a5, int a6)
{
  _BYTE *v6; // rbx
  unsigned int v8; // ebp
  unsigned int v9; // r15d
  char v10; // di
  void *result; // rax
  int v12; // edi
  __int64 v13; // r10
  char v14; // dl
  char *v15; // r9
  _BYTE *v16; // r8
  __int64 v17; // r11
  char v18; // dl

  *a1 = 0;
  v6 = a1 + 4;
  a1[2] = a4 + 1;
  a1[3] = a5;
  a1[1] = -a6;
  v8 = (unsigned int)(a4 + 8) >> 3;
  v9 = (unsigned int)(a4 + 7) >> 3;
  v10 = a4;
  result = memset(a1 + 4, 0, a5 * v8);
  if ( a5 )
  {
    v12 = v10 & 7;
    v13 = a5;
    do
    {
      v14 = 0;
      v15 = a3;
      v16 = v6;
      if ( v9 )
      {
        v17 = v9;
        do
        {
          *v16++ = v14 | *v15 | ((unsigned __int8)*v15 >> 1);
          v18 = *v15;
          v15 += a5;
          v14 = v18 << 7;
          --v17;
        }
        while ( v17 );
      }
      if ( !v12 )
        *v16 = v14;
      ++a3;
      v6 += v8;
      --v13;
    }
    while ( v13 );
  }
  return result;
}
