/*
 * XREFs of AVrfInitializeVerifier @ 0x1800D5F68
 * Callers:
 *     LdrpInitializeProcess @ 0x180091E34 (LdrpInitializeProcess.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800D2398 (LdrpInitializeApplicationVerifierPackage.c)
 * Callees:
 *     LdrProtectMrdata @ 0x1800190A8 (LdrProtectMrdata.c)
 *     LdrpFindLoadedDllByName @ 0x18001A3DC (LdrpFindLoadedDllByName.c)
 *     RtlInitializeCriticalSectionEx @ 0x18002B290 (RtlInitializeCriticalSectionEx.c)
 *     LdrpDereferenceModule @ 0x180032238 (LdrpDereferenceModule.c)
 *     RtlImageNtHeaderEx @ 0x1800348B0 (RtlImageNtHeaderEx.c)
 *     DbgPrintEx @ 0x18005BFC0 (DbgPrintEx.c)
 *     DbgPrint @ 0x18005C3E0 (DbgPrint.c)
 *     LdrpInitializeGraphRecurse @ 0x1800722B8 (LdrpInitializeGraphRecurse.c)
 *     LdrGetProcedureAddressEx @ 0x18007E3F0 (LdrGetProcedureAddressEx.c)
 *     RtlQueryImageFileKeyOption @ 0x18007F330 (RtlQueryImageFileKeyOption.c)
 *     AVrfpChainDuplicateVerificationLayers @ 0x1800D65D0 (AVrfpChainDuplicateVerificationLayers.c)
 *     AVrfpEnableVerifierOptions @ 0x1800D6A9C (AVrfpEnableVerifierOptions.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800D6CF8 (AVrfpLoadAndInitializeProvider.c)
 *     AVrfpParseVerifierDllsString @ 0x1800D7024 (AVrfpParseVerifierDllsString.c)
 *     AVrfpSnapAlreadyLoadedDlls @ 0x1800D72E0 (AVrfpSnapAlreadyLoadedDlls.c)
 *     AVrfpVerifierStopInitialize @ 0x1800D7560 (AVrfpVerifierStopInitialize.c)
 *     AvrfMiniLoadDll @ 0x1800D7614 (AvrfMiniLoadDll.c)
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
  __int64 *j; // rbx
  __int64 v18; // rax
  __int64 *v19; // rbx
  __int64 v20; // rdx
  _QWORD *v21; // rsi
  int v22; // eax
  __int64 v23; // [rsp+20h] [rbp-58h]
  int v24; // [rsp+30h] [rbp-48h] BYREF
  __int64 v25; // [rsp+38h] [rbp-40h] BYREF
  __int64 v26; // [rsp+40h] [rbp-38h] BYREF
  __int64 v27; // [rsp+48h] [rbp-30h] BYREF
  char v28; // [rsp+98h] [rbp+20h] BYREF

  v6 = NtCurrentPeb();
  v24 = 0;
  if ( !a4 )
  {
    v21 = a6;
    if ( !a6 )
      return 3221225485LL;
    *a6 = 0LL;
    if ( (v6->NtGlobalFlag & 0x100) != 0 || (v22 = 0, a1) )
      v22 = 294916;
    AVrfpVerifierFlags = v22;
    LOWORD(AVrfpVerifierDllsString[0]) = 0;
    if ( a3 )
    {
      RtlQueryImageFileKeyOption(a3, (__int64)L"VerifierFlags", 4, &v24, 4u, 0LL);
      LOBYTE(v22) = v24;
      if ( v24 )
      {
        AVrfpVerifierFlags = v24;
LABEL_38:
        if ( a3 )
        {
          if ( (v22 & 4) != 0 )
            RtlQueryImageFileKeyOption(a3, (__int64)L"HandleTraces", 4, &AVrfpHandleTraces, 4u, 0LL);
          RtlQueryImageFileKeyOption(a3, (__int64)L"VerifierDebug", 4, &AVrfpDebug, 4u, 0LL);
          RtlQueryImageFileKeyOption(a3, (__int64)L"VerifierDlls", 1, AVrfpVerifierDllsString, 0x200u, 0LL);
        }
        result = AvrfMiniLoadDll(a1, a2, a3, a5, (__int64)&AvrfpLoaderEntry);
        if ( (int)result >= 0 )
        {
          *v21 = &AvrfpLoaderEntry;
          return AVrfpEnableVerifierOptions();
        }
        return result;
      }
      LOBYTE(v22) = AVrfpVerifierFlags;
    }
    if ( a1 )
      AVrfpEnabledSystemWide = 1;
    goto LABEL_38;
  }
  if ( a4 == 1 )
  {
    qword_180151458 = (__int64)&AVrfpVerifierProvidersList;
    AVrfpVerifierProvidersList = (__int64)&AVrfpVerifierProvidersList;
    result = RtlInitializeCriticalSectionEx((__int64)&AVrfpVerifierLock, 0, 0);
    if ( (int)result < 0 )
      return result;
    DbgPrintEx(
      93,
      0,
      "AVRF: %ws: pid 0x%X: flags 0x%X: application verifier enabled\n",
      *(_QWORD *)(qword_1801523D0 + 96),
      LODWORD(NtCurrentTeb()->ClientId.UniqueProcess),
      AVrfpVerifierFlags);
    if ( (int)AVrfpParseVerifierDllsString() < 0 )
    {
      LODWORD(v23) = NtCurrentTeb()->ClientId.UniqueProcess;
      DbgPrintEx(
        93,
        0,
        "AVRF: %ws: pid 0x%X: application verifier will be disabled due to an initialization error.\n",
        *(_QWORD *)(qword_1801523D0 + 96),
        v23);
      NtCurrentPeb()->NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag & 0xFFFFFEFF;
      return 3221225473LL;
    }
    for ( i = (__int64 *)AVrfpVerifierProvidersList; i != &AVrfpVerifierProvidersList; i = (__int64 *)*i )
    {
      if ( !(unsigned __int8)AVrfpLoadAndInitializeProvider(i) )
        return 3221225794LL;
    }
    AVrfpChainDuplicateVerificationLayers();
    result = LdrpFindLoadedDllByName(VrfcoreDllString, 0LL, 0, (__int64)&v25, 0LL);
    if ( (int)result < 0 )
    {
      if ( (_DWORD)result != -1073741515 )
        return result;
      v15 = qword_180151490;
    }
    else
    {
      v15 = *(_QWORD *)(v25 + 48);
      LdrpDereferenceModule(v25, v12, v13, v14);
    }
    ProcedureAddress = LdrGetProcedureAddressEx(v15, &AvrfpAPILookupCallbackName, 0LL, (__int64)&v26, 1);
    LdrProtectMrdata(0);
    if ( ProcedureAddress >= 0 )
    {
      AvrfpAPILookupCallbackRoutine = __ROR8__(v26 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
      AvrfpAPILookupCallbacksEnabled = 1;
    }
    AVrfpEnabled = 1;
    RtlGuardAllowSuppressedCalls = 1;
    LdrProtectMrdata(1);
    AVrfpSnapAlreadyLoadedDlls();
    for ( j = (__int64 *)AVrfpVerifierProvidersList; j != &AVrfpVerifierProvidersList; j = (__int64 *)*j )
    {
      v18 = j[4];
      v28 = 0;
      result = LdrpInitializeGraphRecurse(*(_QWORD *)(v18 + 152), 0LL, &v28);
      if ( (int)result < 0 )
        return result;
    }
    if ( (AVrfpDebug & 8) != 0 )
    {
      DbgPrint("AVRF: -*- final list of providers -*- \n");
      v19 = (__int64 *)AVrfpVerifierProvidersList;
      while ( v19 != &AVrfpVerifierProvidersList )
      {
        v20 = v19[3];
        v19 = (__int64 *)*v19;
        DbgPrint("AVRF: provider %ws \n", v20);
      }
    }
    AVrfpVerifierStopInitialize();
    RtlImageNtHeaderEx(3, (unsigned __int64)v6->ImageBaseAddress, 0LL, &v27);
  }
  return 0LL;
}
