/*
 * XREFs of ?NotifyTreeDirtyRegion@CDesktopRenderTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x180075D80
 * Callers:
 *     ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x180075FA0 (-PreRender@CDesktopRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x180070E00 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDesktopRenderTarget::NotifyTreeDirtyRegion(
        CDesktopRenderTarget *this,
        const struct CVisualTree *a2,
        const struct CDirtyRegion *a3)
{
  CDirtyRegion *v5; // rcx
  void (*v6)(void); // rax

  v5 = (CDirtyRegion *)*((_QWORD *)this + 41);
  if ( v5 )
  {
    v6 = *(void (**)(void))(*(_QWORD *)v5 + 8LL);
    if ( (char *)v6 == (char *)CDirtyRegion::Release )
      CDirtyRegion::Release(v5);
    else
      v6();
  }
  *((_QWORD *)this + 41) = a3;
  if ( a3 )
    (**(void (__fastcall ***)(const struct CDirtyRegion *, const struct CVisualTree *))a3)(a3, a2);
}
