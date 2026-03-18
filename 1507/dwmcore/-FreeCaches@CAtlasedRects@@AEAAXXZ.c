/*
 * XREFs of ?FreeCaches@CAtlasedRects@@AEAAXXZ @ 0x180070308
 * Callers:
 *     ?OnChanged@CAtlasedRectsGroup@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180017280 (-OnChanged@CAtlasedRectsGroup@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CAtlasedRectsMesh@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18006F470 (-OnChanged@CAtlasedRectsMesh@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetMeshData@CAtlasedRects@@QEAAJPEAIQEAPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1QEAPEBM@Z @ 0x180070920 (-GetMeshData@CAtlasedRects@@QEAAJPEAIQEAPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ??1CAtlasedRects@@MEAA@XZ @ 0x180070B50 (--1CAtlasedRects@@MEAA@XZ.c)
 *     ?OnChanged@CAtlasedRects@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800DC770 (-OnChanged@CAtlasedRects@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x180016050 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180031300 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CAtlasedRects::FreeCaches(void **this)
{
  void (__fastcall *v2)(WPF::ProcessHeapImpl *, void *); // rsi
  void (__fastcall *v3)(WPF::ProcessHeapImpl *, void *); // rsi
  void (__fastcall *v4)(WPF::ProcessHeapImpl *, void *); // rsi
  __int64 v5; // rbp
  __int64 v6; // rsi
  CMILCOMBase *v7; // rbx

  v2 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v2 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this[6]);
  else
    v2(WPF::g_pProcessHeap, this[6]);
  this[6] = 0LL;
  v3 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v3 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this[7]);
  else
    v3(WPF::g_pProcessHeap, this[7]);
  this[7] = 0LL;
  v4 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v4 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this[8]);
  else
    v4(WPF::g_pProcessHeap, this[8]);
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
  DynArrayImpl<0>::ShrinkToSize(this + 9, 8u);
}
