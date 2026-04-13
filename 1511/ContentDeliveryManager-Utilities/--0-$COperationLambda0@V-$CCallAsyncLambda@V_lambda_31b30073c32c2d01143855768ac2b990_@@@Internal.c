/*
 * XREFs of ??0?$COperationLambda0@V?$CCallAsyncLambda@V_lambda_31b30073c32c2d01143855768ac2b990_@@@Internal@Windows@@VCNoResult@23@@Internal@Windows@@QEAA@AEBV_lambda_31b30073c32c2d01143855768ac2b990_@@@Z @ 0x18001A528
 * Callers:
 *     ??$MakeAsyncAction@U?$AsyncCausalityOptions@$1?ProcessCreativeEventOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@VComTaskPoolHandler@Internal@Windows@@V_lambda_31b30073c32c2d01143855768ac2b990_@@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAUIAsyncAction@Foundation@1@W4TrustLevel@@AEBV_lambda_31b30073c32c2d01143855768ac2b990_@@@Z @ 0x180018B2C (--$MakeAsyncAction@U-$AsyncCausalityOptions@$1-ProcessCreativeEventOperationName@-A0x15bf3041@@3.c)
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 */

__int64 __fastcall Windows::Internal::COperationLambda0<Windows::Internal::CCallAsyncLambda<_lambda_31b30073c32c2d01143855768ac2b990_>,Windows::Internal::CNoResult>::COperationLambda0<Windows::Internal::CCallAsyncLambda<_lambda_31b30073c32c2d01143855768ac2b990_>,Windows::Internal::CNoResult>(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rdx
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  __int64 v7; // r14
  __int64 v8; // rsi

  *(_QWORD *)a1 = &Windows::Internal::COperationLambda0<Windows::Internal::CCallAsyncLambda<_lambda_31b30073c32c2d01143855768ac2b990_>,Windows::Internal::CNoResult>::`vftable';
  *(_QWORD *)(a1 + 8) = *(_QWORD *)a2;
  v4 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = v4;
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 80);
    while ( v5 >= 0 )
    {
      v6 = v5;
      v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 80), v5 + 1, v5);
      if ( v6 == v5 )
        goto LABEL_6;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v5 + 16));
  }
LABEL_6:
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_BYTE *)(a1 + 40) = 0;
  *(_BYTE *)(a2 + 32) = 1;
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_BYTE *)(a1 + 56) = 0;
  *(_BYTE *)(a2 + 48) = 1;
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 56);
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a1 + 72) = 0;
  *(_BYTE *)(a2 + 64) = 1;
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 72);
  *(_QWORD *)(a2 + 72) = 0LL;
  *(_BYTE *)(a1 + 88) = 0;
  *(_BYTE *)(a2 + 80) = 1;
  v7 = *(_QWORD *)(a2 + 88);
  *(_QWORD *)(a1 + 96) = v7;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  v8 = *(_QWORD *)(a2 + 96);
  *(_QWORD *)(a1 + 104) = v8;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  return a1;
}
