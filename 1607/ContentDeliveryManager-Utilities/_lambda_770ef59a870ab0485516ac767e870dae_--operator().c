/*
 * XREFs of _lambda_770ef59a870ab0485516ac767e870dae_::operator() @ 0x180040F4C
 * Callers:
 *     ?Run@?$COperationLambda0@V?$CCallAsyncLambda@V_lambda_770ef59a870ab0485516ac767e870dae_@@@Internal@Windows@@V?$CMarshaledInterfaceResult@UITargetedContentSubscription@TargetedContent@ContentManagement@@@23@@Internal@Windows@@UEAAJW4AsyncStage@23@JAEAV?$CMarshaledInterfaceResult@UITargetedContentSubscription@TargetedContent@ContentManagement@@@23@@Z @ 0x1800446C0 (-Run@-$COperationLambda0@V-$CCallAsyncLambda@V_lambda_770ef59a870ab0485516ac767e870dae_@@@Intern.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180018734 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@SubscriptionImpl@TargetedContent@ContentManagement@@QEAAJPEAUHSTRING__@@PEAUISubscriptionManager@Internal@23@@Z @ 0x18003F8BC (-RuntimeClassInitialize@SubscriptionImpl@TargetedContent@ContentManagement@@QEAAJPEAUHSTRING__@@.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UITargetedContentItem@TargetedContent@ContentManagement@@U?$InterfaceList@UITargetedContentInteractionReporter@TargetedContent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180042180 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@U_ea_180042180.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UITargetedContentSubscription@TargetedContent@ContentManagement@@U?$InterfaceList@UISubscriptionPriv@Internal@TargetedContent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180042A00 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$Interfac_ea_180042A00.c)
 *     ??0SubscriptionImpl@TargetedContent@ContentManagement@@QEAA@XZ @ 0x180044440 (--0SubscriptionImpl@TargetedContent@ContentManagement@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058B88 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_770ef59a870ab0485516ac767e870dae_::operator()(__int64 a1, __int64 a2)
{
  int v4; // ebx
  struct ContentManagement::TargetedContent::Internal::ISubscriptionManager *v5; // rdi
  ContentManagement::TargetedContent::SubscriptionImpl *v6; // rax
  int Interface; // edi
  ContentManagement::TargetedContent::SubscriptionImpl *v8; // rbx
  int v9; // eax
  int v10; // eax
  const char *v11; // r9
  __int64 v12; // rdi
  __int64 v13; // rcx
  int AgileReference; // ebx
  struct ContentManagement::TargetedContent::Internal::ISubscriptionManager *v15; // rdx
  __int64 v16; // rcx
  void *v17; // rcx
  struct ContentManagement::TargetedContent::Internal::ISubscriptionManager *v18; // rcx
  struct ContentManagement::TargetedContent::Internal::ISubscriptionManager *v20; // [rsp+30h] [rbp-68h] BYREF
  struct ContentManagement::TargetedContent::Internal::ISubscriptionManager *v21; // [rsp+38h] [rbp-60h] BYREF
  __int64 v22; // [rsp+40h] [rbp-58h] BYREF
  void *v23[2]; // [rsp+48h] [rbp-50h] BYREF
  HSTRING v24; // [rsp+58h] [rbp-40h] BYREF
  HSTRING_HEADER v25; // [rsp+60h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v23[1] = (void *)-2LL;
  try
  {
    v20 = 0LL;
    if ( WindowsCreateStringReference(
           L"ContentManagement.TargetedContent.Internal.SubscriptionManager",
           0x3Eu,
           &v25,
           &v24) < 0 )
      RaiseException(0xC000000D, 1u, 0, 0LL);
    v20 = 0LL;
    v4 = RoActivateInstance(v24, &v21);
    if ( v4 >= 0 )
    {
      if ( *(_QWORD *)&GUID_d5343860_de91_4cae_b38a_84536a72847c.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
        && *(_QWORD *)GUID_d5343860_de91_4cae_b38a_84536a72847c.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
      {
        v20 = v21;
      }
      else
      {
        v4 = (**(__int64 (__fastcall ***)(struct ContentManagement::TargetedContent::Internal::ISubscriptionManager *, GUID *, struct ContentManagement::TargetedContent::Internal::ISubscriptionManager **))v21)(
               v21,
               &GUID_d5343860_de91_4cae_b38a_84536a72847c,
               &v20);
        (*(void (__fastcall **)(struct ContentManagement::TargetedContent::Internal::ISubscriptionManager *))(*(_QWORD *)v21 + 16LL))(v21);
      }
    }
    if ( v4 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x22E,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentsubscription.cpp",
        (const char *)(unsigned int)v4);
    v5 = v20;
    v23[0] = 0LL;
    v6 = (ContentManagement::TargetedContent::SubscriptionImpl *)operator new(
                                                                   0xB0uLL,
                                                                   (const struct std::nothrow_t *)&std::nothrow);
    if ( v6 )
    {
      v8 = (ContentManagement::TargetedContent::SubscriptionImpl *)ContentManagement::TargetedContent::SubscriptionImpl::SubscriptionImpl(v6);
      Interface = ContentManagement::TargetedContent::SubscriptionImpl::RuntimeClassInitialize(
                    v8,
                    *(HSTRING *)(a1 + 16),
                    v5);
      if ( Interface >= 0 )
        Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentSubscription,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::Internal::ISubscriptionPriv,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
                      v8,
                      &GUID_abd0aea7_14e7_4d83_80d4_ee8a293e8af9,
                      v23);
      if ( v8 )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentItem,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentInteractionReporter,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v8);
    }
    else
    {
      Interface = -2147024882;
    }
    if ( Interface < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x231,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentsubscription.cpp",
        (const char *)(unsigned int)Interface);
    v9 = (*(__int64 (__fastcall **)(struct ContentManagement::TargetedContent::Internal::ISubscriptionManager *, _QWORD, void *, _QWORD))(*(_QWORD *)v20 + 48LL))(
           v20,
           *(_QWORD *)(a1 + 16),
           v23[0],
           *(_QWORD *)(a1 + 32));
    if ( v9 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x235,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentsubscription.cpp",
        (const char *)(unsigned int)v9);
    v22 = 0LL;
    v10 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))v23[0])(
            v23[0],
            &GUID_ec918fa8_1974_4c19_ade0_6e1ae4148ac2,
            &v22);
    if ( v10 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x238,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentsubscription.cpp",
        (const char *)(unsigned int)v10);
    v12 = v22;
    v22 = 0LL;
    v13 = *(_QWORD *)(a2 + 16);
    if ( v13 )
    {
      *(_QWORD *)(a2 + 16) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    AgileReference = 0;
    if ( v12 )
    {
      v21 = 0LL;
      AgileReference = RoGetAgileReference(0LL, &GUID_ec918fa8_1974_4c19_ade0_6e1ae4148ac2, v12, &v21);
      if ( AgileReference < 0 )
      {
        v15 = v21;
      }
      else
      {
        v15 = *(struct ContentManagement::TargetedContent::Internal::ISubscriptionManager **)(a2 + 16);
        *(_QWORD *)(a2 + 16) = v21;
        v21 = v15;
      }
      if ( v15 )
      {
        v21 = 0LL;
        (*(void (__fastcall **)(struct ContentManagement::TargetedContent::Internal::ISubscriptionManager *))(*(_QWORD *)v15 + 16LL))(v15);
      }
    }
    if ( AgileReference < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x23A,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentsubscription.cpp",
        (const char *)(unsigned int)AgileReference);
    v16 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    v17 = v23[0];
    if ( v23[0] )
    {
      v23[0] = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v17 + 16LL))(v17);
    }
    v18 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(struct ContentManagement::TargetedContent::Internal::ISubscriptionManager *))(*(_QWORD *)v18 + 16LL))(v18);
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x23C,
                           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targeted"
                                    "contentsubscription.cpp",
                           v11);
  }
  return 0LL;
}
