/*
 * XREFs of AVrfInitializeVerifier @ 0x1800C4CAC
 * Callers:
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800BE14C (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x180007900 (RtlInitializeCriticalSectionEx.c)
 *     DbgPrintEx @ 0x18000F9B0 (DbgPrintEx.c)
 *     DbgPrint @ 0x180010000 (DbgPrint.c)
 *     RtlImageNtHeaderEx @ 0x180015E10 (RtlImageNtHeaderEx.c)
 *     LdrpDereferenceModule @ 0x18001651C (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByName @ 0x18002467C (LdrpFindLoadedDllByName.c)
 *     LdrProtectMrdata @ 0x18003611C (LdrProtectMrdata.c)
 *     LdrpInitializeGraphRecurse @ 0x180044D18 (LdrpInitializeGraphRecurse.c)
 *     RtlQueryImageFileKeyOption @ 0x180071510 (RtlQueryImageFileKeyOption.c)
 *     LdrGetProcedureAddressEx @ 0x18007A0E0 (LdrGetProcedureAddressEx.c)
 *     AVrfpChainDuplicateVerificationLayers @ 0x1800C5350 (AVrfpChainDuplicateVerificationLayers.c)
 *     AVrfpEnableVerifierOptions @ 0x1800C581C (AVrfpEnableVerifierOptions.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800C5A58 (AVrfpLoadAndInitializeProvider.c)
 *     AVrfpParseVerifierDllsString @ 0x1800C5D84 (AVrfpParseVerifierDllsString.c)
 *     AVrfpSnapAlreadyLoadedDlls @ 0x1800C6064 (AVrfpSnapAlreadyLoadedDlls.c)
 *     AVrfpVerifierStopInitialize @ 0x1800C62E4 (AVrfpVerifierStopInitialize.c)
 *     AvrfMiniLoadDll @ 0x1800C6398 (AvrfMiniLoadDll.c)
 */

