/*
 * XREFs of MirrorRegion @ 0x1C00859F0
 * Callers:
 *     NtUserGetWindowRgnEx @ 0x1C005CE20 (NtUserGetWindowRgnEx.c)
 *     xxxSetWindowRgn @ 0x1C00847E8 (xxxSetWindowRgn.c)
 *     xxxRedrawWindow @ 0x1C008E8E0 (xxxRedrawWindow.c)
 *     xxxScrollWindowEx @ 0x1C0112924 (xxxScrollWindowEx.c)
 *     xxxGetUpdateRgn @ 0x1C0121A90 (xxxGetUpdateRgn.c)
 *     NtUserSetWindowRgnEx @ 0x1C0220D80 (NtUserSetWindowRgnEx.c)
 * Callees:
 *     ?OrderRects@@YAXPEAUtagRECT@@H@Z @ 0x1C01E7DD0 (-OrderRects@@YAXPEAUtagRECT@@H@Z.c)
 */

__int64 __fastcall MirrorRegion(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned int v3; // ebx
  unsigned int RegionData; // eax
  unsigned int v9; // r14d
  __int64 v10; // rax
  struct tagRECT *v11; // rdi
  __int64 right; // r10
  struct tagRECT *v13; // r9
  int v14; // edx
  LONG left; // ecx
  __int64 v16; // r11
  LONG v17; // r8d
  __int64 Region; // rax
  __int64 v19; // rsi

  v3 = 0;
  if ( (*(_BYTE *)(a1 + 50) & 0x40) != 0 && a2 > 2 )
  {
    RegionData = GreGetRegionData(a2, 0LL, 0LL);
    v9 = RegionData;
    if ( RegionData )
    {
      v10 = Win32AllocPool((int)RegionData, 1768780629LL);
      v11 = (struct tagRECT *)v10;
      if ( v10 )
      {
        if ( (unsigned int)GreGetRegionData(a2, v9, v10) )
        {
          right = (unsigned int)v11->right;
          v13 = v11 + 2;
          if ( a3 )
            v14 = *(_DWORD *)(a1 + 136) - *(_DWORD *)(a1 + 128);
          else
            v14 = *(_DWORD *)(a1 + 120) - *(_DWORD *)(a1 + 112);
          left = v11[1].left;
          v11[1].left = v14 - v11[1].right;
          v11[1].right = v14 - left;
          if ( (int)right > 0 )
          {
            v16 = right;
            do
            {
              v17 = v13->left;
              v13->left = v14 - v13->right;
              v13->right = v14 - v17;
              ++v13;
              --v16;
            }
            while ( v16 );
          }
          OrderRects(v11 + 2, right);
          Region = GreExtCreateRegion(0LL, v9, v11);
          v19 = Region;
          if ( Region )
          {
            GreCombineRgn(a2, Region, 0LL, 5LL);
            GreDeleteObject(v19);
            v3 = 1;
          }
        }
        Win32FreePool(v11);
      }
    }
  }
  return v3;
}
