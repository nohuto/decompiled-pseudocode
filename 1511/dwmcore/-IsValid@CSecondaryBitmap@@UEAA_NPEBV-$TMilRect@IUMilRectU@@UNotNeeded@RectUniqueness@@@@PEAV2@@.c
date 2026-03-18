/*
 * XREFs of ?IsValid@CSecondaryBitmap@@UEAA_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180018E90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBitmapRect@CSecondaryBitmap@@IEBAXPEAUMilRectU@@@Z @ 0x180018E1C (-GetBitmapRect@CSecondaryBitmap@@IEBAXPEAUMilRectU@@@Z.c)
 *     ?GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z @ 0x18001909C (-GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z.c)
 *     ?SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z @ 0x1800191B0 (-SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800193EC (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z @ 0x18001955C (-Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18006DF1C (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

bool __fastcall CSecondaryBitmap::IsValid(
        const struct FastRegion::Internal::CRgnData **a1,
        const struct MilRectU *a2,
        __int64 a3)
{
  const struct FastRegion::Internal::CRgnData *v5; // rdx
  bool v6; // al
  bool v7; // di
  _BYTE v9[16]; // [rsp+20h] [rbp-78h] BYREF
  struct FastRegion::Internal::CRgnData *v10; // [rsp+30h] [rbp-68h] BYREF
  int v11; // [rsp+38h] [rbp-60h] BYREF

  v10 = (struct FastRegion::Internal::CRgnData *)&v11;
  v11 = 0;
  if ( !a2 )
  {
    CSecondaryBitmap::GetBitmapRect((CSecondaryBitmap *)a1, (struct MilRectU *)v9);
    a2 = (const struct MilRectU *)v9;
  }
  CRegion::SetRectangle((CRegion *)&v10, a2);
  v6 = *(_DWORD *)v10 && (v5 = a1[1], *(_DWORD *)v5) && FastRegion::Internal::CRgnData::Intersects(v10, v5);
  v7 = !v6;
  if ( a3 )
  {
    if ( v6 )
    {
      FastRegion::CRegion::Intersect((FastRegion::CRegion *)&v10, (const struct CRegion *)(a1 + 1));
      CRegion::GetBoundingRect((CRegion *)&v10, (struct MilRectU *)a3);
    }
    else
    {
      *(_DWORD *)(a3 + 12) = 0;
      *(_DWORD *)(a3 + 8) = 0;
      *(_DWORD *)(a3 + 4) = 0;
      *(_DWORD *)a3 = 0;
    }
  }
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v10);
  return v7;
}
