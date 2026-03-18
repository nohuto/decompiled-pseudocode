/*
 * XREFs of ?Release@CDirtyRegion@@UEAAKXZ @ 0x180079630
 * Callers:
 *     ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x1800750F0 (-PreRender@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180076884 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18007E1D0 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??_ECDirtyRegion@@UEAAPEAXI@Z @ 0x18007A840 (--_ECDirtyRegion@@UEAAPEAXI@Z.c)
 */

__int64 __fastcall CDirtyRegion::Release(CDirtyRegion *this)
{
  unsigned __int32 v1; // edi
  void *(__fastcall *v2)(CDirtyRegion *__hidden, unsigned int); // rsi

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
  {
    v2 = *(void *(__fastcall **)(CDirtyRegion *__hidden, unsigned int))(*(_QWORD *)this + 16LL);
    if ( v2 == CDirtyRegion::`vector deleting destructor' )
      CDirtyRegion::`vector deleting destructor'(this, 1u);
    else
      v2(this, 1u);
  }
  return v1;
}
