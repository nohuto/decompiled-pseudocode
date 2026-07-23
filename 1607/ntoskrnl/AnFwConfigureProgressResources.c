/*
 * XREFs of AnFwConfigureProgressResources @ 0x140727B18
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140725E8C (BgpFwLibraryInitialize.c)
 * Callees:
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     BgpGetBitsPerPixel @ 0x140127D00 (BgpGetBitsPerPixel.c)
 *     BgpGxRectangleSize @ 0x140129D34 (BgpGxRectangleSize.c)
 *     BgpTxtRegionSize @ 0x14012A160 (BgpTxtRegionSize.c)
 *     BgpTxtCreateRegion @ 0x140726BC4 (BgpTxtCreateRegion.c)
 *     BgpFoGetFontHandle @ 0x1407279B8 (BgpFoGetFontHandle.c)
 */

__int64 __fastcall AnFwConfigureProgressResources(_DWORD *a1)
{
  int BitsPerPixel; // eax
  __int128 v4; // [rsp+30h] [rbp-28h] BYREF
  int v5; // [rsp+40h] [rbp-18h]
  int v6; // [rsp+44h] [rbp-14h]
  __int64 v7; // [rsp+60h] [rbp+8h] BYREF

  KeInitializeEvent(&stru_1403404E0, NotificationEvent, 1u);
  if ( !a1 )
    return 0LL;
  if ( (a1[6] & 1) == 0 )
    return 0LL;
  if ( (int)BgpFoGetFontHandle(0LL, (__int64 **)&v4 + 1) < 0 )
    return 0LL;
  *(_QWORD *)&v4 = qword_1402FA0F0;
  v5 = a1[5];
  v6 = 1;
  if ( (int)BgpTxtCreateRegion(a1, a1 + 2, &v4, &v7, 10) < 0 )
    return 0LL;
  BitsPerPixel = BgpGetBitsPerPixel();
  dword_1402F9FB4 = ((BgpGxRectangleSize(a1[3], a1[2], BitsPerPixel) + 15) & 0xFFFFFFF0) + 128;
  dword_1402F9FB0 = 122 * dword_1402F9FB4;
  dword_1402F9FB8 = BgpTxtRegionSize(v7);
  return v7;
}
