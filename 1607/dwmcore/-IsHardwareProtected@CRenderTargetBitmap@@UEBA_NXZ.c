/*
 * XREFs of ?IsHardwareProtected@CRenderTargetBitmap@@UEBA_NXZ @ 0x180132B60
 * Callers:
 *     ?IsHardwareProtected@CRenderTargetImageSource@@UEBA_NXZ @ 0x180131E50 (-IsHardwareProtected@CRenderTargetImageSource@@UEBA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CRenderTargetBitmap::IsHardwareProtected(CRenderTargetBitmap *this)
{
  __int64 v1; // rcx
  char v2; // bl

  v1 = *((_QWORD *)this + 2);
  v2 = 0;
  if ( v1 )
    return (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v1 + 168LL))(v1) != 0;
  return v2;
}
