/*
 * XREFs of KsepResolveApplicableShimsForDriver @ 0x14061E1F0
 * Callers:
 *     KsepGetShimsForDriver @ 0x1403B6FE4 (KsepGetShimsForDriver.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x1400028CC (KsepPoolFreePaged.c)
 *     KsepLogInfo @ 0x140002940 (KsepLogInfo.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KsepLoadShimProvider @ 0x1401CCE04 (KsepLoadShimProvider.c)
 *     KsepDebugPrint @ 0x1401CCFB8 (KsepDebugPrint.c)
 *     KsepLogError @ 0x1401CD220 (KsepLogError.c)
 *     KsepIsShimRegistered @ 0x140524D80 (KsepIsShimRegistered.c)
 *     KsepGetLoadedModulesList @ 0x140524EF8 (KsepGetLoadedModulesList.c)
 *     KsepResolveShimHooks @ 0x14061DCFC (KsepResolveShimHooks.c)
 */

__int64 __fastcall KsepResolveApplicableShimsForDriver(_QWORD *a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int LoadedModulesList; // esi
  int v4; // r15d
  int v5; // r13d
  __int64 v6; // r14
  __int64 v8; // rax
  __int64 v9; // r8
  signed __int8 v10; // cf
  __int64 v11; // rbp
  _QWORD *v12; // r15
  _QWORD *v13; // rbp
  __int64 v14; // r12
  int v15; // eax
  __int64 v16; // rbp
  _QWORD *v17; // r15
  struct _KTHREAD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rbp
  __int64 v22; // rbp
  __int64 *v23; // r15
  __int64 v24; // rax
  __int64 v25; // rcx
  char v26; // al
  __int64 v27; // rcx
  char v28; // al
  struct _KTHREAD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rbp
  __int64 v32; // rbp
  _QWORD *v33; // r15
  __int64 v34; // rcx
  char v35; // al
  __int64 v36; // rcx
  char v37; // al
  int v39; // [rsp+70h] [rbp+18h]
  int *v40; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  LoadedModulesList = 0;
  v40 = 0LL;
  v4 = 0;
  v5 = 0;
  v6 = a2;
  v39 = 0;
  --CurrentThread->KernelApcDisable;
  v8 = KeAbPreAcquire((ULONG_PTR)&qword_140305F40, 0LL, 0LL);
  v10 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140305F40, 0LL);
  v11 = v8;
  if ( v10 )
    ExfAcquirePushLockExclusiveEx(&qword_140305F40, v8, (ULONG_PTR)&qword_140305F40);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  if ( (_DWORD)v6 )
  {
    v12 = a1 + 9;
    v13 = a1;
    v14 = v6;
    do
    {
      if ( (unsigned int)KsepIsShimRegistered((__int64)&KseEngine, v13, v9, v13 + 9) == 1 )
      {
        v15 = *(_DWORD *)(*v12 + 24LL);
        if ( !v15 )
          v5 = 1;
        *(_DWORD *)(*v12 + 24LL) = v15 + 1;
      }
      else
      {
        *v12 = 0LL;
        v5 = 1;
        v39 = 1;
      }
      v13 += 10;
      v12 += 10;
      --v14;
    }
    while ( v14 );
    v4 = v39;
    LoadedModulesList = 0;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140305F40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140305F40);
  KeAbPostRelease((ULONG_PTR)&qword_140305F40);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( !v4 )
  {
LABEL_41:
    if ( v5 )
    {
      LoadedModulesList = KsepGetLoadedModulesList(&v40);
      if ( LoadedModulesList < 0 )
        goto LABEL_63;
      v29 = KeGetCurrentThread();
      --v29->KernelApcDisable;
      v30 = KeAbPreAcquire((ULONG_PTR)&qword_140305F40, 0LL, 0LL);
      v10 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140305F40, 0LL);
      v31 = v30;
      if ( v10 )
        ExfAcquirePushLockExclusiveEx(&qword_140305F40, v30, (ULONG_PTR)&qword_140305F40);
      if ( v31 )
        *(_BYTE *)(v31 + 26) |= 1u;
      v32 = 0LL;
      if ( (_DWORD)v6 )
      {
        v33 = a1 + 9;
        while ( 1 )
        {
          LoadedModulesList = KsepResolveShimHooks((__int64)v40, *(int **)(*(_QWORD *)(*v33 + 16LL) + 48LL));
          if ( LoadedModulesList < 0 )
            break;
          v32 = (unsigned int)(v32 + 1);
          v33 += 10;
          if ( (unsigned int)v32 >= (unsigned int)v6 )
            goto LABEL_51;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140305F40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_140305F40);
        KeAbPostRelease((ULONG_PTR)&qword_140305F40);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        v34 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
        v35 = KsepDebugFlag;
        dword_1402E1EA4[2 * v34] = LoadedModulesList;
        KsepHistoryErrors[2 * v34] = 459288;
        if ( (v35 & 2) != 0 )
          KsepDebugPrint(
            6LL,
            "KSE: Failed to resolve hooks for shim [0x%08X]. Status 0x%x.\n",
            LODWORD(a1[10 * v32]),
            LoadedModulesList);
        KsepLogError(
          6,
          "KSE: Failed to resolve hooks for shim [0x%08X]. Status 0x%x.\n",
          LODWORD(a1[10 * v32]),
          (unsigned int)LoadedModulesList);
      }
      else
      {
LABEL_51:
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140305F40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_140305F40);
        KeAbPostRelease((ULONG_PTR)&qword_140305F40);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      }
    }
    goto LABEL_59;
  }
  v16 = 0LL;
  if ( (_DWORD)v6 )
  {
    v17 = a1 + 9;
    while ( 1 )
    {
      if ( !*v17 )
      {
        LoadedModulesList = KsepLoadShimProvider((__int64)&a1[10 * v16]);
        if ( LoadedModulesList < 0 )
          break;
      }
      v16 = (unsigned int)(v16 + 1);
      v17 += 10;
      if ( (unsigned int)v16 >= (unsigned int)v6 )
        goto LABEL_22;
    }
    v25 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    v26 = KsepDebugFlag;
    dword_1402E1EA4[2 * v25] = LoadedModulesList;
    KsepHistoryErrors[2 * v25] = 459211;
    if ( (v26 & 2) != 0 )
      KsepDebugPrint(
        6LL,
        "KSE: Failed to load provider for shim [0x%08X]. Status: 0x%x\n",
        LODWORD(a1[10 * v16]),
        LoadedModulesList);
    KsepLogError(
      6,
      "KSE: Failed to load provider for shim [0x%08X]. Status: 0x%x\n",
      LODWORD(a1[10 * v16]),
      (unsigned int)LoadedModulesList);
LABEL_59:
    if ( LoadedModulesList >= 0 )
    {
      v36 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
      v37 = KsepDebugFlag;
      HIDWORD(KsepHistoryMessages[v36]) = 0;
      LODWORD(KsepHistoryMessages[v36]) = 459302;
      if ( (v37 & 1) != 0 )
        KsepDebugPrint(6LL, "KSE: Successfully resolved %d shim(s).\n", v6);
      KsepLogInfo(6LL, (__int64)"KSE: Successfully resolved %d shim(s).\n", v6);
    }
    goto LABEL_63;
  }
