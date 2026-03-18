/*
 * XREFs of ?IsHardwareProtected@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180142950
 * Callers:
 *     ?IsHardwareProtected@CCompositionSurfaceBitmap@@W7EBA_NXZ @ 0x1800BFD20 (-IsHardwareProtected@CCompositionSurfaceBitmap@@W7EBA_NXZ.c)
 *     ?IsHardwareProtected@CCompositionSurfaceBitmap@@WCA@EBA_NXZ @ 0x1800BFD30 (-IsHardwareProtected@CCompositionSurfaceBitmap@@WCA@EBA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::IsHardwareProtected(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *((_QWORD *)this + 52);
  result = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v1 + 112) + 128LL))(v1 + 112);
  return result;
}
