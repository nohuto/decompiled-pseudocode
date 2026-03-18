/*
 * XREFs of ?Release@CDirtyRegion@@UEAAKXZ @ 0x180070E00
 * Callers:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000C8B8 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x180075780 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?NotifyTreeDirtyRegion@CDesktopRenderTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x180075D80 (-NotifyTreeDirtyRegion@CDesktopRenderTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z.c)
 *     ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x180075FA0 (-PreRender@CDesktopRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ??_ECDirtyRegion@@UEAAPEAXI@Z @ 0x180072590 (--_ECDirtyRegion@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDirtyRegion::Release(CDirtyRegion *this)
{
  unsigned __int32 v1; // ebx
  void *(__fastcall *v3)(CDirtyRegion *__hidden, unsigned int); // rax

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
  {
    v3 = *(void *(__fastcall **)(CDirtyRegion *__hidden, unsigned int))(*(_QWORD *)this + 16LL);
    if ( v3 == CDirtyRegion::`vector deleting destructor' )
      CDirtyRegion::`vector deleting destructor'(this, 1u);
    else
      v3(this, 1u);
  }
  return v1;
}
