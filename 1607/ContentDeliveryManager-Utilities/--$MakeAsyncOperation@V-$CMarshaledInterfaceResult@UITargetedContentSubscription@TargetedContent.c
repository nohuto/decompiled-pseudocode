/*
 * XREFs of ??$MakeAsyncOperation@V?$CMarshaledInterfaceResult@UITargetedContentSubscription@TargetedContent@ContentManagement@@@Internal@Windows@@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@VComTaskPoolHandler@23@V_lambda_770ef59a870ab0485516ac767e870dae_@@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAU?$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@@Foundation@1@W4TrustLevel@@AEBV_lambda_770ef59a870ab0485516ac767e870dae_@@@Z @ 0x180043AE4
 * Callers:
 *     ?GetSubscriptionAsync@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@PEAPEAU?$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@@78@@Z @ 0x180040D20 (-GetSubscriptionAsync@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@UEAAJPEAUHSTRIN.c)
 * Callees:
 *     ??$Make@V?$AsyncOperation@U?$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@@23@V?$CMarshaledInterfaceResult@UITargetedContentSubscription@TargetedContent@ContentManagement@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@VComTaskPoolHandler@23@AEBQEBGAEAW4TrustLevel@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$AsyncOperation@U?$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@@23@V?$CMarshaledInterfaceResult@UITargetedContentSubscription@TargetedContent@ContentManagement@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@@12@$$QEAVComTaskPoolHandler@Internal@Windows@@AEBQEBGAEAW4TrustLevel@@@Z @ 0x1800478CC (--$Make@V-$AsyncOperation@U-$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@Con.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058B88 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::MakeAsyncOperation<Windows::Internal::CMarshaledInterfaceResult<ContentManagement::TargetedContent::ITargetedContentSubscription>,ContentManagement::TargetedContent::TargetedContentSubscription *,Windows::Internal::ComTaskPoolHandler,_lambda_770ef59a870ab0485516ac767e870dae_>(
        __int64 a1,
        _QWORD *a2,
        int a3,
        __int64 a4)
{
  void (__fastcall ***v7)(_QWORD, __int64); // rax
  void (__fastcall ***v8)(_QWORD, __int64); // rdi
  __int64 v9; // r8
  signed __int32 v10; // edx
  int v11; // r9d
  void (__fastcall **v12)(_QWORD, __int64); // rcx
  unsigned int v13; // esi
  __int64 v14; // rbx
  __int64 v15; // rax
  _QWORD v17[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+58h] [rbp+10h] BYREF
  int v19; // [rsp+60h] [rbp+18h] BYREF

  v19 = a3;
  v17[1] = -2LL;
  v7 = (void (__fastcall ***)(_QWORD, __int64))operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    *v7 = (void (__fastcall **)(_QWORD, __int64))&Windows::Internal::COperationLambda0<Windows::Internal::CCallAsyncLambda<_lambda_770ef59a870ab0485516ac767e870dae_>,Windows::Internal::CMarshaledInterfaceResult<ContentManagement::TargetedContent::ITargetedContentSubscription>>::`vftable';
    v7[1] = *(void (__fastcall ***)(_QWORD, __int64))a4;
    v9 = *(_QWORD *)(a4 + 8);
    v7[2] = (void (__fastcall **)(_QWORD, __int64))v9;
    if ( v9 )
    {
      v10 = *(_DWORD *)(v9 + 44);
      v11 = 0x7FFFFFFF;
      if ( v10 != 0x7FFFFFFF )
      {
        do
        {
          if ( v10 == _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 44), v10 + 1, v10) )
            break;
          v10 = *(_DWORD *)(v9 + 44);
        }
        while ( v10 != 0x7FFFFFFF );
        if ( v10 != 0x7FFFFFFF )
          v11 = v10 + 1;
      }
      if ( (*(_BYTE *)(v9 + 64) & 4) == 0 && v11 == 2 )
        _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    }
    v7[3] = *(void (__fastcall ***)(_QWORD, __int64))(a4 + 16);
    *(_QWORD *)(a4 + 16) = 0LL;
    *((_BYTE *)v7 + 32) = 0;
    *(_BYTE *)(a4 + 24) = 1;
    v12 = *(void (__fastcall ***)(_QWORD, __int64))(a4 + 32);
    v7[5] = v12;
    if ( v12 )
      (*((void (__fastcall **)(void (__fastcall **)(_QWORD, __int64)))*v12 + 1))(v12);
  }
  else
  {
    v8 = 0LL;
  }
  v19 = 0;
  v17[0] = L"Windows.Foundation.IAsyncOperation`1<ContentManagement.TargetedContent.TargetedContentSubscription>";
  *a2 = 0LL;
  v13 = v8 == 0LL ? 0x8007000E : 0;
  if ( v8 )
  {
    ((void (__fastcall *)(__int64 *, __int64, _QWORD *, int *))Microsoft::WRL::Details::Make<Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<ContentManagement::TargetedContent::TargetedContentSubscription *>,Windows::Foundation::IAsyncOperationCompletedHandler<ContentManagement::TargetedContent::TargetedContentSubscription *>,Windows::Internal::CMarshaledInterfaceResult<ContentManagement::TargetedContent::ITargetedContentSubscription>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>,Windows::Internal::ComTaskPoolHandler,unsigned short const * const &,enum TrustLevel &>)(
      &v18,
      a1,
      v17,
      &v19);
    v14 = v18;
    v13 = v18 == 0 ? 0x8007000E : 0;
    if ( v18 )
    {
      *(_QWORD *)(v18 + 232) = v8;
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v14 + 8) + 104LL))(v14 + 8);
      v8 = 0LL;
      if ( (v13 & 0x80000000) != 0 )
      {
LABEL_22:
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)(v14 + 8) + 16LL))(v14 + 8);
        return v13;
      }
      v15 = v14;
      v14 = 0LL;
      v18 = 0LL;
      if ( v15 )
        v15 += 152LL;
      *a2 = v15;
    }
    if ( v8 )
      (**v8)(v8, 1LL);
    goto LABEL_22;
  }
  return v13;
}
