/*
 * XREFs of AnFwConfigureProgressResources @ 0x1406DBAD4
 * Callers:
 *     BgpFwLibraryInitialize @ 0x1406DA5E8 (BgpFwLibraryInitialize.c)
 * Callees:
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     BgpGetBitsPerPixel @ 0x14011C4EC (BgpGetBitsPerPixel.c)
 *     BgpGxRectangleSize @ 0x14011E5FC (BgpGxRectangleSize.c)
 *     BgpTxtRegionSize @ 0x14011EA00 (BgpTxtRegionSize.c)
 *     BgpTxtCreateRegion @ 0x1406DAC94 (BgpTxtCreateRegion.c)
 *     BgpFoGetFontHandle @ 0x1406DB8F8 (BgpFoGetFontHandle.c)
 */

__int64 __fastcall AnFwConfigureProgressResources(_DWORD *a1)
{
  int BitsPerPixel; // eax
  __int128 v4; // [rsp+30h] [rbp-28h] BYREF
  int v5; // [rsp+40h] [rbp-18h]
  int v6; // [rsp+44h] [rbp-14h]
  __int64 v7; // [rsp+60h] [rbp+8h] BYREF

  KeInitializeEvent(&stru_14031C380, NotificationEvent, 1u);
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
  dword_1402D4BD4 = ((BgpGxRectangleSize(a1[3], a1[2], BitsPerPixel) + 15) & 0xFFFFFFF0) + 128;
  dword_1402D4BD0 = 122 * dword_1402D4BD4;
  dword_1402D4BD8 = BgpTxtRegionSize(v7);
  return v7;
}
