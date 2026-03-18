/*
 * XREFs of ?FreeCaches@CAtlasedRects@@AEAAXXZ @ 0x1800254D4
 * Callers:
 *     ??1CAtlasedRects@@MEAA@XZ @ 0x1800253CC (--1CAtlasedRects@@MEAA@XZ.c)
 *     ?GetMeshData@CAtlasedRects@@QEAAJPEAIQEAPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1QEAPEBM@Z @ 0x180025B28 (-GetMeshData@CAtlasedRects@@QEAAJPEAIQEAPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?OnChanged@CAtlasedRectsGroup@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800267A0 (-OnChanged@CAtlasedRectsGroup@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CAtlasedRectsMesh@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180026D40 (-OnChanged@CAtlasedRectsMesh@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CAtlasedRects@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800F8FA0 (-OnChanged@CAtlasedRects@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x180027790 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 */

void __fastcall CAtlasedRects::FreeCaches(void **this)
{
  void (*v2)(WPF::ProcessHeapImpl *__hidden, void *); // rsi
  void (*v3)(WPF::ProcessHeapImpl *__hidden, void *); // rsi
  void (*v4)(WPF::ProcessHeapImpl *__hidden, void *); // rsi
  __int64 v5; // rbp
  __int64 v6; // rsi
  CMILCOMBase *v7; // rbx

  v2 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v2 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this[6]);
  else
    ((void (__fastcall *)(WPF::ProcessHeapImpl *, void *))v2)(WPF::g_pProcessHeap, this[6]);
  this[6] = 0LL;
  v3 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v3 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this[7]);
  else
    ((void (__fastcall *)(WPF::ProcessHeapImpl *, void *))v3)(WPF::g_pProcessHeap, this[7]);
  this[7] = 0LL;
  v4 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v4 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this[8]);
  else
    ((void (__fastcall *)(WPF::ProcessHeapImpl *, void *))v4)(WPF::g_pProcessHeap, this[8]);
  this[8] = 0LL;
  if ( *((_DWORD *)this + 24) )
  {
    v5 = *((unsigned int *)this + 24);
    v6 = 0LL;
    do
    {
      v7 = *(CMILCOMBase **)((char *)this[9] + v6);
      CD2DResource::RemoveResourceNotifier(
        (CD2DResource *)(*((_QWORD *)v7 + 3) + 16LL),
        (const struct IDeviceResourceNotify *)(this + 5));
      CMILCOMBase::InternalRelease(v7);
      v6 += 8LL;
      --v5;
    }
    while ( v5 );
  }
  *((_DWORD *)this + 24) = 0;
  DynArrayImpl<0>::ShrinkToSize(this + 9, 8LL);
}
