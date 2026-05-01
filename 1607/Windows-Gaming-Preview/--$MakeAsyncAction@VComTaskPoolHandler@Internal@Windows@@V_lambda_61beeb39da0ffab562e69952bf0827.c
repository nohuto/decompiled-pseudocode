/*
 * XREFs of ??$MakeAsyncAction@VComTaskPoolHandler@Internal@Windows@@V_lambda_61beeb39da0ffab562e69952bf082708_@@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAUIAsyncAction@Foundation@1@W4TrustLevel@@AEBV_lambda_61beeb39da0ffab562e69952bf082708_@@@Z @ 0x180016794
 * Callers:
 *     ?SetCategoryAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJW4GameListCategory@2345@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x180015770 (-SetCategoryAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJW4GameListCa.c)
 * Callees:
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$InterfaceList@VCFTMCrossProcServer@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000A450 (-AddRef@-$RuntimeClass@U-$InterfaceList@UIGameListEntry@GamesEnumeration@Preview@Ga_ea_18000A450.c)
 *     ??$Make@V?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@VComTaskPoolHandler@23@AEBQEBGAEAW4TrustLevel@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@@12@$$QEAVComTaskPoolHandler@Internal@Windows@@AEBQEBGAEAW4TrustLevel@@@Z @ 0x18001C834 (--$Make@V-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCN.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800267CC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::MakeAsyncAction<Windows::Internal::ComTaskPoolHandler,_lambda_61beeb39da0ffab562e69952bf082708_>(
        __int64 a1,
        _QWORD *a2,
        int a3,
        __int64 a4)
{
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  __int64 v9; // rcx
  unsigned int v10; // esi
  __int64 v11; // rbx
  __int64 v12; // rax
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF
  int v16; // [rsp+60h] [rbp+18h] BYREF

  v16 = a3;
  v14[1] = -2LL;
  v7 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    *v7 = &Windows::Internal::COperationLambda0<Windows::Internal::CCallAsyncLambda<_lambda_61beeb39da0ffab562e69952bf082708_>,Windows::Internal::CNoResult>::`vftable';
    v7[1] = *(_QWORD *)a4;
    v9 = *(_QWORD *)(a4 + 8);
    v7[2] = v9;
    if ( v9 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Microsoft::WRL::Details::InterfaceList<CFTMCrossProcServer,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::AddRef(v9);
    *((_DWORD *)v8 + 6) = *(_DWORD *)(a4 + 16);
  }
  else
  {
    v8 = 0LL;
  }
  v16 = 0;
  v14[0] = L"Windows.Foundation.IAsyncAction";
  *a2 = 0LL;
  v10 = v8 == 0LL ? 0x8007000E : 0;
  if ( v8 )
  {
    ((void (__fastcall *)(__int64 *, __int64, _QWORD *, int *))Microsoft::WRL::Details::Make<Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>,Windows::Internal::ComTaskPoolHandler,unsigned short const * const &,enum TrustLevel &>)(
      &v15,
      a1,
      v14,
      &v16);
    v11 = v15;
    v10 = v15 == 0 ? 0x8007000E : 0;
    if ( v15 )
    {
      *(_QWORD *)(v15 + 240) = v8;
      v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v11 + 8) + 104LL))(v11 + 8);
      v8 = 0LL;
      if ( (v10 & 0x80000000) != 0 )
      {
LABEL_14:
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)(v11 + 8) + 16LL))(v11 + 8);
        return v10;
      }
      v12 = v11;
      v11 = 0LL;
      v15 = 0LL;
      if ( v12 )
        v12 += 160LL;
      *a2 = v12;
    }
    if ( v8 )
      (*(void (__fastcall **)(_QWORD *, __int64))*v8)(v8, 1LL);
    goto LABEL_14;
  }
  return v10;
}
