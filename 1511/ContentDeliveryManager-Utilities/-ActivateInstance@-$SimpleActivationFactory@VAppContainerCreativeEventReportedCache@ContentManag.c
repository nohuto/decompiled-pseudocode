/*
 * XREFs of ?ActivateInstance@?$SimpleActivationFactory@VAppContainerCreativeEventReportedCache@ContentManagement@@$0A@@WRL@Microsoft@@UEAAJPEAPEAUIInspectable@@@Z @ 0x180007A40
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIContentManagementBroker@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180004350 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UIContentManag.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UICreativeEventReportedCache@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180006C80 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UICreat.c)
 *     ??0AppContainerCreativeEventReportedCache@ContentManagement@@QEAA@XZ @ 0x180007CEC (--0AppContainerCreativeEventReportedCache@ContentManagement@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180027FA8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::SimpleActivationFactory<ContentManagement::AppContainerCreativeEventReportedCache,0>::ActivateInstance(
        __int64 a1,
        _QWORD *a2)
{
  ContentManagement::AppContainerCreativeEventReportedCache *v3; // rax
  unsigned int Interface; // ebx
  volatile signed __int64 *v5; // rdi

  *a2 = 0LL;
  v3 = (ContentManagement::AppContainerCreativeEventReportedCache *)operator new(
                                                                      0x40uLL,
                                                                      (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
  {
    v5 = (volatile signed __int64 *)ContentManagement::AppContainerCreativeEventReportedCache::AppContainerCreativeEventReportedCache(v3);
    Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::ICreativeEventReportedCache,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
                  (__int64)v5,
                  &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                  a2);
    if ( v5 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::IContentManagementBroker,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return Interface;
}
