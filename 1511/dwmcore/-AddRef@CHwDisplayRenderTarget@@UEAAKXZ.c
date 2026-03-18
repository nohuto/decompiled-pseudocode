/*
 * XREFs of ?AddRef@CHwDisplayRenderTarget@@UEAAKXZ @ 0x18007FDE0
 * Callers:
 *     ?AddRef@CHwDisplayRenderTarget@@WHI@EAAKXZ @ 0x1800BD820 (-AddRef@CHwDisplayRenderTarget@@WHI@EAAKXZ.c)
 *     ?AddRef@CHwDisplayRenderTarget@@WLA@EAAKXZ @ 0x1800BD830 (-AddRef@CHwDisplayRenderTarget@@WLA@EAAKXZ.c)
 * Callees:
 *     ?AssertW@@YAXPEBG000K@Z @ 0x1800BC5A0 (-AssertW@@YAXPEBG000K@Z.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::AddRef(CHwDisplayRenderTarget *this)
{
  if ( *((int *)this + 32) < 0 )
    AssertW(
      L"Tried to AddRef an object which has previously been freed (refcount went to 0).",
      0LL,
      L"CMILCOMBase::InternalAddRef",
      L"windows\\dwm\\common\\shared\\milcom.cpp",
      0x1Fu);
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 32);
}
