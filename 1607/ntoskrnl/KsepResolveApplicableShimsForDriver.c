/*
 * XREFs of KsepResolveApplicableShimsForDriver @ 0x14065354C
 * Callers:
 *     KsepGetShimsForDriver @ 0x1405139C0 (KsepGetShimsForDriver.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     KsepPoolFreePaged @ 0x14010B35C (KsepPoolFreePaged.c)
 *     KsepLogInfo @ 0x14010B3D0 (KsepLogInfo.c)
 *     KsepLoadShimProvider @ 0x1401DC8B4 (KsepLoadShimProvider.c)
 *     KsepDebugPrint @ 0x1401DCA68 (KsepDebugPrint.c)
 *     KsepLogError @ 0x1401DCCD0 (KsepLogError.c)
 *     KsepIsShimRegistered @ 0x140570B4C (KsepIsShimRegistered.c)
 *     KsepGetLoadedModulesList @ 0x140570CC4 (KsepGetLoadedModulesList.c)
 *     KsepResolveShimHooks @ 0x140653058 (KsepResolveShimHooks.c)
 */

__int64 __fastcall KsepResolveApplicableShimsForDriver(_QWORD *a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int LoadedModulesList; // esi
  int v4; // r15d
  int v5; // r13d
  __int64 v6; // r14
  _BYTE *v8; // rax
  __int64 v9; // r8
  signed __int8 v10; // cf
  _BYTE *v11; // rbp
  _QWORD *v12; // r15
  _QWORD *v13; // rbp
  __int64 v14; // r12
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbp
  _QWORD *v20; // r15
  struct _KTHREAD *v21; // rax
  _BYTE *v22; // rax
  __int64 v23; // r8
  _BYTE *v24; // rbp
  __int64 v25; // rbp
  __int64 *v26; // r15
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  char v32; // al
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rcx
  char v37; // al
  struct _KTHREAD *v38; // rax
  _BYTE *v39; // rax
  _BYTE *v40; // rbp
  __int64 v41; // rbp
  _QWORD *v42; // r15
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rcx
  char v50; // al
  __int64 v51; // rcx
  char v52; // al
  int v54; // [rsp+70h] [rbp+18h]
  int *v55; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  LoadedModulesList = 0;
  v55 = 0LL;
  v4 = 0;
  v5 = 0;
  v6 = a2;
  v54 = 0;
  --CurrentThread->KernelApcDisable;
  v8 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_140328F60, 0LL, 0);
  v10 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140328F60, 0LL);
  v11 = v8;
  if ( v10 )
    ExfAcquirePushLockExclusiveEx(&qword_140328F60, v8, (ULONG_PTR)&qword_140328F60);
  if ( v11 )
    v11[26] |= 1u;
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
        v54 = 1;
      }
      v13 += 10;
      v12 += 10;
      --v14;
    }
    while ( v14 );
    v4 = v54;
    LoadedModulesList = 0;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140328F60, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140328F60);
  KeAbPostRelease((ULONG_PTR)&qword_140328F60);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v16, v17, v18);
  if ( !v4 )
  {
LABEL_41:
    if ( v5 )
    {
      LoadedModulesList = KsepGetLoadedModulesList(&v55);
      if ( LoadedModulesList < 0 )
        goto LABEL_63;
      v38 = KeGetCurrentThread();
      --v38->KernelApcDisable;
      v39 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_140328F60, 0LL, 0);
      v10 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140328F60, 0LL);
      v40 = v39;
      if ( v10 )
        ExfAcquirePushLockExclusiveEx(&qword_140328F60, v39, (ULONG_PTR)&qword_140328F60);
      if ( v40 )
        v40[26] |= 1u;
      v41 = 0LL;
      if ( (_DWORD)v6 )
      {
        v42 = a1 + 9;
        while ( 1 )
        {
          LoadedModulesList = KsepResolveShimHooks((__int64)v55, *(int **)(*(_QWORD *)(*v42 + 16LL) + 48LL));
          if ( LoadedModulesList < 0 )
            break;
          v41 = (unsigned int)(v41 + 1);
          v42 += 10;
          if ( (unsigned int)v41 >= (unsigned int)v6 )
            goto LABEL_51;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140328F60, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_140328F60);
        KeAbPostRelease((ULONG_PTR)&qword_140328F60);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v46, v47, v48);
        v49 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
        v50 = KsepDebugFlag;
        dword_140307464[2 * v49] = LoadedModulesList;
        KsepHistoryErrors[2 * v49] = 459288;
        if ( (v50 & 2) != 0 )
          KsepDebugPrint(
            6LL,
            "KSE: Failed to resolve hooks for shim [0x%08X]. Status 0x%x.\n",
            LODWORD(a1[10 * v41]),
            LoadedModulesList);
        KsepLogError(
          6,
          "KSE: Failed to resolve hooks for shim [0x%08X]. Status 0x%x.\n",
          LODWORD(a1[10 * v41]),
          (unsigned int)LoadedModulesList);
      }
      else
      {
LABEL_51:
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140328F60, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_140328F60);
        KeAbPostRelease((ULONG_PTR)&qword_140328F60);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v43, v44, v45);
      }
    }
    goto LABEL_59;
  }
  v19 = 0LL;
  if ( (_DWORD)v6 )
  {
    v20 = a1 + 9;
    while ( 1 )
    {
      if ( !*v20 )
      {
        LoadedModulesList = KsepLoadShimProvider((__int64)&a1[10 * v19]);
        if ( LoadedModulesList < 0 )
          break;
      }
      v19 = (unsigned int)(v19 + 1);
      v20 += 10;
      if ( (unsigned int)v19 >= (unsigned int)v6 )
        goto LABEL_22;
    }
    v31 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    v32 = KsepDebugFlag;
    dword_140307464[2 * v31] = LoadedModulesList;
    KsepHistoryErrors[2 * v31] = 459211;
    if ( (v32 & 2) != 0 )
      KsepDebugPrint(
        6LL,
        "KSE: Failed to load provider for shim [0x%08X]. Status: 0x%x\n",
        LODWORD(a1[10 * v19]),
        LoadedModulesList);
    KsepLogError(
      6,
      "KSE: Failed to load provider for shim [0x%08X]. Status: 0x%x\n",
      LODWORD(a1[10 * v19]),
      (unsigned int)LoadedModulesList);
LABEL_59:
    if ( LoadedModulesList >= 0 )
    {
      v51 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
      v52 = KsepDebugFlag;
      HIDWORD(KsepHistoryMessages[v51]) = 0;
      LODWORD(KsepHistoryMessages[v51]) = 459302;
      if ( (v52 & 1) != 0 )
        KsepDebugPrint(6LL, "KSE: Successfully resolved %d shim(s).\n", v6);
      KsepLogInfo(6LL, (__int64)"KSE: Successfully resolved %d shim(s).\n", v6);
    }
    goto LABEL_63;
  }
