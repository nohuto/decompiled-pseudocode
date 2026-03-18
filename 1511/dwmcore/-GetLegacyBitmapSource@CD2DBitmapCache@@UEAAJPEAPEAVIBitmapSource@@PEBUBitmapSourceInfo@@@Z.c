/*
 * XREFs of ?GetLegacyBitmapSource@CD2DBitmapCache@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x18015F570
 * Callers:
 *     ?GetLegacyBitmapSource@CDxHandleStereoBitmapRealization@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x18015CFE0 (-GetLegacyBitmapSource@CDxHandleStereoBitmapRealization@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSo.c)
 * Callees:
 *     ?UpdateSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x18000D040 (-UpdateSysmemBitmap@CD2DBitmapCache@@IEAAJXZ.c)
 *     ?EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x18000D0E8 (-EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetBitmapSource@CSecondarySysmemBitmap@@QEAAJPEAPEAVIBitmapSource@@@Z @ 0x1801600F4 (-GetBitmapSource@CSecondarySysmemBitmap@@QEAAJPEAPEAVIBitmapSource@@@Z.c)
 */

__int64 __fastcall CD2DBitmapCache::GetLegacyBitmapSource(
        struct IUnknown **this,
        struct IBitmapSource **a2,
        const struct BitmapSourceInfo *a3)
{
  unsigned int v3; // ebx
  int v6; // eax
  int updated; // eax
  int BitmapSource; // eax

  v3 = 0;
  *a2 = 0LL;
  if ( this[4] && *((_DWORD *)this + 12) == 2 )
  {
    v6 = CD2DBitmapCache::EnsureSysmemBitmap((CD2DBitmapCache *)(this - 2));
    v3 = v6;
    if ( v6 >= 0 )
    {
      updated = CD2DBitmapCache::UpdateSysmemBitmap((CD2DBitmapCache *)(this - 2));
      v3 = updated;
      if ( updated >= 0 )
      {
        BitmapSource = CSecondarySysmemBitmap::GetBitmapSource(this[7], a2);
        v3 = BitmapSource;
        if ( BitmapSource < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapSource, 0xBFu);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0xBDu);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xBBu);
    }
  }
  return v3;
}
