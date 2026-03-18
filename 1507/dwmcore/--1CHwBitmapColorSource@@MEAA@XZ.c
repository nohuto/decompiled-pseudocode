/*
 * XREFs of ??1CHwBitmapColorSource@@MEAA@XZ @ 0x18001D198
 * Callers:
 *     ??_GCHwDeviceBitmapColorSource@@EEAAPEAXI@Z @ 0x1800141F0 (--_GCHwDeviceBitmapColorSource@@EEAAPEAXI@Z.c)
 *     ??_GCHwBitmapColorSource@@MEAAPEAXI@Z @ 0x18001D220 (--_GCHwBitmapColorSource@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800160E0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
