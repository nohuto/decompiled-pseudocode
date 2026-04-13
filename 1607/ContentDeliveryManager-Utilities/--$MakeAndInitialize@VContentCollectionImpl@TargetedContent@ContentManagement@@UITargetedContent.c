/*
 * XREFs of ??$MakeAndInitialize@VContentCollectionImpl@TargetedContent@ContentManagement@@UITargetedContentCollection@23@PEAUHSTRING__@@PEAU5@PEAUIJsonObject@Json@Data@Windows@@PEAI@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UITargetedContentCollection@TargetedContent@ContentManagement@@@WRL@Microsoft@@@012@$$QEAPEAUHSTRING__@@1$$QEAPEAUIJsonObject@Json@Data@Windows@@$$QEAPEAI@Z @ 0x180043058
 * Callers:
 *     ?CollectionFromAppServiceResponse@TargetedContent@ContentManagement@@YA?AV?$ComPtr@UITargetedContentCollection@TargetedContent@ContentManagement@@@WRL@Microsoft@@PEAUIAppServiceResponse@AppService@ApplicationModel@Windows@@@Z @ 0x18003F438 (-CollectionFromAppServiceResponse@TargetedContent@ContentManagement@@YA-AV-$ComPtr@UITargetedCon.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180003A1C (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UITargetedContentItem@TargetedContent@ContentManagement@@U?$InterfaceList@UITargetedContentInteractionReporter@TargetedContent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180042180 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@U_ea_180042180.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UITargetedContentCollection@TargetedContent@ContentManagement@@U?$InterfaceList@UITargetedContentInteractionReporter@TargetedContent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180042290 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UITarge.c)
 *     ?RuntimeClassInitialize@ContentCollectionImpl@TargetedContent@ContentManagement@@QEAAJPEAUHSTRING__@@0PEAUIJsonObject@Json@Data@Windows@@PEAI@Z @ 0x180049634 (-RuntimeClassInitialize@ContentCollectionImpl@TargetedContent@ContentManagement@@QEAAJPEAUHSTRIN.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058B88 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ContentManagement::TargetedContent::ContentCollectionImpl,ContentManagement::TargetedContent::ITargetedContentCollection,HSTRING__ *,HSTRING__ *,Windows::Data::Json::IJsonObject *,unsigned int *>(
        __int64 *a1,
        HSTRING *a2,
        HSTRING *a3,
        struct Windows::Data::Json::IJsonObject **a4,
        unsigned int **a5)
{
  __int64 v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  int Interface; // esi
  _QWORD *v13; // rsi
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  _QWORD *v16; // rdx
  _QWORD *v18; // [rsp+30h] [rbp-38h]

  v9 = *a1;
  if ( v9 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  *a1 = 0LL;
  v10 = operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v10;
  v18 = v10;
  if ( v10 )
  {
    v13 = v10 + 1;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v10 + 1));
    v11[8] = 1LL;
    *v11 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::TargetedContent::ITargetedContentCollection,ContentManagement::TargetedContent::ITargetedContentInteractionReporter,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    *v13 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::TargetedContent::ITargetedContentCollection,ContentManagement::TargetedContent::ITargetedContentInteractionReporter,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::FtmBase'};
    v14 = v11 + 4;
    v11[4] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::TargetedContent::ITargetedContentCollection,ContentManagement::TargetedContent::ITargetedContentInteractionReporter,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentCollection,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentInteractionReporter,Microsoft::WRL::Details::Nil>>>,1,0>'};
    v15 = v11 + 5;
    v11[5] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::TargetedContent::ITargetedContentCollection,ContentManagement::TargetedContent::ITargetedContentInteractionReporter,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `ContentManagement::TargetedContent::ITargetedContentCollection'};
    v16 = v11 + 6;
    v11[6] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::TargetedContent::ITargetedContentCollection,ContentManagement::TargetedContent::ITargetedContentInteractionReporter,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentInteractionReporter,Microsoft::WRL::Details::Nil>,1,0>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
      v11 = v18;
    }
    *v11 = &ContentManagement::TargetedContent::ContentCollectionImpl::`vftable';
    *v13 = &ContentManagement::TargetedContent::ContentCollectionImpl::`vftable'{for `Microsoft::WRL::FtmBase'};
    *v14 = &ContentManagement::TargetedContent::ContentCollectionImpl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentCollection,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentInteractionReporter,Microsoft::WRL::Details::Nil>>>,1,0>'};
    *v15 = &ContentManagement::TargetedContent::ContentCollectionImpl::`vftable'{for `ContentManagement::TargetedContent::ITargetedContentCollection'};
    *v16 = &ContentManagement::TargetedContent::ContentCollectionImpl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentInteractionReporter,Microsoft::WRL::Details::Nil>,1,0>'};
    v11[9] = 0LL;
    v11[10] = 0LL;
    v11[11] = 0LL;
    v11[12] = 0LL;
    v11[13] = 0LL;
    Interface = ContentManagement::TargetedContent::ContentCollectionImpl::RuntimeClassInitialize(
                  (ContentManagement::TargetedContent::ContentCollectionImpl *)v11,
                  *a2,
                  *a3,
                  *a4,
                  *a5);
    if ( Interface >= 0 )
      Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentCollection,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentInteractionReporter,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
                    (__int64)v11,
                    &GUID_275f413e_8d08_4317_a941_9c1a0c28b88c,
                    a1);
    if ( v11 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentItem,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentInteractionReporter,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)Interface;
}
