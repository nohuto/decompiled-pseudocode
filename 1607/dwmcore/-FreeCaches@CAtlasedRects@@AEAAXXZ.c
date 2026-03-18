/*
 * XREFs of ?FreeCaches@CAtlasedRects@@AEAAXXZ @ 0x18009BCE4
 * Callers:
 *     ?GetMeshData@CAtlasedRects@@QEAAJPEAIQEAPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1QEAPEBM@Z @ 0x18009C2DC (-GetMeshData@CAtlasedRects@@QEAAJPEAIQEAPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ??1CAtlasedRects@@MEAA@XZ @ 0x18009C4C0 (--1CAtlasedRects@@MEAA@XZ.c)
 *     ?OnChanged@CAtlasedRectsMesh@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18009CB10 (-OnChanged@CAtlasedRectsMesh@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CAtlasedRectsGroup@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18009D5C0 (-OnChanged@CAtlasedRectsGroup@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CAtlasedRects@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18010E080 (-OnChanged@CAtlasedRects@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18009DA70 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAtlasedRects::FreeCaches(CAtlasedRects *this)
{
  void *v2; // rdx
  void (__fastcall *v3)(WPF::ProcessHeapImpl *, void *); // rax
  void *v4; // rdx
  void (__fastcall *v5)(WPF::ProcessHeapImpl *, void *); // rax
  void *v6; // rdx
  void (__fastcall *v7)(WPF::ProcessHeapImpl *, void *); // rax
  __int64 v8; // rsi
  __int64 v9; // rbp
  CMILCOMBase *v10; // rbx

  v2 = (void *)*((_QWORD *)this + 15);
  v3 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v3 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v2);
  else
    v3(WPF::g_pProcessHeap, v2);
  *((_QWORD *)this + 15) = 0LL;
  v4 = (void *)*((_QWORD *)this + 16);
  v5 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v5 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v4);
  else
    v5(WPF::g_pProcessHeap, v4);
  *((_QWORD *)this + 16) = 0LL;
  v6 = (void *)*((_QWORD *)this + 17);
  v7 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v7 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v6);
  else
    v7(WPF::g_pProcessHeap, v6);
  *((_QWORD *)this + 17) = 0LL;
  if ( *((_DWORD *)this + 42) )
  {
    v8 = 0LL;
    v9 = *((unsigned int *)this + 42);
    do
    {
      v10 = *(CMILCOMBase **)(v8 + *((_QWORD *)this + 18));
      CD2DResource::RemoveResourceNotifier(
        (CD2DResource *)(*((_QWORD *)v10 + 3) + 16LL),
        (CAtlasedRects *)((char *)this + 112));
      CMILCOMBase::InternalRelease(v10);
      v8 += 8LL;
      --v9;
    }
    while ( v9 );
  }
  *((_DWORD *)this + 42) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 144, 8u);
}
