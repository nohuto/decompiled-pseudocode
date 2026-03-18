/*
 * XREFs of ?AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z @ 0x1800507B0
 * Callers:
 *     ?PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z @ 0x18000C768 (-PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z.c)
 *     ?RemoveChild@CVisual@@IEAAJPEAV1@_N@Z @ 0x1800502CC (-RemoveChild@CVisual@@IEAAJPEAV1@_N@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800538C0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x180075FA0 (-PreRender@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?SetDirty@CCoRenderVisualProxy@@AEAAJIPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180125E04 (-SetDirty@CCoRenderVisualProxy@@AEAAJIPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 * Callees:
 *     ?Add@?$CMergedRectBase@$03@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002CD5C (-Add@-$CMergedRectBase@$03@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetAdditionalDirtyRects@CVisual@@QEAAXPEAVCMergedRect@@@Z @ 0x18004FBAC (-SetAdditionalDirtyRects@CVisual@@QEAAXPEAVCMergedRect@@@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800A258C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800A30EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::AddAdditionalDirtyRects(CVisual *this, const struct MilRectF *a2)
{
  __int64 v4; // rax
  int v5; // edx
  int *v6; // rcx
  _DWORD *v7; // rdi
  char v8; // al
  __int64 v9; // rax
  __int64 i; // rbx
  char v11; // al
  __int64 v12; // rax
  bool v13; // al
  void *(__fastcall *v15)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  _DWORD *v16; // rax
  __int64 v17; // rbp
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rbp
  __int64 v22; // rax

  if ( *((float *)a2 + 2) <= *(float *)a2 || *((float *)a2 + 3) <= *((float *)a2 + 1) )
    return 0LL;
  v4 = *((_QWORD *)this + 34);
  if ( (*(_DWORD *)(v4 + 4) & 0x20000) == 0 )
    goto LABEL_21;
  v5 = *(_DWORD *)(v4 + 12);
  v6 = (int *)(v4 + 12);
  if ( (v5 & 0x7F000000) != 0xF000000 )
  {
    do
    {
      v6 = (int *)((char *)v6 + (v5 & 0xFFFFFF) + 4);
      v5 = *v6;
    }
    while ( (*v6 & 0x7F000000) != 0xF000000 );
  }
  v7 = *(_DWORD **)(v6 + 1);
  if ( !v7 )
  {
LABEL_21:
    v15 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v15 == WPF::ProcessHeapImpl::Alloc )
      v16 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x4CuLL);
    else
      v16 = (_DWORD *)v15(WPF::g_pProcessHeap, 76uLL);
    v7 = v16;
    if ( !v16 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x9B4u);
      return 2147942414LL;
    }
    memset_0(v16, 0, 0x4CuLL);
    `vector constructor iterator'(
      (TemporaryConfiguration *)v7,
      0x10uLL,
      4uLL,
      (void *(*)(void *))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
    memset_0(v7, 0, 0x4CuLL);
    v7[17] = 1;
    CVisual::SetAdditionalDirtyRects(this, (struct CMergedRect *)v7);
  }
  v8 = *((_BYTE *)this + 153);
  if ( v8 < 0 )
  {
    *((_BYTE *)this + 153) = v8 & 0x7F;
    v7[16] = 0;
    *(_QWORD *)(v7 + 17) = 1LL;
  }
  CMergedRectBase<4>::Add((__int64)v7, (__int64)a2);
  v9 = *((_QWORD *)this + 3);
  if ( (v9 & 2) != 0 )
    v9 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v9) = v9 & 1;
  if ( (_DWORD)v9 )
  {
    v20 = 0LL;
    v21 = (unsigned int)v9;
    do
    {
      v22 = CPtrArrayBase::operator[]((char *)this + 24, v20);
      if ( v22 != *((_QWORD *)this + 18) )
        CResource::NotifyOnChanged(v22, 0LL, 0LL);
      ++v20;
      --v21;
    }
    while ( v21 );
  }
  for ( i = *((_QWORD *)this + 18); i; i = *(_QWORD *)(i + 144) )
  {
    v11 = *(_BYTE *)(i + 152);
    if ( (v11 & 2) != 0 )
      break;
    *(_BYTE *)(i + 152) = v11 | 2;
    v12 = *(_QWORD *)(i + 24);
    if ( (v12 & 2) != 0 )
      v12 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v12) = v12 & 1;
    if ( (_DWORD)v12 )
    {
      v17 = 0LL;
      v18 = (unsigned int)v12;
      do
      {
        v19 = CPtrArrayBase::operator[](i + 24, v17);
        if ( v19 != *(_QWORD *)(i + 144) )
          CResource::NotifyOnChanged(v19, 0LL, 0LL);
        ++v17;
        --v18;
      }
      while ( v18 );
    }
  }
  v13 = (*((_BYTE *)this + 152) & 4) != 0;
  *((_BYTE *)this + 152) &= ~4u;
  *((_BYTE *)this + 152) |= 4 * (v13 | 2);
  return 0LL;
}
