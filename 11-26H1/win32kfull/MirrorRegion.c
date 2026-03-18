/*
 * XREFs of MirrorRegion @ 0x14002C1A8
 * Callers:
 *     xxxGetUpdateRgn @ 0x14002C328 (xxxGetUpdateRgn.c)
 *     xxxRedrawWindow @ 0x14002CA0C (xxxRedrawWindow.c)
 *     xxxScrollWindowEx @ 0x14003EEB4 (xxxScrollWindowEx.c)
 *     xxxSetWindowRgn @ 0x140179368 (xxxSetWindowRgn.c)
 *     NtUserGetWindowRgnEx @ 0x1402B5B00 (NtUserGetWindowRgnEx.c)
 *     NtUserSetWindowRgnEx @ 0x1402BE780 (NtUserSetWindowRgnEx.c)
 * Callees:
 *     ?OrderRects@@YAXPEAUtagRECT@@H@Z @ 0x14024A768 (-OrderRects@@YAXPEAUtagRECT@@H@Z.c)
 */

__int64 __fastcall MirrorRegion(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned int v3; // ebx
  int RegionData; // eax
  unsigned int v9; // ebp
  __int64 v10; // rax
  struct tagRECT *v11; // rdi
  __int64 right; // r11
  struct tagRECT *v13; // r9
  _DWORD *v14; // rdx
  int v15; // eax
  int v16; // edx
  LONG left; // ecx
  int v18; // edx
  __int64 v19; // r10
  LONG v20; // r8d
  __int64 Region; // rax
  __int64 v22; // rbp

  v3 = 0;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 26LL) & 0x40) != 0 && a2 > 2 )
  {
    RegionData = GreGetRegionData(a2, 0LL, 0LL);
    v9 = RegionData;
    if ( RegionData > 0 )
    {
      v10 = Win32AllocPoolZInit(RegionData, 1768780629LL);
      v11 = (struct tagRECT *)v10;
      if ( v10 )
      {
        if ( (unsigned int)GreGetRegionData(a2, v9, v10) )
        {
          right = (unsigned int)v11->right;
          v13 = v11 + 2;
          v14 = *(_DWORD **)(a1 + 40);
          if ( a3 )
          {
            v15 = v14[26];
            v16 = v14[28];
          }
          else
          {
            v15 = v14[22];
            v16 = v14[24];
          }
          left = v11[1].left;
          v18 = v16 - v15;
          v11[1].left = v18 - v11[1].right;
          v11[1].right = v18 - left;
          if ( (int)right > 0 )
          {
            v19 = right;
            do
            {
              v20 = v13->left;
              v13->left = v18 - v13->right;
              v13->right = v18 - v20;
              ++v13;
              --v19;
            }
            while ( v19 );
          }
          OrderRects(v11 + 2, right);
          Region = GreExtCreateRegion(0LL, v9, v11);
          v22 = Region;
          if ( Region )
          {
            GreCombineRgn(a2, Region, 0LL, 5LL);
            GreDeleteObject(v22);
            v3 = 1;
          }
        }
        Win32FreePool(v11);
      }
    }
  }
  return v3;
}