LABEL_22:
  v18 = KeGetCurrentThread();
  --v18->KernelApcDisable;
  v19 = KeAbPreAcquire((ULONG_PTR)&qword_140305F40, 0LL, 0LL);
  v10 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140305F40, 0LL);
  v21 = v19;
  if ( v10 )
    ExfAcquirePushLockExclusiveEx(&qword_140305F40, v19, (ULONG_PTR)&qword_140305F40);
  if ( v21 )
    *(_BYTE *)(v21 + 26) |= 1u;
  v22 = 0LL;
  if ( !(_DWORD)v6 )
  {
LABEL_30:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140305F40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140305F40);
    KeAbPostRelease((ULONG_PTR)&qword_140305F40);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    goto LABEL_41;
  }
  v23 = a1 + 9;
  while ( (unsigned int)KsepIsShimRegistered((__int64)&KseEngine, &a1[10 * v22], v20, &a1[10 * v22 + 9]) )
  {
    v24 = *v23;
    v22 = (unsigned int)(v22 + 1);
    v23 += 10;
    ++*(_DWORD *)(v24 + 24);
    if ( (unsigned int)v22 >= (unsigned int)v6 )
      goto LABEL_30;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140305F40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140305F40);
  KeAbPostRelease((ULONG_PTR)&qword_140305F40);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  LoadedModulesList = -1073740782;
  v27 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
  v28 = KsepDebugFlag;
  dword_1402E1EA4[2 * v27] = -1073740782;
  KsepHistoryErrors[2 * v27] = 459240;
  if ( (v28 & 2) != 0 )
    KsepDebugPrint(6LL, "KSE: The provider did not register shim [0x%08X] in time\n", LODWORD(a1[10 * v22]));
  KsepLogError(6, "KSE: The provider did not register shim [0x%08X] in time\n", LODWORD(a1[10 * v22]));
LABEL_63:
  KsepPoolFreePaged(v40);
  return (unsigned int)LoadedModulesList;
}
