/*
 * XREFs of BgpGxCopyBitmapToRectangle @ 0x140725C24
 * Callers:
 *     BgpGxParseBitmap @ 0x140725B84 (BgpGxParseBitmap.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 */

void __fastcall BgpGxCopyBitmapToRectangle(__int64 a1, __int64 a2)
{
  int v3; // r9d
  unsigned int v4; // ebx
  int v5; // eax
  unsigned int v6; // r8d
  char *v7; // rbp
  int v8; // ecx
  char *v9; // rsi
  size_t v10; // r14
  __int64 v11; // r15

  v3 = *(_DWORD *)a1;
  v4 = 0;
  v5 = 0;
  v6 = *(_DWORD *)(a1 + 4) * (*(_DWORD *)(a1 + 8) >> 3);
  v7 = (char *)(*(_QWORD *)(a1 + 24) + v6 * (*(_DWORD *)a1 - 1));
  v8 = (*(_BYTE *)(a1 + 4) * (unsigned __int8)(*(_DWORD *)(a1 + 8) >> 3)) & 3;
  if ( v8 )
    v5 = 4 - v8;
  v9 = (char *)(a2 + 40);
  if ( v3 )
  {
    v10 = v6;
    v11 = v6 + v5;
    do
    {
      memmove(v7, v9, v10);
      v7 -= v10;
      v9 += v11;
      ++v4;
    }
    while ( v4 < *(_DWORD *)a1 );
  }
  BgpGxMarkClean(a1);
}
