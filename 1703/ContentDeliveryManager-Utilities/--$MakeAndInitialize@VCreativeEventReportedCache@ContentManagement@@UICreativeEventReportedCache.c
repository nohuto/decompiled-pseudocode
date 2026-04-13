/*
 * XREFs of ??$MakeAndInitialize@VCreativeEventReportedCache@ContentManagement@@UICreativeEventReportedCache@2@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUICreativeEventReportedCache@ContentManagement@@AEAPEBG@Z @ 0x180031E90
 * Callers:
 *     ?ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x180027E50 (-ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@.c)
 *     ?ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@@Z @ 0x180028480 (-ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEA.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CCC (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180003D14 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UITargetedContentActionInternal@Internal@TargetedContent@Services@Windows@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000FD10 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UITargetedCont.c)
 *     ?GetCreativeEventCacheRegPath@CreativeEventReportedCache@ContentManagement@@CAJPEBGPEAPEAG@Z @ 0x18002A030 (-GetCreativeEventCacheRegPath@CreativeEventReportedCache@ContentManagement@@CAJPEBGPEAPEAG@Z.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UICreativeEventReportedCache@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002A8F0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UICreat.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006F68C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ContentManagement::CreativeEventReportedCache,ContentManagement::ICreativeEventReportedCache,unsigned short const * &>(
        void **a1,
        const unsigned __int16 **a2)
{
  volatile signed __int64 *v4; // rbx
  char *v5; // rax
  __int64 v6; // rsi
  int Interface; // edi
  _QWORD *v8; // rbx
  bool v9; // zf
  void *v10; // rcx
  const unsigned __int16 *v11; // rbp
  int CreativeEventCacheRegPath; // eax
  __int64 v13; // rdx
  void *v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  v4 = 0LL;
  v5 = (char *)operator new(0x70uLL, (const struct std::nothrow_t *)&TLV::nothrow);
  v6 = (__int64)v5;
  if ( !v5 )
  {
    Interface = -2147024882;
    goto LABEL_17;
  }
  v8 = v5 + 8;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v5 + 8));
  v9 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
  *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::ICreativeEventReportedCache,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IInspectable'};
  *v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::ICreativeEventReportedCache,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<ContentManagement::ICreativeEventReportedCache,Microsoft::WRL::Details::Nil>>>,1,1>'};
  *(_QWORD *)(v6 + 32) = &ContentManagement::CreativeEventReportedCache::`vftable'{for `IWeakReferenceSource'};
  *(_QWORD *)(v6 + 40) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::ICreativeEventReportedCache,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ContentManagement::ICreativeEventReportedCache,Microsoft::WRL::Details::Nil>,1,0>'};
  *(_QWORD *)(v6 + 56) = 1LL;
  if ( !v9 )
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  *(_QWORD *)v6 = &ContentManagement::CreativeEventReportedCache::`vftable'{for `IInspectable'};
  *v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::ICreativeEventReportedCache,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<ContentManagement::ICreativeEventReportedCache,Microsoft::WRL::Details::Nil>>>,1,1>'};
  *(_QWORD *)(v6 + 32) = &ContentManagement::CreativeEventReportedCache::`vftable'{for `IWeakReferenceSource'};
  v4 = (volatile signed __int64 *)v6;
  *(_QWORD *)(v6 + 40) = &ContentManagement::CreativeEventReportedCache::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ContentManagement::ICreativeEventReportedCache,Microsoft::WRL::Details::Nil>,1,0>'};
  *(_QWORD *)(v6 + 64) = 0LL;
  *(_QWORD *)(v6 + 72) = 0LL;
  *(_QWORD *)(v6 + 80) = 0LL;
  *(_QWORD *)(v6 + 88) = 0LL;
  *(_QWORD *)(v6 + 96) = 0LL;
  *(_QWORD *)(v6 + 104) = 0LL;
  v10 = *(void **)(v6 + 64);
  v11 = *a2;
  if ( v10 )
  {
    CoTaskMemFree(v10);
    *(_QWORD *)(v6 + 64) = 0LL;
  }
  *(_QWORD *)(v6 + 72) = -1LL;
  *(_QWORD *)(v6 + 80) = -1LL;
  CreativeEventCacheRegPath = ContentManagement::CreativeEventReportedCache::GetCreativeEventCacheRegPath(
                                v11,
                                (unsigned __int16 **)(v6 + 64));
  Interface = CreativeEventCacheRegPath;
  if ( CreativeEventCacheRegPath < 0 )
  {
    v13 = 200LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v13,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)CreativeEventCacheRegPath);
    goto LABEL_15;
  }
  v14 = *(void **)(v6 + 88);
  if ( v14 )
  {
    CoTaskMemFree(v14);
    *(_QWORD *)(v6 + 88) = 0LL;
  }
  *(_QWORD *)(v6 + 96) = -1LL;
  *(_QWORD *)(v6 + 104) = -1LL;
  CreativeEventCacheRegPath = ContentManagement::CreativeEventReportedCache::GetCreativeEventCacheRegPath(
                                v11,
                                (unsigned __int16 **)(v6 + 88));
  Interface = CreativeEventCacheRegPath;
  if ( CreativeEventCacheRegPath < 0 )
  {
    v13 = 201LL;
    goto LABEL_9;
  }
  Interface = 0;
LABEL_15:
  if ( Interface >= 0 )
    Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::ICreativeEventReportedCache,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
                  v6,
                  (__int64)&GUID_d78a1df0_8b05_4341_bb0a_c4447a03a912,
                  a1);
LABEL_17:
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<Windows::Services::TargetedContent::Internal::ITargetedContentActionInternal,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v4);
  return (unsigned int)Interface;
}
