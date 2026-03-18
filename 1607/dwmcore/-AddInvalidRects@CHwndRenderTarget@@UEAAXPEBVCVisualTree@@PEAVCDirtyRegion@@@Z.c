/*
 * XREFs of ?AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x1800744E0
 * Callers:
 *     ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x180075FA0 (-PreRender@CDesktopRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x180070E50 (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x180070E8C (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180070FBC (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?AddOverdrawToDirtyRegion@CDirectFlipInfo@@QEAAJPEAVCDirtyRegion@@PEBV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@@Z @ 0x18012CA04 (-AddOverdrawToDirtyRegion@CDirectFlipInfo@@QEAAJPEAVCDirtyRegion@@PEBV-$CMatrix@UPageInPixels@Co.c)
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x18012D2BC (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 */

void __fastcall CHwndRenderTarget::AddInvalidRects(
        CHwndRenderTarget *this,
        const struct CVisualTree *a2,
        struct CDirtyRegion *a3)
{
  __int64 v5; // rcx
  float *v6; // rsi
  __int64 v7; // rcx
  CDirectFlipInfo *v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // rcx

  v5 = *((_QWORD *)this + 6);
  if ( v5 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, const struct CVisualTree *))(*(_QWORD *)v5 + 48LL))(v5, a2)
      && (!*(_DWORD *)(*((_QWORD *)this - 13) + 212LL) || *((_BYTE *)this + 637)) )
    {
      *((_BYTE *)this + 633) = 1;
    }
    else
    {
      if ( *((_BYTE *)this + 633) )
        *((_BYTE *)this + 627) = 1;
      *((_BYTE *)this + 633) = 0;
    }
  }
  if ( *((_BYTE *)this + 627) )
  {
    CDirtyRegion::SetFullDirty(a3);
  }
  else
  {
    if ( (*((_BYTE *)this + 224) & 8) == 0 && !*((_BYTE *)a3 + 2724) )
    {
      if ( CDirtyRegion::IsEmpty(a3) )
        *((_BYTE *)a3 + 2725) = 1;
      else
        CDirtyRegion::SetFullDirty(a3);
    }
    v6 = (float *)*((_QWORD *)this + 39);
    if ( *((_DWORD *)this + 84) )
    {
      v9 = *((unsigned int *)this + 84);
      do
      {
        CDirtyRegion::Add(a3, 0LL, 0LL, v6);
        v6 += 4;
        --v9;
      }
      while ( v9 );
    }
    v7 = *((_QWORD *)this + 77);
    if ( v7 )
    {
      v8 = *(CDirectFlipInfo **)(v7 + 960);
      if ( v8 )
      {
        if ( *((_BYTE *)v8 + 40) && CDirectFlipInfo::RenderingRealizationChanged(v8) )
          CDirectFlipInfo::AddOverdrawToDirtyRegion(v10, a3, (char *)this + 84);
      }
    }
  }
  *((_BYTE *)this + 627) = 0;
  *((_DWORD *)this + 84) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 312, 16LL);
}
