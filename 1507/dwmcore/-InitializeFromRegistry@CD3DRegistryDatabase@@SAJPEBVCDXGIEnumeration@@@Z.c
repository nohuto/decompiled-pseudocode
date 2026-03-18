/*
 * XREFs of ?InitializeFromRegistry@CD3DRegistryDatabase@@SAJPEBVCDXGIEnumeration@@@Z @ 0x180096A4C
 * Callers:
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180023530 (-BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBV-$CMatrix@UBaseSamplin.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InitializeDriversFromRegistry@CD3DRegistryDatabase@@CAJPEBVCDXGIEnumeration@@@Z @ 0x180096A78 (-InitializeDriversFromRegistry@CD3DRegistryDatabase@@CAJPEBVCDXGIEnumeration@@@Z.c)
 */

__int64 __fastcall CD3DRegistryDatabase::InitializeFromRegistry(const struct CDXGIEnumeration *a1)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = CD3DRegistryDatabase::InitializeDriversFromRegistry(a1);
  v2 = v1;
  if ( v1 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0xD2u);
    CD3DRegistryDatabase::m_fInitialized = 0;
  }
  else
  {
    CD3DRegistryDatabase::m_fInitialized = 1;
  }
  return v2;
}