LABEL_22:
  v21 = KeGetCurrentThread();
  --v21->KernelApcDisable;
  v22 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_140328F60, 0LL, 0);
  v10 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140328F60, 0LL);
  v24 = v22;
  if ( v10 )
    ExfAcquirePushLockExclusiveEx(&qword_140328F60, v22, (ULONG_PTR)&qword_140328F60);
  if ( v24 )
    v24[26] |= 1u;
  v25 = 0LL;
  if ( !(_DWORD)v6 )
  {
LABEL_30:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140328F60, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140328F60);
    KeAbPostRelease((ULONG_PTR)&qword_140328F60);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v28, v29, v30);
    goto LABEL_41;
  }
  v26 = a1 + 9;
  while ( (unsigned int)KsepIsShimRegistered((__int64)&KseEngine, &a1[10 * v25], v23, &a1[10 * v25 + 9]) )
  {
    v27 = *v26;
    v25 = (unsigned int)(v25 + 1);
    v26 += 10;
    ++*(_DWORD *)(v27 + 24);
    if ( (unsigned int)v25 >= (unsigned int)v6 )
      goto LABEL_30;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140328F60, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140328F60);
  KeAbPostRelease((ULONG_PTR)&qword_140328F60);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v33, v34, v35);
  LoadedModulesList = -1073740782;
  v36 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
  v37 = KsepDebugFlag;
  dword_140307464[2 * v36] = -1073740782;
  KsepHistoryErrors[2 * v36] = 459240;
  if ( (v37 & 2) != 0 )
    KsepDebugPrint(6LL, "KSE: The provider did not register shim [0x%08X] in time\n", LODWORD(a1[10 * v25]));
  KsepLogError(6, "KSE: The provider did not register shim [0x%08X] in time\n", LODWORD(a1[10 * v25]));
LABEL_63:
  KsepPoolFreePaged(v55);
  return (unsigned int)LoadedModulesList;
}
