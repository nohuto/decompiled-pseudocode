/*
 * XREFs of ?GetD2DContext@CSwRenderTargetGetBounds@@UEAAJPEAPEAVID2DContext@@@Z @ 0x180043E60
 * Callers:
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x18002F420 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 * Callees:
 *     ?AssertW@@YAXPEBG000K@Z @ 0x180128D60 (-AssertW@@YAXPEBG000K@Z.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::GetD2DContext(CSwRenderTargetGetBounds *this, struct ID2DContext **a2)
{
  volatile signed __int32 *v2; // rdi
  struct ID2DContext *v3; // rbx
  __int64 result; // rax

  v2 = (volatile signed __int32 *)((char *)this - 16);
  v3 = 0LL;
  if ( *((int *)this - 2) < 0 )
    AssertW(
      L"Tried to AddRef an object which has previously been freed (refcount went to 0).",
      0LL,
      L"CMILCOMBase::InternalAddRef",
      L"windows\\dwm\\common\\shared\\milcom.cpp",
      0x1Fu);
  _InterlockedIncrement(v2 + 2);
  if ( v2 )
    v3 = (CSwRenderTargetGetBounds *)((char *)this + 8);
  result = 0LL;
  *a2 = v3;
  return result;
}
