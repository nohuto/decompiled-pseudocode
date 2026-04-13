/*
 * XREFs of ??0AppContainerCreativeEventReportedCache@ContentManagement@@QEAA@XZ @ 0x18001AD28
 * Callers:
 *     ?ActivateInstance@?$SimpleActivationFactory@VAppContainerCreativeEventReportedCache@ContentManagement@@$0A@@WRL@Microsoft@@UEAAJPEAPEAUIInspectable@@@Z @ 0x18001A5E0 (-ActivateInstance@-$SimpleActivationFactory@VAppContainerCreativeEventReportedCache@ContentManag.c)
 *     ?GetEventCacheIfNeeded@ContentManagement@@YAJPEAPEAUICreativeEventReportedCache@1@@Z @ 0x18001F310 (-GetEventCacheIfNeeded@ContentManagement@@YAJPEAPEAUICreativeEventReportedCache@1@@Z.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180003A1C (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 */

ContentManagement::AppContainerCreativeEventReportedCache *__fastcall ContentManagement::AppContainerCreativeEventReportedCache::AppContainerCreativeEventReportedCache(
        ContentManagement::AppContainerCreativeEventReportedCache *this)
{
  _QWORD *v1; // rdi
  bool v3; // zf
  ContentManagement::AppContainerCreativeEventReportedCache *result; // rax

  v1 = (_QWORD *)((char *)this + 8);
  Microsoft::WRL::FtmBase::FtmBase((ContentManagement::AppContainerCreativeEventReportedCache *)((char *)this + 8));
  *((_QWORD *)this + 7) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::ICreativeEventReportedCache,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IInspectable'};
  v3 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
  *v1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::ICreativeEventReportedCache,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<ContentManagement::ICreativeEventReportedCache,Microsoft::WRL::Details::Nil>>>,1,1>'};
  *((_QWORD *)this + 4) = &ContentManagement::DesktopAppCreativeEventReportedCache::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::ICreativeEventReportedCache,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ContentManagement::ICreativeEventReportedCache,Microsoft::WRL::Details::Nil>,1,0>'};
  if ( !v3 )
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  *(_QWORD *)this = &ContentManagement::AppContainerCreativeEventReportedCache::`vftable'{for `IInspectable'};
  *v1 = &ContentManagement::AppContainerCreativeEventReportedCache::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<ContentManagement::ICreativeEventReportedCache,Microsoft::WRL::Details::Nil>>>,1,1>'};
  *((_QWORD *)this + 4) = &ContentManagement::AppContainerCreativeEventReportedCache::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 5) = &ContentManagement::AppContainerCreativeEventReportedCache::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ContentManagement::ICreativeEventReportedCache,Microsoft::WRL::Details::Nil>,1,0>'};
  result = this;
  *((_QWORD *)this + 11) = 7LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_WORD *)this + 32) = 0;
  return result;
}
