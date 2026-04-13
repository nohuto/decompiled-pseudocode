/*
 * XREFs of ??$CreateActivationFactory@VSubscriptionStaticsImpl@TargetedContent@ContentManagement@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180021500
 * Callers:
 *     <none>
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180003CA4 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180003D14 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentTriggerManagerStaticsInternal@Internal@TargetedContent@Services@Windows@@VNil@Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180020560 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentTriggerManag.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006F68C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateActivationFactory<ContentManagement::TargetedContent::SubscriptionStaticsImpl>(
        _BYTE *a1,
        __int64 a2,
        __int64 a3,
        void **a4)
{
  __int64 v4; // rdi
  char *v9; // rax
  __int64 v10; // rbx
  Microsoft::WRL::FtmBase *v11; // r14
  bool v12; // zf
  signed __int32 v13; // edx
  int v14; // edx
  unsigned int v15; // ebx
  signed __int32 v16; // eax

  v4 = 0LL;
  v9 = (char *)operator new(0x48uLL, (const struct std::nothrow_t *)&TLV::nothrow);
  v10 = (__int64)v9;
  if ( v9 )
  {
    v11 = (Microsoft::WRL::FtmBase *)(v9 + 8);
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v9 + 8));
    *(_QWORD *)(v10 + 56) = 0LL;
    v12 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
    *(_QWORD *)v10 = &Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,ContentManagement::TargetedContent::ITargetedContentSubscriptionStatics,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::`vftable';
    *(_QWORD *)v11 = &Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,ContentManagement::TargetedContent::ITargetedContentSubscriptionStatics,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::`vftable'{for `Microsoft::WRL::FtmBase'};
    *(_QWORD *)(v10 + 32) = &Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,ContentManagement::TargetedContent::ITargetedContentSubscriptionStatics,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentSubscriptionStatics,Microsoft::WRL::Details::Nil>,1,0>'};
    *(_DWORD *)(v10 + 44) = 1;
    *(_DWORD *)(v10 + 64) = 4;
    if ( !v12 )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    *(_QWORD *)v10 = &ContentManagement::TargetedContent::SubscriptionStaticsImpl::`vftable';
    *(_QWORD *)v11 = &ContentManagement::TargetedContent::SubscriptionStaticsImpl::`vftable'{for `Microsoft::WRL::FtmBase'};
    *(_QWORD *)(v10 + 32) = &ContentManagement::TargetedContent::SubscriptionStaticsImpl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentSubscriptionStatics,Microsoft::WRL::Details::Nil>,1,0>'};
    v13 = *(_DWORD *)(v10 + 44);
    if ( v13 == 0x7FFFFFFF )
      goto LABEL_9;
    do
    {
      if ( v13 == _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 44), v13 + 1, v13) )
        break;
      v13 = *(_DWORD *)(v10 + 44);
    }
    while ( v13 != 0x7FFFFFFF );
    if ( v13 == 0x7FFFFFFF )
LABEL_9:
      v14 = 0x7FFFFFFF;
    else
      v14 = v13 + 1;
    if ( (*(_BYTE *)(v10 + 64) & 4) == 0 && v14 == 2 )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    v4 = v10;
    Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerManagerStaticsInternal,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(v10);
    if ( *(_DWORD *)a3 == 53
      && *(_DWORD *)(a3 + 4) == *(_DWORD *)&GUID_00000035_0000_0000_c000_000000000046.Data2
      && *(_DWORD *)(a3 + 8) == *(_DWORD *)GUID_00000035_0000_0000_c000_000000000046.Data4
      && *(_DWORD *)(a3 + 12) == *(_DWORD *)&GUID_00000035_0000_0000_c000_000000000046.Data4[4] )
    {
      *a4 = (void *)v10;
    }
    else if ( (int)Microsoft::WRL::FtmBase::CanCastTo(v11, (const struct _GUID *)a3, a4) < 0 )
    {
      if ( *(_DWORD *)a3 != 1828647805
        || *(_DWORD *)(a3 + 4) != *(_DWORD *)&GUID_6cfef37d_8a37_4c33_a163_2b33a7ba0584.Data2
        || *(_DWORD *)(a3 + 8) != *(_DWORD *)GUID_6cfef37d_8a37_4c33_a163_2b33a7ba0584.Data4
        || *(_DWORD *)(a3 + 12) != *(_DWORD *)&GUID_6cfef37d_8a37_4c33_a163_2b33a7ba0584.Data4[4] )
      {
        v15 = -2147467262;
        goto LABEL_31;
      }
      *a4 = (char *)v11 + 24;
    }
    if ( (*a1 & 4) == 0 )
    {
      do
        v16 = *(_DWORD *)(v10 + 44);
      while ( v16 != 0x7FFFFFFF
           && v16 != _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 44), v16 + 1, v16) );
    }
    v4 = 0LL;
    *(_DWORD *)(v10 + 64) = *(_DWORD *)a1;
    *(_QWORD *)(v10 + 56) = a2;
    v15 = 0;
  }
  else
  {
    v15 = -2147024882;
  }
LABEL_31:
  if ( v4 )
    Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerManagerStaticsInternal,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(v4);
  return v15;
}
