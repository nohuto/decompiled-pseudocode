/*
 * XREFs of ??_GCHwDeviceBitmapColorSource@@EEAAPEAXI@Z @ 0x1800A59C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??1CHwBitmapColorSource@@MEAA@XZ @ 0x1800830B8 (--1CHwBitmapColorSource@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CHwDeviceBitmapColorSource *__fastcall CHwDeviceBitmapColorSource::`scalar deleting destructor'(
        CHwDeviceBitmapColorSource *this,
        char a2)
{
  CMILRefCountBase *v4; // rcx

  *(_QWORD *)this = &CHwDeviceBitmapColorSource::`vftable'{for `CHwTexturedColorSource'};
  *((_QWORD *)this + 13) = &CHwDeviceBitmapColorSource::`vftable'{for `IDeviceResource'};
  v4 = (CMILRefCountBase *)*((_QWORD *)this + 42);
  if ( v4 )
    CMILRefCountBase::Release(v4);
  CHwBitmapColorSource::~CHwBitmapColorSource(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CHwDeviceBitmapColorSource *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
