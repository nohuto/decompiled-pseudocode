/*
 * XREFs of ?IsHardwareProtected@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180126150
 * Callers:
 *     ?IsHardwareProtected@CCompositionSurfaceBitmap@@W7EBA_NXZ @ 0x1800BCEA0 (-IsHardwareProtected@CCompositionSurfaceBitmap@@W7EBA_NXZ.c)
 *     ?IsHardwareProtected@CCompositionSurfaceBitmap@@WCA@EBA_NXZ @ 0x1800BCEB0 (-IsHardwareProtected@CCompositionSurfaceBitmap@@WCA@EBA_NXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::IsHardwareProtected(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rdi
  __int64 result; // rax

  v1 = *((_QWORD *)this + 51);
  result = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v1 + 112) + 120LL))(v1 + 112);
  return result;
}
