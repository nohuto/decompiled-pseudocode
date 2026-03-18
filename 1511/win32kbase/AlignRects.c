/*
 * XREFs of AlignRects @ 0x1C0056D78
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0055974 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_G.c)
 *     ?DxgkEngAdjustMonitorPosition@@YAHPEAUtagRECT@@II@Z @ 0x1C0056D70 (-DxgkEngAdjustMonitorPosition@@YAHPEAUtagRECT@@II@Z.c)
 * Callees:
 *     RemoveGaps @ 0x1C00D56D8 (RemoveGaps.c)
 *     RemoveOverlaps @ 0x1C00D59D8 (RemoveOverlaps.c)
 */

__int64 __fastcall AlignRects(unsigned __int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rbp
  int v7; // r8d
  int v8; // r9d
  _DWORD *v9; // rdx

  v4 = a1 + 16LL * a2;
  v5 = a3;
  if ( a2 > 0x10 )
    return 0LL;
  if ( a2 > 1 )
  {
    RemoveOverlaps(a1, a2);
    RemoveGaps(a1, a2);
  }
  v7 = -*(_DWORD *)(a1 + 16 * v5);
  v8 = -*(_DWORD *)(a1 + 16 * v5 + 4);
  if ( a1 < v4 )
  {
    v9 = (_DWORD *)(a1 + 12);
    do
    {
      *(v9 - 3) += v7;
      *(v9 - 1) += v7;
      *v9 += v8;
      *(v9 - 2) += v8;
      v9 += 4;
    }
    while ( (unsigned __int64)(v9 - 3) < v4 );
  }
  return 1LL;
}
