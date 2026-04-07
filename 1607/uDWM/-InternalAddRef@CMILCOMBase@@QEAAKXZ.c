/*
 * XREFs of ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800447F0
 * Callers:
 *     ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x180042ED8 (-HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z.c)
 *     ?AddRef@CBitmap@@UEAAKXZ @ 0x180042FC0 (-AddRef@CBitmap@@UEAAKXZ.c)
 *     ?Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVIBitmapSource@@@Z @ 0x1800433C8 (-Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_M.c)
 *     ?AddRef@CCompressedSourceBitmap@@WBA@EAAKXZ @ 0x180051320 (-AddRef@CCompressedSourceBitmap@@WBA@EAAKXZ.c)
 *     ?AddRef@CCompressedSourceBitmap@@WBAA@EAAKXZ @ 0x180051330 (-AddRef@CCompressedSourceBitmap@@WBAA@EAAKXZ.c)
 *     ?AddRef@CCompressedSourceBitmap@@WBAI@EAAKXZ @ 0x180051340 (-AddRef@CCompressedSourceBitmap@@WBAI@EAAKXZ.c)
 *     ?AddRef@CCompressedSourceBitmap@@WBI@EAAKXZ @ 0x180051350 (-AddRef@CCompressedSourceBitmap@@WBI@EAAKXZ.c)
 *     ?AddRef@CCompressedSourceBitmap@@WCA@EAAKXZ @ 0x180051360 (-AddRef@CCompressedSourceBitmap@@WCA@EAAKXZ.c)
 *     ?AddRef@CCompressedSourceBitmap@@WCI@EAAKXZ @ 0x180051370 (-AddRef@CCompressedSourceBitmap@@WCI@EAAKXZ.c)
 *     ?AddRef@CCompressedSourceBitmap@@WDA@EAAKXZ @ 0x180051380 (-AddRef@CCompressedSourceBitmap@@WDA@EAAKXZ.c)
 * Callees:
 *     ?AssertW@@YAXPEBG000K@Z @ 0x18009AE54 (-AssertW@@YAXPEBG000K@Z.c)
 */

__int64 __fastcall CMILCOMBase::InternalAddRef(CMILCOMBase *this)
{
  if ( *((int *)this + 2) < 0 )
    AssertW(
      L"Tried to AddRef an object which has previously been freed (refcount went to 0).",
      0LL,
      L"CMILCOMBase::InternalAddRef",
      L"windows\\dwm\\common\\shared\\milcom.cpp",
      0x1Fu);
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
