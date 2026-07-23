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

int __fastcall AVrfInitializeVerifier(char a1, int a2, void *a3, int a4, __int64 a5, _QWORD *a6)
{
  struct _PEB *v6; // r14
  int result; // eax
  __int64 *i; // rbx
  void *v12; // rbx
  NTSTATUS v13; // ebx
  __int64 *j; // rbx
  __int64 v15; // rax
  __int64 *v16; // rbx
  __int64 v17; // rdx
  _QWORD *v18; // rsi
  int v19; // eax
  ULONG Flags[2]; // [rsp+20h] [rbp-58h]
  int v21; // [rsp+30h] [rbp-48h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-40h] BYREF
  PVOID ProcedureAddress; // [rsp+40h] [rbp-38h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+48h] [rbp-30h] BYREF
  char v25; // [rsp+98h] [rbp+20h] BYREF

  v6 = NtCurrentPeb();
  v21 = 0;
  if ( !a4 )
  {
    v18 = a6;
    if ( !a6 )
      return -1073741811;
    *a6 = 0LL;
    if ( (v6->NtGlobalFlag & 0x100) != 0 || (v19 = 0, a1) )
      v19 = 294916;
    AVrfpVerifierFlags = v19;
    LOWORD(AVrfpVerifierDllsString[0]) = 0;
    if ( a3 )
    {
      RtlQueryImageFileKeyOption(a3, L"VerifierFlags", 4, (ULONG *)&v21, 4u, 0LL);
      LOBYTE(v19) = v21;
      if ( v21 )
      {
        AVrfpVerifierFlags = v21;
LABEL_39:
        if ( a3 )
        {
          if ( (v19 & 4) != 0 )
            RtlQueryImageFileKeyOption(a3, L"HandleTraces", 4, (ULONG *)&AVrfpHandleTraces, 4u, 0LL);
          RtlQueryImageFileKeyOption(a3, L"VerifierDebug", 4, (ULONG *)&AVrfpDebug, 4u, 0LL);
          RtlQueryImageFileKeyOption(a3, L"VerifierDlls", 1, AVrfpVerifierDllsString, 0x200u, 0LL);
        }
        result = AvrfMiniLoadDll(a1, a2, (_DWORD)a3, a5, (__int64)&AvrfpLoaderEntry);
        if ( result >= 0 )
        {
          *v18 = &AvrfpLoaderEntry;
          return AVrfpEnableVerifierOptions();
        }
        return result;
      }
      LOBYTE(v19) = AVrfpVerifierFlags;
    }
    if ( a1 )
      AVrfpEnabledSystemWide = 1;
    goto LABEL_39;
  }
  if ( a4 == 1 )
  {
    qword_180144498 = (__int64)&AVrfpVerifierProvidersList;
    AVrfpVerifierProvidersList = (__int64)&AVrfpVerifierProvidersList;
    result = RtlInitializeCriticalSectionEx(&AVrfpVerifierLock, 0, 0);
    if ( result < 0 )
      return result;
    DbgPrintEx(
      0x5Du,
      0,
      "AVRF: %ws: pid 0x%X: flags 0x%X: application verifier enabled\n",
      *(_QWORD *)(qword_180145210 + 96),
      LODWORD(NtCurrentTeb()->ClientId.UniqueProcess),
      AVrfpVerifierFlags);
    if ( (int)AVrfpParseVerifierDllsString() < 0 )
    {
      Flags[0] = (ULONG)NtCurrentTeb()->ClientId.UniqueProcess;
      DbgPrintEx(
        0x5Du,
        0,
        "AVRF: %ws: pid 0x%X: application verifier will be disabled due to an initialization error.\n",
        *(_QWORD *)(qword_180145210 + 96),
        *(_QWORD *)Flags);
      NtCurrentPeb()->NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag & 0xFFFFFEFF;
      return -1073741823;
    }
    for ( i = (__int64 *)AVrfpVerifierProvidersList; i != &AVrfpVerifierProvidersList; i = (__int64 *)*i )
    {
      if ( !(unsigned __int8)AVrfpLoadAndInitializeProvider(i) )
        return -1073741502;
    }
    AVrfpChainDuplicateVerificationLayers();
    result = LdrpFindLoadedDllByName((PUNICODE_STRING)&VrfcoreDllString, 0LL, 0, (__int64)&BaseAddress, 0LL);
    if ( result < 0 )
    {
      if ( result != -1073741515 )
        return result;
      v12 = (void *)qword_180144130;
    }
    else
    {
      v12 = (void *)*((_QWORD *)BaseAddress + 6);
      LdrpDereferenceModule((char *)BaseAddress);
    }
    v13 = LdrGetProcedureAddressEx(v12, (PANSI_STRING)&AvrfpAPILookupCallbackName, 0, &ProcedureAddress, 1u);
    LdrProtectMrdata(0);
    if ( v13 >= 0 )
    {
      AvrfpAPILookupCallbackRoutine = __ROR8__(
                                        (unsigned __int64)ProcedureAddress ^ (unsigned int)MEMORY[0x7FFE0330],
                                        (unsigned __int8)MEMORY[0x7FFE0330] & 0x3F);
      AvrfpAPILookupCallbacksEnabled = 1;
    }
    AVrfpEnabled = 1;
    RtlGuardAllowSuppressedCalls = 1;
    LdrProtectMrdata(1);
    AVrfpSnapAlreadyLoadedDlls();
    for ( j = (__int64 *)AVrfpVerifierProvidersList; j != &AVrfpVerifierProvidersList; j = (__int64 *)*j )
    {
      v15 = j[4];
      v25 = 0;
      result = LdrpInitializeGraphRecurse(*(_QWORD *)(v15 + 152), 0LL, &v25);
      if ( result < 0 )
        return result;
    }
    if ( (AVrfpDebug & 8) != 0 )
    {
      DbgPrint("AVRF: -*- final list of providers -*- \n");
      v16 = (__int64 *)AVrfpVerifierProvidersList;
      while ( v16 != &AVrfpVerifierProvidersList )
      {
        v17 = v16[3];
        v16 = (__int64 *)*v16;
        DbgPrint("AVRF: provider %ws \n", v17);
      }
    }
    AVrfpVerifierStopInitialize();
    RtlImageNtHeaderEx(3u, v6->ImageBaseAddress, 0LL, &OutHeaders);
    if ( (unsigned __int16)(OutHeaders->OptionalHeader.Subsystem - 1) <= 2u )
      AVrfpAllowResourceConversion = OutHeaders->OptionalHeader.MajorSubsystemVersion < 6u
                                   ? AVrfpAllowResourceConversion
                                   : 0;
  }
  return 0;
}
