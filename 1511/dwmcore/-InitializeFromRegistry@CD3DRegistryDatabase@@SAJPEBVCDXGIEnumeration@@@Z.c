/*
 * XREFs of ?InitializeFromRegistry@CD3DRegistryDatabase@@SAJPEBVCDXGIEnumeration@@@Z @ 0x18006A428
 * Callers:
 *     ?GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180070F30 (-GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@.c)
 * Callees:
 *     ?InitializeDriversFromRegistry@CD3DRegistryDatabase@@CAJPEBVCDXGIEnumeration@@@Z @ 0x18006A5DC (-InitializeDriversFromRegistry@CD3DRegistryDatabase@@CAJPEBVCDXGIEnumeration@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
