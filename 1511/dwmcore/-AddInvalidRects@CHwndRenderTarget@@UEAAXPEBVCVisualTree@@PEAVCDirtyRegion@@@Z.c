/*
 * XREFs of ?AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x18007C5A0
 * Callers:
 *     ?CollectInvalidClientRects@CVisualTree@@IEAAXPEAVCDirtyRegion@@@Z @ 0x180075DF0 (-CollectInvalidClientRects@CVisualTree@@IEAAXPEAVCDirtyRegion@@@Z.c)
 * Callees:
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x1800072CC (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x18007969C (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180079840 (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x1800FB690 (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     ?AddOverdrawToDirtyRegion@CDirectFlipInfo@@QEAAJPEAVCDirtyRegion@@PEBV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@@Z @ 0x180108EA0 (-AddOverdrawToDirtyRegion@CDirectFlipInfo@@QEAAJPEAVCDirtyRegion@@PEBV-$CMatrix@UPageInPixels@Co.c)
 */

void __fastcall CHwndRenderTarget::AddInvalidRects(
        CHwndRenderTarget *this,
        const struct CVisualTree *a2,
        struct CDirtyRegion *a3,
        __int64 a4)
{
  __int64 v4; // r14
  float *v7; // rbx
  __int64 v8; // rcx
  CDirectFlipInfo *v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v15; // rcx

  v4 = *((_QWORD *)this + 6);
  if ( v4 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, const struct CVisualTree *))(*(_QWORD *)v4 + 48LL))(
           *((_QWORD *)this + 6),
           a2)
      && (!*(_DWORD *)(*((_QWORD *)this - 4) + 212LL) || *((_BYTE *)this + 516)) )
    {
      *((_BYTE *)this + 512) = 1;
    }
    else
    {
      if ( *((_BYTE *)this + 512) )
        *((_BYTE *)this + 506) = 1;
      *((_BYTE *)this + 512) = 0;
    }
  }
  if ( *((_BYTE *)this + 506) )
  {
    CDirtyRegion::SetFullDirty(a3, (__int64)a2, (__int64)a3, a4);
  }
  else
  {
    if ( (*((_BYTE *)this + 152) & 8) == 0 && !*((_BYTE *)a3 + 1012) )
    {
      if ( CDirtyRegion::IsEmpty(a3) )
        *((_BYTE *)a3 + 1013) = 1;
      else
        CDirtyRegion::SetFullDirty(a3, v11, v12, v13);
    }
    v7 = (float *)*((_QWORD *)this + 24);
    if ( *((_DWORD *)this + 54) )
    {
      v10 = *((unsigned int *)this + 54);
      do
      {
        CDirtyRegion::Add(a3, 0LL, 0LL, v7);
        v7 += 4;
        --v10;
      }
      while ( v10 );
    }
    v8 = *((_QWORD *)this + 62);
    if ( v8 )
    {
      v9 = *(CDirectFlipInfo **)(v8 + 712);
      if ( v9 )
      {
        if ( *((_BYTE *)v9 + 40) )
        {
          if ( CDirectFlipInfo::RenderingRealizationChanged(v9) )
            CDirectFlipInfo::AddOverdrawToDirtyRegion(v15, a3, (char *)this + 84);
        }
      }
    }
  }
  *((_BYTE *)this + 506) = 0;
  *((_DWORD *)this + 54) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 24, 0x10u);
}