__int64 __fastcall AVrfInitializeVerifier(char a1, int a2, __int64 a3, int a4, __int64 a5, _QWORD *a6)
{
  struct _PEB *v6; // r14
  __int64 result; // rax
  __int64 *i; // rbx
  unsigned __int64 v12; // rbx
  int ProcedureAddress; // ebx
  char *v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  char *v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 *j; // rbx
  __int64 v21; // rax
  __int64 *v22; // rbx
  __int64 v23; // rdx
  _QWORD *v24; // rsi
  int v25; // eax
  __int64 v26; // [rsp+20h] [rbp-58h]
  int v27; // [rsp+30h] [rbp-48h] BYREF
  __int64 v28; // [rsp+38h] [rbp-40h] BYREF
  __int64 v29; // [rsp+40h] [rbp-38h] BYREF
  __int64 v30; // [rsp+48h] [rbp-30h] BYREF
  char v31; // [rsp+98h] [rbp+20h] BYREF

  v6 = NtCurrentPeb();
  v27 = 0;
  if ( !a4 )
  {
    v24 = a6;
    if ( !a6 )
      return 3221225485LL;
    *a6 = 0LL;
    if ( (v6->NtGlobalFlag & 0x100) != 0 || (v25 = 0, a1) )
      v25 = 294916;
    AVrfpVerifierFlags = v25;
    LOWORD(AVrfpVerifierDllsString[0]) = 0;
    if ( a3 )
    {
      RtlQueryImageFileKeyOption(a3, (__int64)L"VerifierFlags", 4, &v27, 4u, 0LL);
      LOBYTE(v25) = v27;
      if ( v27 )
      {
        AVrfpVerifierFlags = v27;
LABEL_39:
        if ( a3 )
        {
          if ( (v25 & 4) != 0 )
            RtlQueryImageFileKeyOption(a3, (__int64)L"HandleTraces", 4, &AVrfpHandleTraces, 4u, 0LL);
          RtlQueryImageFileKeyOption(a3, (__int64)L"VerifierDebug", 4, &AVrfpDebug, 4u, 0LL);
          RtlQueryImageFileKeyOption(a3, (__int64)L"VerifierDlls", 1, AVrfpVerifierDllsString, 0x200u, 0LL);
        }
        result = AvrfMiniLoadDll(a1, a2, a3, a5, (__int64)&AvrfpLoaderEntry);
        if ( (int)result >= 0 )
        {
          *v24 = &AvrfpLoaderEntry;
          return AVrfpEnableVerifierOptions();
        }
        return result;
      }
      LOBYTE(v25) = AVrfpVerifierFlags;
    }
    if ( a1 )
      AVrfpEnabledSystemWide = 1;
    goto LABEL_39;
  }
  if ( a4 == 1 )
  {
    qword_180145458 = (__int64)&AVrfpVerifierProvidersList;
    AVrfpVerifierProvidersList = (__int64)&AVrfpVerifierProvidersList;
    result = RtlInitializeCriticalSectionEx((__int64)&AVrfpVerifierLock, 0, 0);
    if ( (int)result < 0 )
      return result;
    DbgPrintEx(
      93,
      0,
      "AVRF: %ws: pid 0x%X: flags 0x%X: application verifier enabled\n",
      *(_QWORD *)(qword_1801461D0 + 96),
      LODWORD(NtCurrentTeb()->ClientId.UniqueProcess),
      AVrfpVerifierFlags);
    if ( (int)AVrfpParseVerifierDllsString() < 0 )
    {
      LODWORD(v26) = NtCurrentTeb()->ClientId.UniqueProcess;
      DbgPrintEx(
        93,
        0,
        "AVRF: %ws: pid 0x%X: application verifier will be disabled due to an initialization error.\n",
        *(_QWORD *)(qword_1801461D0 + 96),
        v26);
      NtCurrentPeb()->NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag & 0xFFFFFEFF;
      return 3221225473LL;
    }
    for ( i = (__int64 *)AVrfpVerifierProvidersList; i != &AVrfpVerifierProvidersList; i = (__int64 *)*i )
    {
      if ( !(unsigned __int8)AVrfpLoadAndInitializeProvider(i) )
        return 3221225794LL;
    }
    AVrfpChainDuplicateVerificationLayers();
    result = LdrpFindLoadedDllByName(VrfcoreDllString, 0LL, 0, (__int64)&v28, 0LL);
    if ( (int)result < 0 )
    {
      if ( (_DWORD)result != -1073741515 )
        return result;
      v12 = qword_1801450F0;
    }
    else
    {
      v12 = *(_QWORD *)(v28 + 48);
      LdrpDereferenceModule(v28);
    }
    ProcedureAddress = LdrGetProcedureAddressEx(v12, &AvrfpAPILookupCallbackName, 0, &v29, 1);
    LdrProtectMrdata(0, v14, v15, v16);
    if ( ProcedureAddress >= 0 )
    {
      v17 = (char *)__ROR8__(v29 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
      AvrfpAPILookupCallbackRoutine = (__int64)v17;
      AvrfpAPILookupCallbacksEnabled = 1;
    }
    AVrfpEnabled = 1;
    RtlGuardAllowSuppressedCalls = 1;
    LdrProtectMrdata(1, v17, v18, v19);
    AVrfpSnapAlreadyLoadedDlls();
    for ( j = (__int64 *)AVrfpVerifierProvidersList; j != &AVrfpVerifierProvidersList; j = (__int64 *)*j )
    {
      v21 = j[4];
      v31 = 0;
      result = LdrpInitializeGraphRecurse(*(_QWORD *)(v21 + 152), 0LL, &v31);
      if ( (int)result < 0 )
        return result;
    }
    if ( (AVrfpDebug & 8) != 0 )
    {
      DbgPrint("AVRF: -*- final list of providers -*- \n");
      v22 = (__int64 *)AVrfpVerifierProvidersList;
      while ( v22 != &AVrfpVerifierProvidersList )
      {
        v23 = v22[3];
        v22 = (__int64 *)*v22;
        DbgPrint("AVRF: provider %ws \n", v23);
      }
    }
    AVrfpVerifierStopInitialize();
    RtlImageNtHeaderEx(3, (unsigned __int64)v6->ImageBaseAddress, 0LL, &v30);
    if ( (unsigned __int16)(*(_WORD *)(v30 + 92) - 1) <= 2u )
      AVrfpAllowResourceConversion = *(_WORD *)(v30 + 72) < 6u ? AVrfpAllowResourceConversion : 0;
  }
  return 0LL;
}
