/*
 * XREFs of ??$MakeAndInitialize@VUpdatedEventArgsImpl@TargetedContent@ContentManagement@@V123@QEAVSubscriptionImpl@23@AEB_N@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VUpdatedEventArgsImpl@TargetedContent@ContentManagement@@@WRL@Microsoft@@@012@$$QEBQEAVSubscriptionImpl@TargetedContent@ContentManagement@@AEB_N@Z @ 0x1800439A4
 * Callers:
 *     ?NotifySubscribersIfNecessary@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAJXZ @ 0x180040A90 (-NotifySubscribersIfNecessary@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAJXZ.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180003A1C (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UITargetedContentItem@TargetedContent@ContentManagement@@U?$InterfaceList@UITargetedContentInteractionReporter@TargetedContent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180042180 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@U_ea_180042180.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UITargetedContentItem@TargetedContent@ContentManagement@@U?$InterfaceList@UITargetedContentInteractionReporter@TargetedContent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180042220 (-AddRef@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UITargetedConte.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@V?$DeferrableEventArgs@UITargetedContentUpdatedEventArgs@TargetedContent@ContentManagement@@VUpdatedEventArgsImpl@23@@WRL@Microsoft@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180042490 (-Release@-$RuntimeClass@U-$InterfaceList@V-$DeferrableEventArgs@UITargetedContentUpdatedEventArg.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058B88 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ContentManagement::TargetedContent::UpdatedEventArgsImpl,ContentManagement::TargetedContent::UpdatedEventArgsImpl,ContentManagement::TargetedContent::SubscriptionImpl * const,bool const &>(
        volatile signed __int64 **a1,
        __int64 *a2,
        char *a3)
{
  unsigned int v4; // edi
  volatile signed __int64 *v5; // rcx
  char *v8; // rbx
  bool v9; // zf
  __int64 v10; // rbp
  char v11; // r14
  volatile signed __int64 *v12; // rcx

  v4 = 0;
  v5 = *a1;
  if ( v5 )
  {
    *a1 = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::DeferrableEventArgs<ContentManagement::TargetedContent::ITargetedContentUpdatedEventArgs,ContentManagement::TargetedContent::UpdatedEventArgsImpl>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(v5);
  }
  *a1 = 0LL;
  v8 = (char *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    *(_QWORD *)v8 = &Microsoft::WRL::DeferrableEventArgs<ContentManagement::TargetedContent::ITargetedContentUpdatedEventArgs,ContentManagement::TargetedContent::UpdatedEventArgsImpl>::`vftable';
    InitializeSRWLock((PSRWLOCK)v8 + 1);
    v8[16] = 0;
    *((_DWORD *)v8 + 5) = 0;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v8 + 32));
    v9 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
    *(_QWORD *)v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::DeferrableEventArgs<ContentManagement::TargetedContent::ITargetedContentUpdatedEventArgs,ContentManagement::TargetedContent::UpdatedEventArgsImpl>,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    *((_QWORD *)v8 + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::DeferrableEventArgs<ContentManagement::TargetedContent::ITargetedContentUpdatedEventArgs,ContentManagement::TargetedContent::UpdatedEventArgsImpl>,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IWeakReferenceSource'};
    *((_QWORD *)v8 + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::DeferrableEventArgs<ContentManagement::TargetedContent::ITargetedContentUpdatedEventArgs,ContentManagement::TargetedContent::UpdatedEventArgsImpl>,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
    *((_QWORD *)v8 + 8) = 1LL;
    if ( !v9 )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    *(_QWORD *)v8 = &ContentManagement::TargetedContent::UpdatedEventArgsImpl::`vftable';
    *((_QWORD *)v8 + 3) = &ContentManagement::TargetedContent::UpdatedEventArgsImpl::`vftable'{for `IWeakReferenceSource'};
    *((_QWORD *)v8 + 4) = &ContentManagement::TargetedContent::UpdatedEventArgsImpl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
    *((_QWORD *)v8 + 9) = 0LL;
    v10 = *a2;
    v11 = *a3;
    if ( v10 )
    {
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentItem,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentInteractionReporter,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::AddRef(v10);
      v12 = (volatile signed __int64 *)*((_QWORD *)v8 + 9);
      *((_QWORD *)v8 + 9) = v10;
      if ( v12 )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentItem,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentInteractionReporter,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v12);
    }
    v8[80] = v11;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentItem,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentInteractionReporter,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::AddRef((__int64)v8);
    *a1 = (volatile signed __int64 *)v8;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::DeferrableEventArgs<ContentManagement::TargetedContent::ITargetedContentUpdatedEventArgs,ContentManagement::TargetedContent::UpdatedEventArgsImpl>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release((volatile signed __int64 *)v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
