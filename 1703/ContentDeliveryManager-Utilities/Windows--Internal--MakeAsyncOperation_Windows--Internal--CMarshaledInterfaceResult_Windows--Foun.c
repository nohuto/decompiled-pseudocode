/*
 * XREFs of Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_____ptr64____Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_____ptr64______ptr64_Windows::Internal::ComTaskPoolHandler__lambda_a20a6b3776b39db881c9be8aadce65fd___ @ 0x180049F78
 * Callers:
 *     ?GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAUHSTRING__@@0PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x180048960 (-GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Se.c)
 * Callees:
 *     ??$Make@V?$AsyncOperation@U?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@VComTaskPoolHandler@23@AEBQEB_WAEAW4TrustLevel@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$AsyncOperation@U?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@@12@$$QEAVComTaskPoolHandler@Internal@Windows@@AEBQEB_WAEAW4TrustLevel@@@Z @ 0x18004BC84 (--$Make@V-$AsyncOperation@U-$IAsyncOperation@PEAU-$IVectorView@PEAVTargetedContentTriggerInterna.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006F68C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_____ptr64____Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_____ptr64______ptr64_Windows::Internal::ComTaskPoolHandler__lambda_a20a6b3776b39db881c9be8aadce65fd___(
        __int64 a1,
        __int64 *a2,
        int a3,
        __int64 a4)
{
  void (__fastcall ***v7)(_QWORD, __int64); // rax
  void (__fastcall ***v8)(_QWORD, __int64); // rdi
  __int64 v9; // r8
  signed __int32 v10; // edx
  int v11; // r9d
  unsigned int v12; // esi
  __int64 v13; // rbx
  __int64 v14; // rax
  _QWORD v16[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+58h] [rbp+10h] BYREF
  int v18; // [rsp+60h] [rbp+18h] BYREF

  v18 = a3;
  v16[1] = -2LL;
  v7 = (void (__fastcall ***)(_QWORD, __int64))operator new(0x38uLL, (const struct std::nothrow_t *)&TLV::nothrow);
  v8 = v7;
  if ( v7 )
  {
    *v7 = (void (__fastcall **)(_QWORD, __int64))off_18007FFE8;
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
    v7[5] = *(void (__fastcall ***)(_QWORD, __int64))(a4 + 32);
    *(_QWORD *)(a4 + 32) = 0LL;
    *((_BYTE *)v7 + 48) = 0;
    *(_BYTE *)(a4 + 40) = 1;
  }
  else
  {
    v8 = 0LL;
  }
  v18 = 0;
  v16[0] = L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.Services.TargetedCo"
            "ntent.Internal.TargetedContentTriggerInternal>>";
  *a2 = 0LL;
  v12 = v8 == 0LL ? 0x8007000E : 0;
  if ( v8 )
  {
    ((void (__fastcall *)(__int64 *, __int64, _QWORD *, int *))Microsoft::WRL::Details::Make<Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *> *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *> *>,Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>,Windows::Internal::ComTaskPoolHandler,wchar_t const * const &,enum TrustLevel &>)(
      &v17,
      a1,
      v16,
      &v18);
    v13 = v17;
    v12 = v17 == 0 ? 0x8007000E : 0;
    if ( v17 )
    {
      *(_QWORD *)(v17 + 232) = v8;
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v13 + 8) + 104LL))(v13 + 8);
      v8 = 0LL;
      if ( (v12 & 0x80000000) != 0 )
      {
LABEL_19:
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)(v13 + 8) + 16LL))(v13 + 8);
        return v12;
      }
      v14 = v13;
      v13 = 0LL;
      v17 = 0LL;
      *a2 = (v14 + 152) & -(__int64)(v14 != 0);
    }
    if ( v8 )
      (**v8)(v8, 1LL);
    goto LABEL_19;
  }
  return v12;
}
