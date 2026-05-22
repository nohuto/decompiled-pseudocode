/*
 * XREFs of ??_GSpatialInteractionDevice@@UEAAPEAXI@Z @ 0x1800642E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$RuntimeClass@U?$InterfaceList@UIRawInputProvider@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18004FA90 (--1-$RuntimeClass@U-$InterfaceList@UIRawInputProvider@@U-$InterfaceList@VFtmBase@WRL@Microsoft@@.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x180063F5C (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?TelemetrySpatialInteractionDeviceClosed_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXPEB_WPEAX@Z @ 0x18006414C (-TelemetrySpatialInteractionDeviceClosed_@SpatialInteractionTrace@SpatialInteractionDevices@@QEA.c)
 *     ?HIDClose@Internal@SpatialInteractionDevices@@YAXPEAUHID_HANDLE@2@@Z @ 0x180066108 (-HIDClose@Internal@SpatialInteractionDevices@@YAXPEAUHID_HANDLE@2@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

SpatialInteractionDevice *__fastcall SpatialInteractionDevice::`scalar deleting destructor'(
        SpatialInteractionDevice *this,
        char a2)
{
  __int64 v2; // rdi
  void *v5; // rsi
  const wchar_t *v6; // rdi
  struct SpatialInteractionDevices::HID_HANDLE *v7; // rdx
  _DWORD *v8; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v9; // rcx

  v2 = *((_QWORD *)this + 9);
  *(_QWORD *)this = &SpatialInteractionDevice::`vftable'{for `ISpatialInteractionDevice'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ISpatialInteractionDevice,Microsoft::WRL::CloakedIid<ISpatialInteractionDevicePrivate>,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<ISpatialInteractionDevicePrivate>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,1,0>'};
  *((_QWORD *)this + 2) = &SpatialInteractionDevice::`vftable'{for `ISpatialInteractionDevicePrivate'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ISpatialInteractionDevice,Microsoft::WRL::CloakedIid<ISpatialInteractionDevicePrivate>,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  if ( v2 )
  {
    v5 = *(void **)(v2 + 8);
    v6 = (const wchar_t *)(v2 + 16);
    if ( *((_QWORD *)v6 + 3) >= 8uLL )
      v6 = *(const wchar_t **)v6;
    v8 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
    if ( v8 && *v8 )
    {
      SpatialInteractionDevices::SpatialInteractionTrace::Instance();
      SpatialInteractionDevices::SpatialInteractionTrace::TelemetrySpatialInteractionDeviceClosed_(v9, v6, v5);
    }
    SpatialInteractionDevices::Internal::HIDClose(*((SpatialInteractionDevices::Internal **)this + 9), v7);
    *((_QWORD *)this + 9) = 0LL;
  }
  WindowsDeleteString(*((HSTRING *)this + 8));
  *((_QWORD *)this + 8) = 0LL;
  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IRawInputProvider,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::~RuntimeClass<Microsoft::WRL::Details::InterfaceList<IRawInputProvider,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>((__int64)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
