/*
 * XREFs of AnFwConfigureProgressResources @ 0x14075EB1C
 * Callers:
 *     BgpFwLibraryInitialize @ 0x14075D630 (BgpFwLibraryInitialize.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     BgpGetBitsPerPixel @ 0x14015076C (BgpGetBitsPerPixel.c)
 *     BgpGxRectangleSize @ 0x14015287C (BgpGxRectangleSize.c)
 *     BgpTxtRegionSize @ 0x140152D64 (BgpTxtRegionSize.c)
 *     BgpTxtCreateRegion @ 0x14075DCDC (BgpTxtCreateRegion.c)
 *     BgpFoGetFontHandle @ 0x14075E940 (BgpFoGetFontHandle.c)
 */

__int64 __fastcall AnFwConfigureProgressResources(_DWORD *a1)
{
  int BitsPerPixel; // eax
  __int128 v4; // [rsp+30h] [rbp-28h] BYREF
  int v5; // [rsp+40h] [rbp-18h]
  int v6; // [rsp+44h] [rbp-14h]
  __int64 v7; // [rsp+60h] [rbp+8h] BYREF

  KeInitializeEvent(&stru_14036C680, NotificationEvent, 1u);
  if ( !a1 )
    return 0LL;
  if ( (a1[6] & 1) == 0 )
    return 0LL;
  if ( (int)BgpFoGetFontHandle(0LL, (__int64 **)&v4 + 1) < 0 )
    return 0LL;
  v5 = a1[5];
  *(_QWORD *)&v4 = -16777216LL;
  v6 = 1;
  if ( (int)BgpTxtCreateRegion(a1, a1 + 2, &v4, &v7, 10) < 0 )
    return 0LL;
  BitsPerPixel = BgpGetBitsPerPixel();
  dword_140323D14 = ((BgpGxRectangleSize(a1[3], a1[2], BitsPerPixel) + 15) & 0xFFFFFFF0) + 128;
  dword_140323D10 = 122 * dword_140323D14;
  dword_140323D18 = BgpTxtRegionSize(v7);
  return v7;
}
