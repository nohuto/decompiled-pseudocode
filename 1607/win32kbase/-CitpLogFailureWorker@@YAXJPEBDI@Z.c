/*
 * XREFs of ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C00F6204
 * Callers:
 *     ?CitpInteractionSummaryAllocate@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C000EC34 (-CitpInteractionSummaryAllocate@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 *     ?CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z @ 0x1C000ED30 (-CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpProcessEnsureContext@@YAJPEAUtagPROCESSINFO@@@Z @ 0x1C00106DC (-CitpProcessEnsureContext@@YAJPEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C004F274 (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 *     ?CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C004F85C (-CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpPostUpdateUseInfoOpenKey@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAPEAX@Z @ 0x1C00506A4 (-CitpPostUpdateUseInfoOpenKey@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAPEAX@Z.c)
 *     ?CitpPostUpdateUseInfoGetUpdateKey@@YAJPEAI@Z @ 0x1C0050808 (-CitpPostUpdateUseInfoGetUpdateKey@@YAJPEAI@Z.c)
 *     ?CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z @ 0x1C0050A38 (-CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z.c)
 *     ?CitpEnsureKey@@YAJPEAPEAXPEBG_N@Z @ 0x1C0050CE8 (-CitpEnsureKey@@YAJPEAPEAXPEBG_N@Z.c)
 *     ?CitpShellTrackingGetEnabledForUser@@YAJPEAE@Z @ 0x1C0050EB8 (-CitpShellTrackingGetEnabledForUser@@YAJPEAE@Z.c)
 *     ?CitpInitialize@@YAJPEBG@Z @ 0x1C005100C (-CitpInitialize@@YAJPEBG@Z.c)
 *     ?CitpStart@@YAJXZ @ 0x1C005110C (-CitpStart@@YAJXZ.c)
 *     ?CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x1C0051240 (-CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z.c)
 *     ?CitpRegistryGetValue@@YAJPEAXPEBGPEAPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z @ 0x1C0051830 (-CitpRegistryGetValue@@YAJPEAXPEBGPEAPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z.c)
 *     ?CitpProgramIdCopy@@YAJPEAU_CIT_PROGRAM_ID@@PEBU1@@Z @ 0x1C00F6A5C (-CitpProgramIdCopy@@YAJPEAU_CIT_PROGRAM_ID@@PEBU1@@Z.c)
 *     ?CitpSavedDataCompress@@YAJPEBXIPEAPEAXPEAI@Z @ 0x1C00F6EC0 (-CitpSavedDataCompress@@YAJPEBXIPEAPEAXPEAI@Z.c)
 *     ?CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z @ 0x1C00F70F0 (-CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z.c)
 *     ?CitpSavedDataPrepare@@YAJPEBU_CIT_IMPACT_CONTEXT@@PEAPEAU_CIT_PERSISTED_HEADER@@PEAI@Z @ 0x1C00F7360 (-CitpSavedDataPrepare@@YAJPEBU_CIT_IMPACT_CONTEXT@@PEAPEAU_CIT_PERSISTED_HEADER@@PEAI@Z.c)
 *     ?CitpSavedDataPrune@@YAJPEAX@Z @ 0x1C00F78FC (-CitpSavedDataPrune@@YAJPEAX@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C000FA24 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00111F8 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C00E1E98 (_TlgCreateSz.c)
 */

void __fastcall CitpLogFailureWorker(__int64 a1, const char *a2, int a3)
{
  int v3; // r9d
  LPCGUID v4; // r9
  int v5; // [rsp+30h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  int *v7; // [rsp+60h] [rbp+17h]
  int v8; // [rsp+68h] [rbp+1Fh]
  int v9; // [rsp+6Ch] [rbp+23h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp+27h] BYREF
  int *v11; // [rsp+80h] [rbp+37h]
  int v12; // [rsp+88h] [rbp+3Fh]
  int v13; // [rsp+8Ch] [rbp+43h]
  int v14; // [rsp+C0h] [rbp+77h] BYREF

  v14 = a3;
  if ( dword_1C01187D0 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C01187D0, 0x200000000800uLL) )
    {
      v9 = 0;
      v5 = v3;
      v7 = &v5;
      v8 = 4;
      TlgCreateSz(&pDesc, "onecoreuap\\windows\\core\\ntuser\\kernel\\cit\\citdata.cxx");
      v13 = 0;
      v11 = &v14;
      v12 = (int)v4;
      TlgWrite((TraceLoggingHProvider)&dword_1C01187D0, &unk_1C0104308, 0LL, v4, 5u, &pData);
    }
  }
}
