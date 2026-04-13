/*
 * XREFs of ??$MakeAndInitialize@VNotificationsTargetedContentClient@ToastNotification@@UIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180040670
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VNotificationsTargetedContentClient@ToastNotification@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180040390 (-CreateInstance@-$SimpleClassFactory@VNotificationsTargetedContentClient@ToastNotification@@$0A@.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180003D14 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UITargetedContentActionInternal@Internal@TargetedContent@Services@Windows@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000FD10 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UITargetedCont.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UINotificationActivationCallback@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003FE40 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$Interfac_ea_18003FE40.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006F68C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ToastNotification::NotificationsTargetedContentClient,IUnknown>(
        void **a1)
{
  char *v2; // rax
  __int64 v3; // rbx
  _QWORD *v4; // rsi
  bool v5; // zf
  unsigned int Interface; // edi

  *a1 = 0LL;
  v2 = (char *)operator new(0x40uLL, (const struct std::nothrow_t *)&TLV::nothrow);
  v3 = (__int64)v2;
  if ( v2 )
  {
    v4 = v2 + 8;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v2 + 8));
    v5 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
    *(_QWORD *)v3 = &ToastNotification::NotificationsTargetedContentClient::`vftable'{for `IInspectable'};
    *v4 = &ToastNotification::NotificationsTargetedContentClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<INotificationActivationCallback,Microsoft::WRL::Details::Nil>>>,1,1>'};
    *(_QWORD *)(v3 + 32) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,INotificationActivationCallback,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IWeakReferenceSource'};
    *(_QWORD *)(v3 + 40) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,INotificationActivationCallback,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<INotificationActivationCallback,Microsoft::WRL::Details::Nil>,1,0>'};
    *(_QWORD *)(v3 + 56) = 1LL;
    if ( !v5 )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    *(_QWORD *)v3 = &ToastNotification::NotificationsTargetedContentClient::`vftable'{for `IInspectable'};
    *v4 = &ToastNotification::NotificationsTargetedContentClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<INotificationActivationCallback,Microsoft::WRL::Details::Nil>>>,1,1>'};
    *(_QWORD *)(v3 + 32) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,INotificationActivationCallback,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IWeakReferenceSource'};
    *(_QWORD *)(v3 + 40) = &ToastNotification::NotificationsTargetedContentClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<INotificationActivationCallback,Microsoft::WRL::Details::Nil>,1,0>'};
    Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<INotificationActivationCallback,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
                  v3,
                  (__int64)&GUID_00000000_0000_0000_c000_000000000046,
                  a1);
    if ( v3 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release((volatile signed __int64 *)v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return Interface;
}
