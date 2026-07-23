/*
 * XREFs of KseInitialize @ 0x14079DAE8
 * Callers:
 *     IoInitSystemPreDrivers @ 0x14079EDEC (IoInitSystemPreDrivers.c)
 * Callees:
 *     KsepLogInfo @ 0x14010B3D0 (KsepLogInfo.c)
 *     KsepDebugPrint @ 0x1401DCA68 (KsepDebugPrint.c)
 *     KsepLogError @ 0x1401DCCD0 (KsepLogError.c)
 *     KseShimDatabaseClose @ 0x140513B88 (KseShimDatabaseClose.c)
 *     KseShimDatabaseOpen @ 0x140514914 (KseShimDatabaseOpen.c)
 *     EtwRegister @ 0x14054A484 (EtwRegister.c)
 *     KseRegisterShim @ 0x140570974 (KseRegisterShim.c)
 *     KseDriverScopeInitialize @ 0x1407B3080 (KseDriverScopeInitialize.c)
 *     KseVersionLieInitialize @ 0x1407B30EC (KseVersionLieInitialize.c)
 *     KsepEngineInitialize @ 0x1407B315C (KsepEngineInitialize.c)
 *     KsepMatchInitMachineInfo @ 0x1407B76CC (KsepMatchInitMachineInfo.c)
 *     KseShimDatabaseBootInitialize @ 0x1407BC020 (KseShimDatabaseBootInitialize.c)
 *     KsepEngineUninitialize @ 0x1407D0374 (KsepEngineUninitialize.c)
 *     KseClearPCIDBitsInitialize @ 0x1407D03F4 (KseClearPCIDBitsInitialize.c)
 */

__int64 __fastcall KseInitialize(__int64 a1, int a2)
{
  int matched; // ebx
  signed __int32 v5; // eax
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  char v12; // al
  __int64 v13; // rcx
  char v14; // al
  int v15; // eax
  __int64 v16; // rdx
  char v17; // al
  __int64 v18; // rcx
  char v19; // al
  __int64 v20; // [rsp+50h] [rbp+18h] BYREF

  matched = 0;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v20 = 0LL;
      EtwRegister(&KernelShimEngineProvider, 0LL, 0LL, &KseEtwHandle);
      matched = KseShimDatabaseOpen(&v20);
      if ( matched >= 0 && v20 )
      {
        KseShimDatabaseClose(v20);
      }
      else
      {
        dword_140328F38 |= 0x80u;
        matched = -1073741637;
      }
      if ( matched >= 0 )
      {
        KseVersionLieInitialize();
        v10 = KseRegisterShim((__int64)&KseSkipDriverUnloadShim, 0LL, 0LL);
        if ( v10 < 0 )
        {
          v11 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140307464[2 * v11] = v10;
          v12 = KsepDebugFlag;
          KsepHistoryErrors[2 * v11] = 852115;
          if ( (v12 & 2) != 0 )
            KsepDebugPrint(12LL, "Built-in SkipDriverUnload shims: failed to register.\n");
          KsepLogError(12, "Built-in SkipDriverUnload shims: failed to register.\n");
        }
        KseClearPCIDBitsInitialize();
      }
    }
LABEL_33:
    v13 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
    v14 = KsepDebugFlag;
    HIDWORD(KsepHistoryMessages[v13]) = 0;
    LODWORD(KsepHistoryMessages[v13]) = 327907;
    if ( (v14 & 1) != 0 )
      KsepDebugPrint(1LL, "KSE: Initialized phase 0x%x\n", a2);
    KsepLogInfo(1LL, (__int64)"KSE: Initialized phase 0x%x\n", a2);
    if ( InitIsWinPEMode )
      KseEngine |= 1u;
    if ( matched >= 0 )
      return (unsigned int)matched;
    goto LABEL_38;
  }
  v5 = _InterlockedCompareExchange(&dword_140328F34, 1, 0);
  if ( v5 == 2 )
    return 0LL;
  if ( v5 == 1 )
    return 259LL;
  if ( (int)KseShimDatabaseBootInitialize(
              *(void **)(*(_QWORD *)(a1 + 240) + 64LL),
              *(unsigned int *)(*(_QWORD *)(a1 + 240) + 72LL)) < 0 )
    return 3221225473LL;
  if ( !InitSafeBootMode && (v7 = *(_QWORD *)(a1 + 240), *(_QWORD *)(v7 + 64)) && *(_DWORD *)(v7 + 72) )
  {
    matched = KsepEngineInitialize(&KseEngine);
    if ( matched >= 0 )
    {
      matched = KsepMatchInitMachineInfo(a1);
      if ( matched >= 0 )
      {
        dword_140328F34 = 2;
        KseDriverScopeInitialize();
        goto LABEL_33;
      }
    }
  }
  else
  {
    v8 = dword_140328F38;
    if ( ViVerifierEnabled )
    {
      v8 = dword_140328F38 | 0x40;
      dword_140328F38 |= 0x40u;
    }
    if ( InitSafeBootMode )
    {
      v8 |= 0x100u;
      dword_140328F38 = v8;
    }
    v9 = *(_QWORD *)(a1 + 240);
    if ( !*(_QWORD *)(v9 + 64) || !*(_DWORD *)(v9 + 72) )
      dword_140328F38 = v8 | 0x80;
    matched = -1073741637;
  }
LABEL_38:
  dword_140328F34 = 0;
  KsepEngineUninitialize(&KseEngine);
  v15 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
  if ( matched == -1073741637 )
  {
    v16 = v15;
    v17 = KsepDebugFlag;
    dword_140307464[2 * v16] = -1073741637;
    KsepHistoryErrors[2 * v16] = 327935;
    if ( (v17 & 2) != 0 )
      KsepDebugPrint(
        1LL,
        "KSE: Engine not initialized (disabled explicitly, safe boot on, verifier on, WinPE mode or loader issue)\n");
    KsepLogError(
      1,
      "KSE: Engine not initialized (disabled explicitly, safe boot on, verifier on, WinPE mode or loader issue)\n");
  }
  else
  {
    v18 = v15;
    v19 = KsepDebugFlag;
    dword_140307464[2 * v18] = matched;
    KsepHistoryErrors[2 * v18] = 327939;
    if ( (v19 & 2) != 0 )
      KsepDebugPrint(1LL, "KSE: Initialization failed: 0x%x\n", matched);
    KsepLogError(1, "KSE: Initialization failed: 0x%x\n", matched);
  }
  return (unsigned int)matched;
}
