/*
 * XREFs of ??1CHwBitmapColorSource@@MEAA@XZ @ 0x1800830B8
 * Callers:
 *     ??_GCHwBitmapColorSource@@MEAAPEAXI@Z @ 0x180083120 (--_GCHwBitmapColorSource@@MEAAPEAXI@Z.c)
 *     ??_GCHwDeviceBitmapColorSource@@EEAAPEAXI@Z @ 0x1800A59C0 (--_GCHwDeviceBitmapColorSource@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwBitmapColorSource::~CHwBitmapColorSource(CHwBitmapColorSource *this)
{
  CMILPoolResource *v2; // rcx
  CMILRefCountBase *v3; // rcx
  __int64 v4; // rcx

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
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
