/*
 * XREFs of AVrfInitializeVerifier @ 0x1800CDFDC
 * Callers:
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800CADEC (LdrpInitializeApplicationVerifierPackage.c)
 * Callees:
 *     LdrpFindLoadedDllByName @ 0x180015388 (LdrpFindLoadedDllByName.c)
 *     LdrProtectMrdata @ 0x18002F3A4 (LdrProtectMrdata.c)
 *     LdrpDereferenceModule @ 0x180032630 (LdrpDereferenceModule.c)
 *     RtlImageNtHeaderEx @ 0x180034B30 (RtlImageNtHeaderEx.c)
 *     DbgPrintEx @ 0x1800492F0 (DbgPrintEx.c)
 *     DbgPrint @ 0x180049950 (DbgPrint.c)
 *     RtlInitializeCriticalSectionEx @ 0x180055050 (RtlInitializeCriticalSectionEx.c)
 *     LdrpInitializeGraphRecurse @ 0x180071E9C (LdrpInitializeGraphRecurse.c)
 *     RtlQueryImageFileKeyOption @ 0x18007D1E0 (RtlQueryImageFileKeyOption.c)
 *     LdrGetProcedureAddressEx @ 0x1800812F0 (LdrGetProcedureAddressEx.c)
 *     AVrfpChainDuplicateVerificationLayers @ 0x1800CE680 (AVrfpChainDuplicateVerificationLayers.c)
 *     AVrfpEnableVerifierOptions @ 0x1800CEB4C (AVrfpEnableVerifierOptions.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800CED88 (AVrfpLoadAndInitializeProvider.c)
 *     AVrfpParseVerifierDllsString @ 0x1800CF0B4 (AVrfpParseVerifierDllsString.c)
 *     AVrfpSnapAlreadyLoadedDlls @ 0x1800CF394 (AVrfpSnapAlreadyLoadedDlls.c)
 *     AVrfpVerifierStopInitialize @ 0x1800CF614 (AVrfpVerifierStopInitialize.c)
 *     AvrfMiniLoadDll @ 0x1800CF6C8 (AvrfMiniLoadDll.c)
 */

