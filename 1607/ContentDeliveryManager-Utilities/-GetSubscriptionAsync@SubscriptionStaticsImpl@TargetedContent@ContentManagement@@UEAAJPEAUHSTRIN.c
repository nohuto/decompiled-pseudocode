/*
 * XREFs of ?GetSubscriptionAsync@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@PEAPEAU?$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@@78@@Z @ 0x180040D20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIInspectable@@VNil@Details@23@V5623@V5623@V5623@V5623@V5623@V5623@V5623@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180019350 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIInspectable@@VNil@Details@2.c)
 *     ??$MakeAsyncOperation@V?$CMarshaledInterfaceResult@UITargetedContentSubscription@TargetedContent@ContentManagement@@@Internal@Windows@@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@VComTaskPoolHandler@23@V_lambda_770ef59a870ab0485516ac767e870dae_@@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAU?$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@@Foundation@1@W4TrustLevel@@AEBV_lambda_770ef59a870ab0485516ac767e870dae_@@@Z @ 0x180043AE4 (--$MakeAsyncOperation@V-$CMarshaledInterfaceResult@UITargetedContentSubscription@TargetedContent.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ContentManagement::TargetedContent::SubscriptionStaticsImpl::GetSubscriptionAsync(
        __int64 a1,
        HSTRING a2,
        HSTRING a3,
        _QWORD *a4)
{
  HRESULT v7; // eax
  int v8; // esi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rdx
  signed __int32 v13; // r8d
  HSTRING newString[3]; // [rsp+20h] [rbp-60h] BYREF
  _DWORD v16[4]; // [rsp+38h] [rbp-48h] BYREF
  HSTRING v17; // [rsp+48h] [rbp-38h]
  char v18; // [rsp+50h] [rbp-30h]
  __int64 v19; // [rsp+58h] [rbp-28h] BYREF
  __int64 v20; // [rsp+60h] [rbp-20h]
  HSTRING string; // [rsp+68h] [rbp-18h]
  char v22; // [rsp+70h] [rbp-10h]
  HSTRING v23; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  newString[1] = (HSTRING)-2LL;
  *a4 = 0LL;
  v17 = 0LL;
  v18 = 0;
  v7 = WindowsDuplicateString(a2, newString);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x221,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentsubscription.cpp",
      (const char *)(unsigned int)v7);
  }
  else
  {
    v17 = newString[0];
    WindowsDeleteString(0LL);
    newString[2] = a3;
    if ( a3 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)a3 + 8LL))(a3);
    v10 = a1 - 32;
    v11 = v10;
    v12 = 0x7FFFFFFFLL;
    if ( v10 )
    {
      v13 = *(_DWORD *)(v10 + 44);
      if ( v13 == 0x7FFFFFFF )
        goto LABEL_10;
      do
      {
        if ( v13 == _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 44), v13 + 1, v13) )
          break;
        v13 = *(_DWORD *)(v10 + 44);
      }
      while ( v13 != 0x7FFFFFFF );
      if ( v13 == 0x7FFFFFFF )
LABEL_10:
        v9 = 0x7FFFFFFFLL;
      else
        v9 = (unsigned int)(v13 + 1);
      v11 = v10;
      if ( (*(_BYTE *)(v10 + 64) & 4) == 0 && (_DWORD)v9 == 2 )
      {
        _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
        v11 = v10;
      }
    }
    v19 = v10;
    v20 = v11;
    if ( v11 )
    {
      v9 = *(unsigned int *)(v11 + 44);
      if ( (_DWORD)v9 != 0x7FFFFFFF )
      {
        do
        {
          if ( (_DWORD)v9 == _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 44), v9 + 1, v9) )
            break;
          v9 = *(unsigned int *)(v11 + 44);
        }
        while ( (_DWORD)v9 != 0x7FFFFFFF );
        if ( (_DWORD)v9 != 0x7FFFFFFF )
          v12 = (unsigned int)(v9 + 1);
      }
      v11 = v10;
      if ( (*(_BYTE *)(v10 + 64) & 4) == 0 && (_DWORD)v12 == 2 )
      {
        _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
        v11 = v10;
      }
    }
    string = v17;
    v17 = 0LL;
    v22 = 0;
    v18 = 1;
    v23 = a3;
    if ( a3 )
      (*(void (__fastcall **)(HSTRING, __int64))(*(_QWORD *)a3 + 8LL))(a3, v12);
    v16[0] = 3;
    v16[1] = 130;
    v16[2] = 0;
    v8 = Windows::Internal::MakeAsyncOperation<Windows::Internal::CMarshaledInterfaceResult<ContentManagement::TargetedContent::ITargetedContentSubscription>,ContentManagement::TargetedContent::TargetedContentSubscription *,Windows::Internal::ComTaskPoolHandler,_lambda_770ef59a870ab0485516ac767e870dae_>(
           v16,
           a4,
           v9,
           &v19);
    if ( v23 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v23 + 16LL))(v23);
    if ( string )
      WindowsDeleteString(string);
    if ( v20 )
      Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,IInspectable,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(v20);
    if ( v8 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x240,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentsubscription.cpp",
        (const char *)(unsigned int)v8);
    if ( v11 )
      Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,IInspectable,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(v11);
    if ( a3 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)a3 + 16LL))(a3);
  }
  return (unsigned int)v8;
}
