/*
 * XREFs of BgpGxCopyRectangle @ 0x14072AF84
 * Callers:
 *     BgpRasPrintGlyph @ 0x140127D20 (BgpRasPrintGlyph.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 */

void __fastcall BgpGxCopyRectangle(__int64 a1, unsigned int *a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v4; // r11d
  unsigned int v6; // ebp
  unsigned int v8; // r10d
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  unsigned int v11; // ebp
  unsigned int v12; // ecx
  char *v13; // rdi
  char *v14; // rsi
  size_t v15; // r15

  v4 = *(_DWORD *)(a1 + 4);
  v6 = *(_DWORD *)(a1 + 8);
  v8 = a2[1];
  v9 = v4;
  v10 = *(_DWORD *)a1;
  v11 = v6 >> 3;
  if ( v8 < v4 )
    v9 = a2[1];
  if ( *a2 < v10 )
    v10 = *a2;
  v12 = v11 * v9;
  v13 = (char *)(*((_QWORD *)a2 + 3) + v11 * (*a4 + v8 * a4[1]));
  v14 = (char *)(*(_QWORD *)(a1 + 24) + v11 * (*a3 + v4 * a3[1]));
  if ( v10 )
  {
    v15 = v12;
    do
    {
      memmove(v14, v13, v15);
      v13 += v11 * a2[1];
      v14 += *(_DWORD *)(a1 + 4) * v11;
      --v10;
    }
    while ( v10 );
  }
  BgpGxMarkClean(a1);
}
