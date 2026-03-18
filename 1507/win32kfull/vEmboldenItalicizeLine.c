/*
 * XREFs of vEmboldenItalicizeLine @ 0x1C0248654
 * Callers:
 *     vStretchGlyphBitmap @ 0x1C024880C (vStretchGlyphBitmap.c)
 * Callees:
 *     <none>
 */

char __fastcall vEmboldenItalicizeLine(_BYTE *a1, unsigned __int64 a2, unsigned __int64 a3, int a4, char a5)
{
  unsigned __int64 v5; // rdi
  _BYTE *v6; // r11
  unsigned __int8 v7; // r10
  char v8; // si
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rbx
  char v11; // al
  char v12; // si
  char v13; // r10
  int v14; // eax

  v5 = a3 - a2;
  v6 = a1;
  v7 = 0;
  v8 = 0;
  if ( a2 > a3 )
    v5 = 0LL;
  v9 = 0LL;
  if ( v5 )
  {
    v10 = a2 - (_QWORD)a1;
    do
    {
      ++v9;
      v11 = v8 | v7 | (v6[v10] >> a4) | ((unsigned __int8)(v7 | (v6[v10] >> a4)) >> 1);
      v12 = v7 | (v6[v10] >> a4);
      *v6 = v11;
      v13 = (v6++)[v10];
      v7 = v13 << (8 - a4);
      v8 = v12 << 7;
    }
    while ( v9 < v5 );
  }
  v14 = -(a5 & 7) & 7;
  if ( v14 < a4 )
  {
    LOBYTE(v14) = v7 | v8 | (v7 >> 1);
    *v6 = v14;
    if ( (a5 & 7) == 0 )
      v6[1] = v7 << 7;
  }
  return v14;
}
