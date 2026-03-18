/*
 * XREFs of ?AddRef@CHwDisplayRenderTarget@@UEAAKXZ @ 0x180044440
 * Callers:
 *     ?AddRef@CHwDisplayRenderTarget@@WHI@EAAKXZ @ 0x18009ABC0 (-AddRef@CHwDisplayRenderTarget@@WHI@EAAKXZ.c)
 *     ?AddRef@CHwDisplayRenderTarget@@WLA@EAAKXZ @ 0x18009ABD0 (-AddRef@CHwDisplayRenderTarget@@WLA@EAAKXZ.c)
 * Callees:
 *     ?AssertW@@YAXPEBG000K@Z @ 0x180128D60 (-AssertW@@YAXPEBG000K@Z.c)
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
