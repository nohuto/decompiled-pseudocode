/*
 * XREFs of ?IsHardwareProtected@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18010A800
 * Callers:
 *     ?IsHardwareProtected@CCompositionSurfaceBitmap@@WBI@EBA_NXZ @ 0x18009A240 (-IsHardwareProtected@CCompositionSurfaceBitmap@@WBI@EBA_NXZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::IsHardwareProtected(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rdi
  __int64 result; // rax

  v1 = *((_QWORD *)this + 50);
  result = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v1 + 112) + 112LL))(v1 + 112);
  return result;
}
