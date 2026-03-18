/*
 * XREFs of ??_GCHwDeviceBitmapColorSource@@EEAAPEAXI@Z @ 0x1800141F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CHwBitmapColorSource@@MEAA@XZ @ 0x18001D198 (--1CHwBitmapColorSource@@MEAA@XZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
