/*
 * XREFs of ??_GCHwDeviceBitmapColorSource@@EEAAPEAXI@Z @ 0x18002AFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??1CHwBitmapColorSource@@MEAA@XZ @ 0x1800322A8 (--1CHwBitmapColorSource@@MEAA@XZ.c)
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
