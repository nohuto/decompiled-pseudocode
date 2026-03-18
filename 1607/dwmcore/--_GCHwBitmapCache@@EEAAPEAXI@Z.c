/*
 * XREFs of ??_GCHwBitmapCache@@EEAAPEAXI@Z @ 0x1800819C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??1CD3DResource@@MEAA@XZ @ 0x18009F0D8 (--1CD3DResource@@MEAA@XZ.c)
 *     ??1FormatCacheEntry@CHwBitmapCache@@QEAA@XZ @ 0x1800A2968 (--1FormatCacheEntry@CHwBitmapCache@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CHwBitmapCache *__fastcall CHwBitmapCache::`scalar deleting destructor'(CHwBitmapCache *this, char a2)
{
  CMILRefCountBase *v4; // rcx
  CMILRefCountBase *v5; // rcx

  *(_QWORD *)this = &CHwBitmapCache::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 3) = &CHwBitmapCache::`vftable'{for `IDeviceResource'};
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
