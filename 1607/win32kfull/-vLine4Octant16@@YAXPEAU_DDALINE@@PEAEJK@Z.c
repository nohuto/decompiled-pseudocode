/*
 * XREFs of ?vLine4Octant16@@YAXPEAU_DDALINE@@PEAEJK@Z @ 0x1C02D23A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vLine4Octant16(struct _DDALINE *a1, unsigned __int8 *a2, int a3, char a4)
{
  unsigned int v4; // ebx
  int v5; // esi
  unsigned __int8 *v6; // r11
  int v7; // r10d
  int v8; // ebp
  int v9; // r14d
  char v10; // di
  int i; // esi

  v4 = *((_DWORD *)a1 + 1);
  v5 = *((_DWORD *)a1 + 3);
  v6 = a2;
  v7 = *((_DWORD *)a1 + 6);
  v8 = *((_DWORD *)a1 + 4);
  v9 = *((_DWORD *)a1 + 5);
  v10 = (16 * (a4 & 0xF)) | a4 & 0xF;
  a2[(unsigned __int64)v4 >> 1] = PixelLineMask4[v4 & 1] & a2[(unsigned __int64)v4 >> 1] | v10 & ~PixelLineMask4[v4 & 1];
  for ( i = v5 - 1; i; --i )
  {
    v6 += a3;
    v7 += v9;
    if ( v7 >= 0 )
    {
      v7 -= v8;
      ++v4;
    }
    v6[(unsigned __int64)v4 >> 1] = PixelLineMask4[v4 & 1] & v6[(unsigned __int64)v4 >> 1] | v10 & ~PixelLineMask4[v4 & 1];
  }
}
