/*
 * XREFs of ??_GCHwBitmapCache@@EEAAPEAXI@Z @ 0x180018850
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD3DResource@@MEAA@XZ @ 0x180015DC4 (--1CD3DResource@@MEAA@XZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??1FormatCacheEntry@CHwBitmapCache@@QEAA@XZ @ 0x180051F84 (--1FormatCacheEntry@CHwBitmapCache@@QEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CHwBitmapCache *__fastcall CHwBitmapCache::`scalar deleting destructor'(CHwBitmapCache *this, char a2)
{
  CMILRefCountBase *v4; // rcx
  CMILRefCountBase *v5; // rcx

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
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CHwBitmapCache *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
