/*
 * XREFs of ?ActivateInstance@?$SimpleActivationFactory@VAppInstallInfoRecordImpl@ContentManagement@@$0A@@WRL@Microsoft@@UEAAJPEAPEAUIInspectable@@@Z @ 0x180021C80
 * Callers:
 *     <none>
 * Callees:
 *     ??0AppInstallInfoRecordImpl@ContentManagement@@QEAA@XZ @ 0x180006B48 (--0AppInstallInfoRecordImpl@ContentManagement@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UITargetedContentActionInternal@Internal@TargetedContent@Services@Windows@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000FD10 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UITargetedCont.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIAppInstallInfoRecord@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180011950 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UIAppIn.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006F68C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::SimpleActivationFactory<ContentManagement::AppInstallInfoRecordImpl,0>::ActivateInstance(
        __int64 a1,
        void **a2)
{
  ContentManagement::AppInstallInfoRecordImpl *v3; // rax
  unsigned int Interface; // ebx
  ContentManagement::AppInstallInfoRecordImpl *v5; // rdi

  *a2 = 0LL;
  v3 = (ContentManagement::AppInstallInfoRecordImpl *)operator new(
                                                        0x60uLL,
                                                        (const struct std::nothrow_t *)&TLV::nothrow);
  if ( v3 )
  {
    v5 = ContentManagement::AppInstallInfoRecordImpl::AppInstallInfoRecordImpl(v3);
    Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::IAppInstallInfoRecord,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
                  (__int64)v5,
                  (__int64)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                  a2);
    if ( v5 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release((volatile signed __int64 *)v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return Interface;
}
