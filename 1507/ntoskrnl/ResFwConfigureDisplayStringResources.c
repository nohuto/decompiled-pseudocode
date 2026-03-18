/*
 * XREFs of ResFwConfigureDisplayStringResources @ 0x14075EAA0
 * Callers:
 *     BgpFwLibraryInitialize @ 0x14075D630 (BgpFwLibraryInitialize.c)
 * Callees:
 *     BgpTxtRegionSize @ 0x140152D64 (BgpTxtRegionSize.c)
 *     BgpTxtCreateRegion @ 0x14075DCDC (BgpTxtCreateRegion.c)
 *     BgpFoGetFontHandle @ 0x14075E940 (BgpFoGetFontHandle.c)
 */

__int64 __fastcall ResFwConfigureDisplayStringResources(_DWORD *a1)
{
  int v2; // eax
  __int128 v4; // [rsp+30h] [rbp-28h] BYREF
  int v5; // [rsp+40h] [rbp-18h]
  int v6; // [rsp+44h] [rbp-14h]
  __int64 v7; // [rsp+60h] [rbp+8h] BYREF

  if ( !a1 )
    return 0LL;
  if ( (a1[6] & 1) == 0 )
    return 0LL;
  if ( (int)BgpFoGetFontHandle(0LL, (__int64 **)&v4 + 1) < 0 )
    return 0LL;
  v2 = a1[5];
  *(_QWORD *)&v4 = 0xFFFFFFFF00000000uLL;
  v6 = 0;
  v5 = v2;
  if ( (int)BgpTxtCreateRegion(a1, a1 + 2, &v4, &v7, 0) < 0 )
    return 0LL;
  dword_140323D1C = BgpTxtRegionSize(v7);
  return v7;
}
