/*
 * XREFs of ??$MakeAsyncAction@U?$AsyncCausalityOptions@$1?ProcessCreativeEventOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@VComTaskPoolHandler@Internal@Windows@@V_lambda_31b30073c32c2d01143855768ac2b990_@@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAUIAsyncAction@Foundation@1@W4TrustLevel@@AEBV_lambda_31b30073c32c2d01143855768ac2b990_@@@Z @ 0x180018B2C
 * Callers:
 *     ?ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x18000E350 (-ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@.c)
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     ??0?$COperationLambda0@V?$CCallAsyncLambda@V_lambda_31b30073c32c2d01143855768ac2b990_@@@Internal@Windows@@VCNoResult@23@@Internal@Windows@@QEAA@AEBV_lambda_31b30073c32c2d01143855768ac2b990_@@@Z @ 0x18001A528 (--0-$COperationLambda0@V-$CCallAsyncLambda@V_lambda_31b30073c32c2d01143855768ac2b990_@@@Internal.c)
 *     ??$Make@V?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?ProcessCreativeEventOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@VComTaskPoolHandler@23@AEBQEBGAEAW4TrustLevel@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?ProcessCreativeEventOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@@12@$$QEAVComTaskPoolHandler@Internal@Windows@@AEBQEBGAEAW4TrustLevel@@@Z @ 0x18001F318 (--$Make@V-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCN.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180027FA8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::MakeAsyncAction<Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::ProcessCreativeEventOperationName,_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>,Windows::Internal::ComTaskPoolHandler,_lambda_31b30073c32c2d01143855768ac2b990_>(
        __int64 a1,
        _QWORD *a2,
        int a3,
        __int64 a4)
{
  void *v7; // rax
  void (__fastcall ***v8)(_QWORD, __int64); // r14
  unsigned int v9; // esi
  __int64 v10; // rbx
  __int64 v11; // rax
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF
  int v15; // [rsp+60h] [rbp+18h] BYREF

  v15 = a3;
  v13[1] = -2LL;
  v7 = operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
    v8 = (void (__fastcall ***)(_QWORD, __int64))Windows::Internal::COperationLambda0<Windows::Internal::CCallAsyncLambda<_lambda_31b30073c32c2d01143855768ac2b990_>,Windows::Internal::CNoResult>::COperationLambda0<Windows::Internal::CCallAsyncLambda<_lambda_31b30073c32c2d01143855768ac2b990_>,Windows::Internal::CNoResult>(
                                                   v7,
                                                   a4);
  else
    v8 = 0LL;
  v15 = 0;
  v13[0] = L"Windows.Foundation.IAsyncAction";
  *a2 = 0LL;
  v9 = v8 == 0LL ? 0x8007000E : 0;
  if ( !v8 )
    return v9;
  ((void (__fastcall *)(__int64 *, __int64, _QWORD *, int *))Microsoft::WRL::Details::Make<Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::ProcessCreativeEventOperationName,_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>,Windows::Internal::ComTaskPoolHandler,unsigned short const * const &,enum TrustLevel &>)(
    &v14,
    a1,
    v13,
    &v15);
  v10 = v14;
  v9 = v14 == 0 ? 0x8007000E : 0;
  if ( !v14 )
    goto LABEL_10;
  *(_QWORD *)(v14 + 208) = v8;
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v10 + 8) + 104LL))(v10 + 8);
  v8 = 0LL;
  if ( (v9 & 0x80000000) == 0 )
  {
    v11 = v10;
    v10 = 0LL;
    v14 = 0LL;
    if ( v11 )
      v11 += 136LL;
    *a2 = v11;
LABEL_10:
    if ( v8 )
      (**v8)(v8, 1LL);
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v10 + 8) + 16LL))(v10 + 8);
  return v9;
}
