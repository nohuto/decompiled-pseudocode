/*
 * XREFs of ??_GCHwBitmapCache@@EEAAPEAXI@Z @ 0x18008B540
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CD3DResource@@MEAA@XZ @ 0x180027D28 (--1CD3DResource@@MEAA@XZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ??1FormatCacheEntry@CHwBitmapCache@@QEAA@XZ @ 0x18008BBB0 (--1FormatCacheEntry@CHwBitmapCache@@QEAA@XZ.c)
 */

CHwBitmapCache *__fastcall CHwBitmapCache::`scalar deleting destructor'(CHwBitmapCache *this, char a2)
{
  CMILRefCountBase *v4; // rcx
  CMILRefCountBase *v5; // rcx
  void (__fastcall *v6)(WPF::ProcessHeapImpl *, void *); // rsi

  *(_QWORD *)this = &CHwBitmapCache::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 3) = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
  *((_QWORD *)this + 16) = &CHwBitmapCache::`vftable';
  v4 = (CMILRefCountBase *)*((_QWORD *)this + 62);
  if ( v4 )
    CMILRefCountBase::Release(v4);
  v5 = (CMILRefCountBase *)*((_QWORD *)this + 63);
  if ( v5 )
    CMILRefCountBase::Release(v5);
  CHwBitmapCache::FormatCacheEntry::~FormatCacheEntry((CHwBitmapCache *)((char *)this + 160));
  CD3DResource::~CD3DResource(this);
  if ( (a2 & 1) != 0 )
  {
    v6 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v6 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      v6(WPF::g_pProcessHeap, this);
  }
  return this;
}
