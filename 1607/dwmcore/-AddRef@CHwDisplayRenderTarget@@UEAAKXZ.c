/*
 * XREFs of ?AddRef@CHwDisplayRenderTarget@@UEAAKXZ @ 0x18002D950
 * Callers:
 *     ?AddRef@CHwTextureRenderTarget@@WIA@EAAKXZ @ 0x1800C0F30 (-AddRef@CHwTextureRenderTarget@@WIA@EAAKXZ.c)
 *     ?AddRef@CHwTextureRenderTarget@@WLA@EAAKXZ @ 0x1800C1700 (-AddRef@CHwTextureRenderTarget@@WLA@EAAKXZ.c)
 *     ?AddRef@CHwTextureRenderTarget@@WLI@EAAKXZ @ 0x1800C1710 (-AddRef@CHwTextureRenderTarget@@WLI@EAAKXZ.c)
 *     ?AddRef@CHwTextureRenderTarget@@WMA@EAAKXZ @ 0x1800C1720 (-AddRef@CHwTextureRenderTarget@@WMA@EAAKXZ.c)
 *     ?AddRef@CHwTextureRenderTarget@@WMI@EAAKXZ @ 0x1800C1730 (-AddRef@CHwTextureRenderTarget@@WMI@EAAKXZ.c)
 * Callees:
 *     ?AssertW@@YAXPEBG000K@Z @ 0x1800BF324 (-AssertW@@YAXPEBG000K@Z.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::AddRef(CHwDisplayRenderTarget *this)
{
  if ( *((int *)this + 34) < 0 )
    AssertW(
      L"Tried to AddRef an object which has previously been freed (refcount went to 0).",
      0LL,
      L"CMILCOMBase::InternalAddRef",
      L"onecoreuap\\windows\\dwm\\common\\shared\\milcom.cpp",
      0x1Fu);
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 34);
}
