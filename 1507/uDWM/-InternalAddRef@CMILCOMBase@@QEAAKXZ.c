/*
 * XREFs of ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18003F5A0
 * Callers:
 *     ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x18003D858 (-HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z.c)
 *     ?AddRef@CBitmap@@UEAAKXZ @ 0x18003DB80 (-AddRef@CBitmap@@UEAAKXZ.c)
 *     ?Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVIBitmapSource@@@Z @ 0x18003DFDC (-Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_M.c)
 *     ?AddRef@CCompressedSourceBitmap@@WBA@EAAKXZ @ 0x18004A630 (-AddRef@CCompressedSourceBitmap@@WBA@EAAKXZ.c)
 *     ?AddRef@CCompressedSourceBitmap@@WBAA@EAAKXZ @ 0x18004A640 (-AddRef@CCompressedSourceBitmap@@WBAA@EAAKXZ.c)
 *     ?AddRef@CCompressedSourceBitmap@@WBAI@EAAKXZ @ 0x18004A650 (-AddRef@CCompressedSourceBitmap@@WBAI@EAAKXZ.c)
 *     ?AddRef@CCompressedSourceBitmap@@WBI@EAAKXZ @ 0x18004A660 (-AddRef@CCompressedSourceBitmap@@WBI@EAAKXZ.c)
 *     ?AddRef@CCompressedSourceBitmap@@WCA@EAAKXZ @ 0x18004A670 (-AddRef@CCompressedSourceBitmap@@WCA@EAAKXZ.c)
 *     ?AddRef@CCompressedSourceBitmap@@WCI@EAAKXZ @ 0x18004A680 (-AddRef@CCompressedSourceBitmap@@WCI@EAAKXZ.c)
 *     ?AddRef@CCompressedSourceBitmap@@WDA@EAAKXZ @ 0x18004A690 (-AddRef@CCompressedSourceBitmap@@WDA@EAAKXZ.c)
 * Callees:
 *     ?AssertW@@YAXPEBG000K@Z @ 0x18009CBEC (-AssertW@@YAXPEBG000K@Z.c)
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