__int64 __fastcall AVrfInitializeVerifier(char a1, int a2, __int64 a3, int a4, __int64 a5, _QWORD *a6)
{
  struct _PEB *v6; // r14
  __int64 result; // rax
  __int64 *i; // rbx
  char *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rbx
  int ProcedureAddress; // ebx
  char *v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  char *v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 *j; // rbx
  __int64 v24; // rax
  __int64 *v25; // rbx
  __int64 v26; // rdx
  _QWORD *v27; // rsi
  int v28; // eax
  __int64 v29; // [rsp+20h] [rbp-58h]
  int v30; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v31; // [rsp+38h] [rbp-40h] BYREF
  __int64 v32; // [rsp+40h] [rbp-38h] BYREF
  __int64 v33; // [rsp+48h] [rbp-30h] BYREF
  char v34; // [rsp+98h] [rbp+20h] BYREF

  v6 = NtCurrentPeb();
  v30 = 0;
  if ( !a4 )
  {
    v27 = a6;
    if ( !a6 )
      return 3221225485LL;
    *a6 = 0LL;
    if ( (v6->NtGlobalFlag & 0x100) != 0 || (v28 = 0, a1) )
      v28 = 294916;
    AVrfpVerifierFlags = v28;
    LOWORD(AVrfpVerifierDllsString[0]) = 0;
    if ( a3 )
    {
      RtlQueryImageFileKeyOption(a3, (__int64)L"VerifierFlags", 4, &v30, 4u, 0LL);
      LOBYTE(v28) = v30;
      if ( v30 )
      {
        AVrfpVerifierFlags = v30;
LABEL_39:
        if ( a3 )
        {
          if ( (v28 & 4) != 0 )
            RtlQueryImageFileKeyOption(a3, (__int64)L"HandleTraces", 4, &AVrfpHandleTraces, 4u, 0LL);
          RtlQueryImageFileKeyOption(a3, (__int64)L"VerifierDebug", 4, &AVrfpDebug, 4u, 0LL);
          RtlQueryImageFileKeyOption(a3, (__int64)L"VerifierDlls", 1, AVrfpVerifierDllsString, 0x200u, 0LL);
        }
        result = AvrfMiniLoadDll(a1, a2, a3, a5, (__int64)&AvrfpLoaderEntry);
        if ( (int)result >= 0 )
        {
          *v27 = &AvrfpLoaderEntry;
          return AVrfpEnableVerifierOptions();
        }
        return result;
      }
      LOBYTE(v28) = AVrfpVerifierFlags;
    }
    if ( a1 )
      AVrfpEnabledSystemWide = 1;
    goto LABEL_39;
  }
  if ( a4 == 1 )
  {
    qword_180144498 = (__int64)&AVrfpVerifierProvidersList;
    AVrfpVerifierProvidersList = (__int64)&AVrfpVerifierProvidersList;
    result = RtlInitializeCriticalSectionEx((__int64)&AVrfpVerifierLock, 0, 0);
    if ( (int)result < 0 )
      return result;
    DbgPrintEx(
      93,
      0,
      "AVRF: %ws: pid 0x%X: flags 0x%X: application verifier enabled\n",
      *(_QWORD *)(qword_180145210 + 96),
      LODWORD(NtCurrentTeb()->ClientId.UniqueProcess),
      AVrfpVerifierFlags);
    if ( (int)AVrfpParseVerifierDllsString() < 0 )
    {
      LODWORD(v29) = NtCurrentTeb()->ClientId.UniqueProcess;
      DbgPrintEx(
        93,
        0,
        "AVRF: %ws: pid 0x%X: application verifier will be disabled due to an initialization error.\n",
        *(_QWORD *)(qword_180145210 + 96),
        v29);
      NtCurrentPeb()->NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag & 0xFFFFFEFF;
      return 3221225473LL;
    }
    for ( i = (__int64 *)AVrfpVerifierProvidersList; i != &AVrfpVerifierProvidersList; i = (__int64 *)*i )
    {
      if ( !(unsigned __int8)AVrfpLoadAndInitializeProvider(i) )
        return 3221225794LL;
    }
    AVrfpChainDuplicateVerificationLayers();
    result = LdrpFindLoadedDllByName(VrfcoreDllString, 0LL, 0, (__int64)&v31, 0LL);
    if ( (int)result < 0 )
    {
      if ( (_DWORD)result != -1073741515 )
        return result;
      v15 = qword_180144130;
    }
    else
    {
      v15 = *(_QWORD *)(v31 + 48);
      LdrpDereferenceModule(v31, v12, v13, v14);
    }
    ProcedureAddress = LdrGetProcedureAddressEx(v15, &AvrfpAPILookupCallbackName, 0LL, (__int64)&v32, 1);
    LdrProtectMrdata(0, v17, v18, v19);
    if ( ProcedureAddress >= 0 )
    {
      v20 = (char *)__ROR8__(v32 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
      AvrfpAPILookupCallbackRoutine = (__int64)v20;
      AvrfpAPILookupCallbacksEnabled = 1;
    }
    AVrfpEnabled = 1;
    RtlGuardAllowSuppressedCalls = 1;
    LdrProtectMrdata(1, v20, v21, v22);
    AVrfpSnapAlreadyLoadedDlls();
    for ( j = (__int64 *)AVrfpVerifierProvidersList; j != &AVrfpVerifierProvidersList; j = (__int64 *)*j )
    {
      v24 = j[4];
      v34 = 0;
      result = LdrpInitializeGraphRecurse(*(_QWORD *)(v24 + 152), 0LL, &v34);
      if ( (int)result < 0 )
        return result;
    }
    if ( (AVrfpDebug & 8) != 0 )
    {
      DbgPrint("AVRF: -*- final list of providers -*- \n");
      v25 = (__int64 *)AVrfpVerifierProvidersList;
      while ( v25 != &AVrfpVerifierProvidersList )
      {
        v26 = v25[3];
        v25 = (__int64 *)*v25;
        DbgPrint("AVRF: provider %ws \n", v26);
      }
    }
    AVrfpVerifierStopInitialize();
    RtlImageNtHeaderEx(3, (unsigned __int64)v6->ImageBaseAddress, 0LL, &v33);
    if ( (unsigned __int16)(*(_WORD *)(v33 + 92) - 1) <= 2u )
      AVrfpAllowResourceConversion = *(_WORD *)(v33 + 72) < 6u ? AVrfpAllowResourceConversion : 0;
  }
  return 0LL;
}
