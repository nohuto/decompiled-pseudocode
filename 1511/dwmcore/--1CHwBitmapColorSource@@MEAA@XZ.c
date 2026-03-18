/*
 * XREFs of ??1CHwBitmapColorSource@@MEAA@XZ @ 0x1800322A8
 * Callers:
 *     ??_GCHwDeviceBitmapColorSource@@EEAAPEAXI@Z @ 0x18002AFA0 (--_GCHwDeviceBitmapColorSource@@EEAAPEAXI@Z.c)
 *     ??_GCHwBitmapColorSource@@MEAAPEAXI@Z @ 0x180032330 (--_GCHwBitmapColorSource@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180027E00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 */

void __fastcall CHwBitmapColorSource::~CHwBitmapColorSource(CHwBitmapColorSource *this)
{
  CMILPoolResource *v2; // rcx
  CMILRefCountBase *v3; // rcx
  __int64 v4; // rsi

  *(_QWORD *)this = &CHwBitmapColorSource::`vftable'{for `CHwTexturedColorSource'};
  *((_QWORD *)this + 13) = &CHwDeviceBitmapColorSource::`vftable'{for `IDeviceResource'};
  v2 = (CMILPoolResource *)*((_QWORD *)this + 20);
  if ( v2 )
    CMILPoolResource::Release(v2);
  v3 = (CMILRefCountBase *)*((_QWORD *)this + 33);
  if ( v3 )
    CMILRefCountBase::Release(v3);
  v4 = *((_QWORD *)this + 34);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 16LL))(*((_QWORD *)this + 34));
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
