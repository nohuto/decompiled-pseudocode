/*
 * XREFs of ?AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x18004AF20
 * Callers:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800404F0 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 * Callees:
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x1800068EC (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?Initialize@CDirtyRegion@@QEAAX_KAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18003C97C (-Initialize@CDirtyRegion@@QEAAX_KAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800DE608 (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?AddOverdrawToDirtyRegion@CDirectFlipInfo@@QEAAJPEAVCDirtyRegion@@PEBV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@@Z @ 0x1800EEE90 (-AddOverdrawToDirtyRegion@CDirectFlipInfo@@QEAAJPEAVCDirtyRegion@@PEBV-$CMatrix@UPageInPixels@Co.c)
 *     ?ConvertAnyDirtyToFullDirty@CDirtyRegion@@QEAAXXZ @ 0x1800F9EC8 (-ConvertAnyDirtyToFullDirty@CDirtyRegion@@QEAAXXZ.c)
 */

void __fastcall CHwndRenderTarget::AddInvalidRects(
        CHwndRenderTarget *this,
        const struct CVisualTree *a2,
        struct CDirtyRegion *a3)
{
  __int64 v3; // r14
  __int64 v6; // rbx
  __int64 v7; // rcx
  CDirectFlipInfo *v8; // rcx
  int v9; // ebx
  __int64 v10; // rbp
  __int64 v12; // rcx

  v3 = *((_QWORD *)this + 6);
  if ( v3 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, const struct CVisualTree *))(*(_QWORD *)v3 + 48LL))(
           *((_QWORD *)this + 6),
           a2)
      && (!*(_DWORD *)(*((_QWORD *)this - 4) + 212LL) || *((_BYTE *)this + 523)) )
    {
      *((_BYTE *)this + 519) = 1;
    }
    else
    {
      if ( *((_BYTE *)this + 519) )
        *((_BYTE *)this + 513) = 1;
      *((_BYTE *)this + 519) = 0;
    }
  }
  if ( *((_BYTE *)this + 513) )
  {
    v9 = *((_DWORD *)a3 + 248);
    CDirtyRegion::Initialize(a3, *((_QWORD *)a3 + 2), (struct CDirtyRegion *)((char *)a3 + 996), 1);
    *((_DWORD *)a3 + 248) = v9;
  }
  else
  {
    if ( (*((_BYTE *)this + 152) & 8) == 0 )
      CDirtyRegion::ConvertAnyDirtyToFullDirty(a3);
    v6 = *((_QWORD *)this + 25);
    if ( *((_DWORD *)this + 56) )
    {
      v10 = *((unsigned int *)this + 56);
      do
      {
        CDirtyRegion::Add(a3, 0LL);
        v6 += 16LL;
        --v10;
      }
      while ( v10 );
    }
    v7 = *((_QWORD *)this + 63);
    if ( v7 )
    {
      v8 = *(CDirectFlipInfo **)(v7 + 624);
      if ( v8 )
      {
        if ( *((_BYTE *)v8 + 40) )
        {
          if ( CDirectFlipInfo::RenderingRealizationChanged(v8) )
            CDirectFlipInfo::AddOverdrawToDirtyRegion(v12, a3, (char *)this + 84);
        }
      }
    }
  }
  *((_BYTE *)this + 513) = 0;
  *((_DWORD *)this + 56) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 25, 0x10u);
}
