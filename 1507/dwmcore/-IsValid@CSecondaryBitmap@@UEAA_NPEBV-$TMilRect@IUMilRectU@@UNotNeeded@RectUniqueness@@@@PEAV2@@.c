/*
 * XREFs of ?IsValid@CSecondaryBitmap@@UEAA_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1801515A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z @ 0x18000D46C (-Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800884B4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z @ 0x180119750 (-SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z.c)
 *     ?GetBitmapRect@CSecondaryBitmap@@IEBAXPEAUMilRectU@@@Z @ 0x180150EB8 (-GetBitmapRect@CSecondaryBitmap@@IEBAXPEAUMilRectU@@@Z.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18015118C (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z @ 0x18015B8F0 (-GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z.c)
 */

bool __fastcall CSecondaryBitmap::IsValid(
        const struct FastRegion::Internal::CRgnData **a1,
        const struct MilRectU *a2,
        __int64 a3)
{
  const struct FastRegion::Internal::CRgnData *v5; // rdx
  char v6; // al
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
  if ( *(_DWORD *)v10 && (v5 = a1[1], *(_DWORD *)v5) )
    v6 = FastRegion::Internal::CRgnData::Intersects(v10, v5);
  else
    v6 = 0;
  v7 = v6 == 0;
  if ( a3 )
  {
    if ( v6 )
    {
      FastRegion::CRegion::Intersect(&v10, a1 + 1);
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
  FastRegion::CRegion::FreeMemory((void **)&v10);
  return v7;
}
