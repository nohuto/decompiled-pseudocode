/*
 * XREFs of KsepResolveApplicableShimsForDriver @ 0x14069CE00
 * Callers:
 *     KsepGetShimsForDriver @ 0x140576F2C (KsepGetShimsForDriver.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KsepPoolFreePaged @ 0x140153D50 (KsepPoolFreePaged.c)
 *     KsepLogInfo @ 0x140153D70 (KsepLogInfo.c)
 *     KsepLoadShimProvider @ 0x14020C168 (KsepLoadShimProvider.c)
 *     KsepDebugPrint @ 0x14020C31C (KsepDebugPrint.c)
 *     KsepLogError @ 0x14020C584 (KsepLogError.c)
 *     KsepIsShimRegistered @ 0x1405B557C (KsepIsShimRegistered.c)
 *     KsepGetLoadedModulesList @ 0x1405B56F4 (KsepGetLoadedModulesList.c)
 *     KsepResolveShimHooks @ 0x14069C90C (KsepResolveShimHooks.c)
 */

__int64 __fastcall KsepResolveApplicableShimsForDriver(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r15
  _QWORD *v6; // rsi
  int LoadedModulesList; // ebp
  int v8; // r13d
  int v9; // r12d
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  _QWORD *v14; // rdi
  _QWORD *v15; // r14
  __int64 v16; // r12
  int v17; // eax
  __int64 v18; // r9
  struct _KTHREAD *v19; // rcx
  __int16 v20; // ax
  unsigned int v21; // edi
  _QWORD *v22; // r14
  struct _KTHREAD *v23; // rax
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  signed __int8 v27; // cf
  __int64 v28; // rdi
  unsigned int v29; // edi
  __int64 *v30; // r14
  __int64 v31; // rax
  struct _KTHREAD *v32; // rcx
  __int16 v33; // ax
  __int64 v34; // rcx
  char v35; // al
  struct _KTHREAD *v36; // rcx
  __int16 v37; // ax
  __int64 v38; // rcx
  __int64 v39; // r9
  struct _KTHREAD *v40; // rax
  __int64 v41; // rax
  __int64 v42; // r9
  __int64 v43; // rdi
  unsigned int v44; // edi
  _QWORD *v45; // r14
  struct _KTHREAD *v46; // rcx
  __int16 v47; // ax
  char v48; // al
  struct _KTHREAD *v50; // rcx
  __int16 v51; // ax
  __int64 v52; // rcx
  char v53; // al
  int *v54; // [rsp+20h] [rbp-48h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = a2;
  v6 = a1;
  LoadedModulesList = 0;
  v54 = 0LL;
  --CurrentThread->KernelApcDisable;
  v8 = 0;
  v9 = 0;
  v10 = KeAbPreAcquire((ULONG_PTR)&qword_140353CC0, 0LL, 0LL, a4);
  v13 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140353CC0, 0LL) )
    ExfAcquirePushLockExclusiveEx(&qword_140353CC0, v10, (ULONG_PTR)&qword_140353CC0, v12);
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  if ( (_DWORD)v5 )
  {
    v14 = v6 + 9;
    v15 = v6;
    v16 = v5;
    do
    {
      if ( (unsigned int)KsepIsShimRegistered((__int64)&KseEngine, v15, v11, v15 + 9) == 1 )
      {
        v17 = *(_DWORD *)(*v14 + 24LL);
        if ( !v17 )
          LoadedModulesList = 1;
        *(_DWORD *)(*v14 + 24LL) = v17 + 1;
      }
      else
      {
        *v14 = 0LL;
        v8 = 1;
        LoadedModulesList = 1;
      }
      v15 += 10;
      v14 += 10;
      --v16;
    }
    while ( v16 );
    v6 = a1;
    v9 = LoadedModulesList;
    LoadedModulesList = 0;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140353CC0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140353CC0);
  KeAbPostRelease((ULONG_PTR)&qword_140353CC0);
  v19 = KeGetCurrentThread();
  v20 = v19->KernelApcDisable + 1;
  v19->KernelApcDisable = v20;
  if ( !v20
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v19->ApcState.ApcListHead[0].Flink != &v19->152
    && !v19->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( !v8 )
  {
LABEL_52:
    if ( v9 )
    {
      LoadedModulesList = KsepGetLoadedModulesList(&v54);
      if ( LoadedModulesList < 0 )
        goto LABEL_72;
      v40 = KeGetCurrentThread();
      --v40->KernelApcDisable;
      v41 = KeAbPreAcquire((ULONG_PTR)&qword_140353CC0, 0LL, 0LL, v39);
      v27 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140353CC0, 0LL);
      v43 = v41;
      if ( v27 )
        ExfAcquirePushLockExclusiveEx(&qword_140353CC0, v41, (ULONG_PTR)&qword_140353CC0, v42);
      if ( v43 )
        *(_BYTE *)(v43 + 26) |= 1u;
      v44 = 0;
      if ( (_DWORD)v5 )
      {
        v45 = v6 + 9;
        while ( 1 )
        {
          LoadedModulesList = KsepResolveShimHooks((__int64)v54, *(int **)(*(_QWORD *)(*v45 + 16LL) + 48LL));
          if ( LoadedModulesList < 0 )
            break;
          ++v44;
          v45 += 10;
          if ( v44 >= (unsigned int)v5 )
            goto LABEL_62;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140353CC0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_140353CC0);
        KeAbPostRelease((ULONG_PTR)&qword_140353CC0);
        v50 = KeGetCurrentThread();
        v51 = v50->KernelApcDisable + 1;
        v50->KernelApcDisable = v51;
        if ( !v51
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v50->ApcState.ApcListHead[0].Flink != &v50->152
          && !v50->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        v52 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
        v53 = KsepDebugFlag;
        dword_140332304[2 * v52] = LoadedModulesList;
        KsepHistoryErrors[2 * v52] = 459288;
        if ( (v53 & 2) != 0 )
          KsepDebugPrint(
            6LL,
            "KSE: Failed to resolve hooks for shim [0x%08X]. Status 0x%x.\n",
            LODWORD(v6[10 * v44]),
            LoadedModulesList);
        KsepLogError(
          6,
          "KSE: Failed to resolve hooks for shim [0x%08X]. Status 0x%x.\n",
          LODWORD(v6[10 * v44]),
          (unsigned int)LoadedModulesList);
      }
      else
      {
LABEL_62:
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140353CC0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_140353CC0);
        KeAbPostRelease((ULONG_PTR)&qword_140353CC0);
        v46 = KeGetCurrentThread();
        v47 = v46->KernelApcDisable + 1;
        v46->KernelApcDisable = v47;
        if ( !v47
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v46->ApcState.ApcListHead[0].Flink != &v46->152
          && !v46->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
      }
    }
    goto LABEL_68;
  }
  v21 = 0;
  if ( (_DWORD)v5 )
  {
    v22 = v6 + 9;
    while ( 1 )
    {
      if ( !*v22 )
      {
        LoadedModulesList = KsepLoadShimProvider((__int64)&v6[10 * v21]);
        if ( LoadedModulesList < 0 )
          break;
      }
      ++v21;
      v22 += 10;
      if ( v21 >= (unsigned int)v5 )
        goto LABEL_26;
    }
    v34 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    v35 = KsepDebugFlag;
    dword_140332304[2 * v34] = LoadedModulesList;
    KsepHistoryErrors[2 * v34] = 459211;
    if ( (v35 & 2) != 0 )
      KsepDebugPrint(
        6LL,
        "KSE: Failed to load provider for shim [0x%08X]. Status: 0x%x\n",
        LODWORD(v6[10 * v21]),
        LoadedModulesList);
    KsepLogError(
      6,
      "KSE: Failed to load provider for shim [0x%08X]. Status: 0x%x\n",
      LODWORD(v6[10 * v21]),
      (unsigned int)LoadedModulesList);
LABEL_68:
    if ( LoadedModulesList >= 0 )
    {
      v48 = KsepDebugFlag;
      KsepHistoryMessages[((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F] = 459302LL;
      if ( (v48 & 1) != 0 )
        KsepDebugPrint(6LL, "KSE: Successfully resolved %d shim(s).\n", v5);
      KsepLogInfo(6LL, (__int64)"KSE: Successfully resolved %d shim(s).\n", v5);
    }
    goto LABEL_72;
  }
LABEL_26:
  v23 = KeGetCurrentThread();
  --v23->KernelApcDisable;
  v24 = KeAbPreAcquire((ULONG_PTR)&qword_140353CC0, 0LL, 0LL, v18);
  v27 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140353CC0, 0LL);
  v28 = v24;
  if ( v27 )
    ExfAcquirePushLockExclusiveEx(&qword_140353CC0, v24, (ULONG_PTR)&qword_140353CC0, v26);
  if ( v28 )
    *(_BYTE *)(v28 + 26) |= 1u;
  v29 = 0;
  if ( !(_DWORD)v5 )
  {
LABEL_34:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140353CC0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140353CC0);
    KeAbPostRelease((ULONG_PTR)&qword_140353CC0);
    v32 = KeGetCurrentThread();
    v33 = v32->KernelApcDisable + 1;
    v32->KernelApcDisable = v33;
    if ( !v33
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v32->ApcState.ApcListHead[0].Flink != &v32->152
      && !v32->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    goto LABEL_52;
  }
  v30 = v6 + 9;
  while ( (unsigned int)KsepIsShimRegistered((__int64)&KseEngine, &v6[10 * v29], v25, &v6[10 * v29 + 9]) )
  {
    v31 = *v30;
    ++v29;
    v30 += 10;
    ++*(_DWORD *)(v31 + 24);
    if ( v29 >= (unsigned int)v5 )
      goto LABEL_34;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140353CC0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140353CC0);
  KeAbPostRelease((ULONG_PTR)&qword_140353CC0);
  v36 = KeGetCurrentThread();
  v37 = v36->KernelApcDisable + 1;
  v36->KernelApcDisable = v37;
  if ( !v37
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v36->ApcState.ApcListHead[0].Flink != &v36->152
    && !v36->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  LoadedModulesList = -1073740782;
  v38 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
  dword_140332304[2 * v38] = -1073740782;
  KsepHistoryErrors[2 * v38] = 459240;
  if ( (KsepDebugFlag & 2) != 0 )
    KsepDebugPrint(6LL, "KSE: The provider did not register shim [0x%08X] in time\n", LODWORD(v6[10 * v29]));
  KsepLogError(6, "KSE: The provider did not register shim [0x%08X] in time\n", LODWORD(v6[10 * v29]));
LABEL_72:
  KsepPoolFreePaged(v54);
  return (unsigned int)LoadedModulesList;
}
