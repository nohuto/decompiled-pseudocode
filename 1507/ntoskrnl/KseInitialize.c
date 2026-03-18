/*
 * XREFs of KseInitialize @ 0x1407C04D4
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1407C116C (IoInitSystemPreDrivers.c)
 * Callees:
 *     KsepLogInfo @ 0x140153D70 (KsepLogInfo.c)
 *     KsepDebugPrint @ 0x14020C31C (KsepDebugPrint.c)
 *     KsepLogError @ 0x14020C584 (KsepLogError.c)
 *     EtwRegister @ 0x14054C680 (EtwRegister.c)
 *     KseShimDatabaseClose @ 0x1405770FC (KseShimDatabaseClose.c)
 *     KseShimDatabaseOpen @ 0x140578424 (KseShimDatabaseOpen.c)
 *     KseRegisterShim @ 0x1405B5384 (KseRegisterShim.c)
 *     KseDriverScopeInitialize @ 0x1407DC850 (KseDriverScopeInitialize.c)
 *     KseVersionLieInitialize @ 0x1407DC8BC (KseVersionLieInitialize.c)
 *     KsepEngineInitialize @ 0x1407DE5C8 (KsepEngineInitialize.c)
 *     KsepMatchInitMachineInfo @ 0x1407E1C9C (KsepMatchInitMachineInfo.c)
 *     KseShimDatabaseBootInitialize @ 0x1407E77F0 (KseShimDatabaseBootInitialize.c)
 *     KsepEngineUninitialize @ 0x1407FB240 (KsepEngineUninitialize.c)
 *     KseClearPCIDBitsInitialize @ 0x1407FB2C0 (KseClearPCIDBitsInitialize.c)
 */

__int64 __fastcall KseInitialize(__int64 a1, int a2)
{
  int matched; // ebx
  signed __int32 v5; // eax
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // rdx
  char v18; // al
  __int64 v19; // rcx
  char v20; // al
  int v21; // eax
  __int64 v22; // rdx
  char v23; // al
  __int64 v24; // rcx
  char v25; // al
  __int64 v26; // [rsp+50h] [rbp+18h] BYREF

  matched = 0;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v26 = 0LL;
      EtwRegister(&KernelShimEngineProvider, 0LL, 0LL, &KseEtwHandle);
      matched = KseShimDatabaseOpen(&v26, v10, v11, v12);
      if ( matched >= 0 && v26 )
      {
        KseShimDatabaseClose(v26, v13, v14, v15);
      }
      else
      {
        dword_140353C98 |= 0x80u;
        matched = -1073741637;
      }
      if ( matched >= 0 )
      {
        KseVersionLieInitialize();
        v16 = KseRegisterShim((__int64)&KseSkipDriverUnloadShim, 0LL, 0LL);
        if ( v16 < 0 )
        {
          v17 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140332304[2 * v17] = v16;
          v18 = KsepDebugFlag;
          KsepHistoryErrors[2 * v17] = 852115;
          if ( (v18 & 2) != 0 )
            KsepDebugPrint(12LL, "Built-in SkipDriverUnload shims: failed to register.\n");
          KsepLogError(12, "Built-in SkipDriverUnload shims: failed to register.\n");
        }
        KseClearPCIDBitsInitialize();
      }
    }
LABEL_33:
    v19 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
    v20 = KsepDebugFlag;
    HIDWORD(KsepHistoryMessages[v19]) = 0;
    LODWORD(KsepHistoryMessages[v19]) = 327907;
    if ( (v20 & 1) != 0 )
      KsepDebugPrint(1LL, "KSE: Initialized phase 0x%x\n", a2);
    KsepLogInfo(1LL, (__int64)"KSE: Initialized phase 0x%x\n", a2);
    if ( InitIsWinPEMode )
      KseEngine |= 1u;
    if ( matched >= 0 )
      return (unsigned int)matched;
    goto LABEL_38;
  }
  v5 = _InterlockedCompareExchange(&dword_140353C94, 1, 0);
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
        dword_140353C94 = 2;
        KseDriverScopeInitialize();
        goto LABEL_33;
      }
    }
  }
  else
  {
    v8 = dword_140353C98;
    if ( ViVerifierEnabled )
    {
      v8 = dword_140353C98 | 0x40;
      dword_140353C98 |= 0x40u;
    }
    if ( InitSafeBootMode )
    {
      v8 |= 0x100u;
      dword_140353C98 = v8;
    }
    v9 = *(_QWORD *)(a1 + 240);
    if ( !*(_QWORD *)(v9 + 64) || !*(_DWORD *)(v9 + 72) )
      dword_140353C98 = v8 | 0x80;
    matched = -1073741637;
  }
LABEL_38:
  dword_140353C94 = 0;
  KsepEngineUninitialize(&KseEngine);
  v21 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
  if ( matched == -1073741637 )
  {
    v22 = v21;
    v23 = KsepDebugFlag;
    dword_140332304[2 * v22] = -1073741637;
    KsepHistoryErrors[2 * v22] = 327935;
    if ( (v23 & 2) != 0 )
      KsepDebugPrint(
        1LL,
        "KSE: Engine not initialized (disabled explicitly, safe boot on, verifier on, WinPE mode or loader issue)\n");
    KsepLogError(
      1,
      "KSE: Engine not initialized (disabled explicitly, safe boot on, verifier on, WinPE mode or loader issue)\n");
  }
  else
  {
    v24 = v21;
    v25 = KsepDebugFlag;
    dword_140332304[2 * v24] = matched;
    KsepHistoryErrors[2 * v24] = 327939;
    if ( (v25 & 2) != 0 )
      KsepDebugPrint(1LL, "KSE: Initialization failed: 0x%x\n", matched);
    KsepLogError(1, "KSE: Initialization failed: 0x%x\n", matched);
  }
  return (unsigned int)matched;
}
