/*
 * XREFs of ?vLine4Octant34@@YAXPEAU_DDALINE@@PEAEJK@Z @ 0x1C02CF470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vLine4Octant34(struct _DDALINE *a1, unsigned __int8 *a2, int a3, char a4)
{
  unsigned int v4; // r11d
  int v5; // r10d
  unsigned __int8 *v6; // rbx
  int v7; // r15d
  int v8; // ebp
  int v9; // esi
  char v10; // di

  v4 = *((_DWORD *)a1 + 1);
  v5 = *((_DWORD *)a1 + 6);
  v6 = a2;
  v7 = *((_DWORD *)a1 + 4);
  v8 = *((_DWORD *)a1 + 5);
  v9 = *((_DWORD *)a1 + 3);
  v10 = (16 * (a4 & 0xF)) | a4 & 0xF;
  a2[(unsigned __int64)v4 >> 1] = PixelLineMask4[v4 & 1] & a2[(unsigned __int64)v4 >> 1] | v10 & ~PixelLineMask4[v4 & 1];
  while ( --v9 )
  {
    --v4;
    v5 += v8;
    if ( v5 >= 0 )
    {
      v5 -= v7;
      v6 += a3;
    }
    v6[(unsigned __int64)v4 >> 1] = PixelLineMask4[v4 & 1] & v6[(unsigned __int64)v4 >> 1] | v10 & ~PixelLineMask4[v4 & 1];
  }
}
