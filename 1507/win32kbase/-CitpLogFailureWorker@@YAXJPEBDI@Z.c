/*
 * XREFs of ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C00E3144
 * Callers:
 *     ?CitpStart@@YAJXZ @ 0x1C0016F8C (-CitpStart@@YAJXZ.c)
 *     ?CitpPostUpdateUseInfoOpenKey@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAPEAX@Z @ 0x1C0018638 (-CitpPostUpdateUseInfoOpenKey@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAPEAX@Z.c)
 *     ?CitpProcessEnsureContext@@YAJPEAUtagPROCESSINFO@@@Z @ 0x1C0058020 (-CitpProcessEnsureContext@@YAJPEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z @ 0x1C0058100 (-CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpProgramIdCopy@@YAJPEAU_CIT_PROGRAM_ID@@PEBU1@@Z @ 0x1C0058A68 (-CitpProgramIdCopy@@YAJPEAU_CIT_PROGRAM_ID@@PEBU1@@Z.c)
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C007954C (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 *     ?CitpPostUpdateUseInfoGetUpdateKey@@YAJPEAI@Z @ 0x1C0079C24 (-CitpPostUpdateUseInfoGetUpdateKey@@YAJPEAI@Z.c)
 *     ?CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z @ 0x1C0079DA0 (-CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z.c)
 *     ?CitpEnsureKey@@YAJPEAPEAXPEBG_N@Z @ 0x1C007A054 (-CitpEnsureKey@@YAJPEAPEAXPEBG_N@Z.c)
 *     ?CitpShellTrackingGetEnabledForUser@@YAJPEAE@Z @ 0x1C007A224 (-CitpShellTrackingGetEnabledForUser@@YAJPEAE@Z.c)
 *     ?CitpInitialize@@YAJPEBG@Z @ 0x1C007A378 (-CitpInitialize@@YAJPEBG@Z.c)
 *     ?CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x1C007A47C (-CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z.c)
 *     ?CitpRegistryGetValue@@YAJPEAXPEBGPEAPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z @ 0x1C007A898 (-CitpRegistryGetValue@@YAJPEAXPEBGPEAPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z.c)
 *     ?CitpContextStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C007EC7C (-CitpContextStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpSavedDataCompress@@YAJPEBXIPEAPEAXPEAI@Z @ 0x1C00E3578 (-CitpSavedDataCompress@@YAJPEBXIPEAPEAXPEAI@Z.c)
 *     ?CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z @ 0x1C00E37A8 (-CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z.c)
 *     ?CitpSavedDataPrepare@@YAJPEBU_CIT_IMPACT_CONTEXT@@PEAPEAU_CIT_PERSISTED_HEADER@@PEAI@Z @ 0x1C00E3A18 (-CitpSavedDataPrepare@@YAJPEBU_CIT_IMPACT_CONTEXT@@PEAPEAU_CIT_PERSISTED_HEADER@@PEAI@Z.c)
 *     ?CitpSavedDataPrune@@YAJPEAX@Z @ 0x1C00E3FD8 (-CitpSavedDataPrune@@YAJPEAX@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0057B54 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0057B78 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 */

void __fastcall CitpLogFailureWorker(__int64 a1, const char *a2, int a3)
{
  const GUID *v3; // r9
  __int64 v4; // rax
  int v5; // [rsp+30h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  int *v7; // [rsp+60h] [rbp+17h]
  __int64 v8; // [rsp+68h] [rbp+1Fh]
  const char *v9; // [rsp+70h] [rbp+27h]
  int v10; // [rsp+78h] [rbp+2Fh]
  int v11; // [rsp+7Ch] [rbp+33h]
  int *v12; // [rsp+80h] [rbp+37h]
  __int64 v13; // [rsp+88h] [rbp+3Fh]
  int v14; // [rsp+C0h] [rbp+77h] BYREF

  v14 = a3;
  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000800uLL) )
  {
    v5 = (int)v3;
    v7 = &v5;
    v4 = -1LL;
    v8 = 4LL;
    do
      ++v4;
    while ( aWindowsCoreNtu[v4] );
    v9 = "windows\\core\\ntuser\\kernel\\cit\\citdata.cxx";
    v10 = v4 + 1;
    v12 = &v14;
    v11 = 0;
    v13 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C00EB65D, 0LL, v3, 5u, &pData);
  }
}
