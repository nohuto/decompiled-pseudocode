/*
 * XREFs of KseDriverUnloadImage @ 0x1404531F0
 * Callers:
 *     MiUnloadSystemImage @ 0x140452B74 (MiUnloadSystemImage.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     MmIsSessionAddress @ 0x14004ED20 (MmIsSessionAddress.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KsepPoolFreePaged @ 0x140153D50 (KsepPoolFreePaged.c)
 *     KsepLogInfo @ 0x140153D70 (KsepLogInfo.c)
 *     KsepDebugPrint @ 0x14020C31C (KsepDebugPrint.c)
 *     RtlAssert @ 0x140248194 (RtlAssert.c)
 *     KsepIsModuleShimmed @ 0x1404535A8 (KsepIsModuleShimmed.c)
 *     KsepStringFree @ 0x1405788C8 (KsepStringFree.c)
 */

__int64 __fastcall KseDriverUnloadImage(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rax
  __int64 v7; // r9
  signed __int8 v8; // cf
  __int64 v9; // rdi
  _QWORD *v10; // rsi
  unsigned int v11; // edi
  unsigned int *i; // r14
  __int64 v13; // rdx
  void (__fastcall *v14)(_QWORD); // rdx
  unsigned int v15; // ebp
  __int64 *v16; // rdi
  __int64 v17; // rcx
  char v18; // al
  __int64 *v19; // rcx
  __int64 **v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // rax
  struct _KTHREAD *v23; // rcx
  __int16 v24; // ax
  unsigned int v25; // edi
  __int64 v26; // rsi
  __int64 v27; // rbx
  void *v28; // rcx
  char v29; // al
  unsigned int v30; // ebp
  void *v31; // r14
  _QWORD *v32; // rbx
  unsigned int v33; // edi
  _QWORD *v34; // rsi
  char v35; // al
  __int64 v36; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  if ( dword_140353C94 != 2 )
    return 3221225659LL;
  if ( (KseEngine & 1) != 0 )
    return 3221225659LL;
  v2 = *(_QWORD *)(a1 + 48);
  if ( MmIsSessionAddress(v2) )
    return 3221225659LL;
  if ( (unsigned int)KsepIsModuleShimmed(&KseEngine, v2, &v36) && v36 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v6 = KeAbPreAcquire((ULONG_PTR)&qword_140353CC0, 0LL, 0LL, v3);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140353CC0, 0LL);
    v9 = v6;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(&qword_140353CC0, v6, (ULONG_PTR)&qword_140353CC0, v7);
    if ( v9 )
      *(_BYTE *)(v9 + 26) |= 1u;
    v10 = (_QWORD *)v36;
    v11 = 0;
    for ( i = (unsigned int *)(v36 + 24); v11 < *i; ++v11 )
    {
      v13 = *(_QWORD *)(v10[4] + 80LL * v11 + 72);
      if ( (*(_DWORD *)(v13 + 28) & 4) == 0 )
      {
        v14 = *(void (__fastcall **)(_QWORD))(*(_QWORD *)(v13 + 16) + 32LL);
        if ( v14 )
          v14(*(_QWORD *)(a1 + 48));
      }
    }
    v15 = 0;
    if ( *i )
    {
      do
      {
        v16 = *(__int64 **)(v10[4] + 80LL * v15 + 72);
        if ( !*((_DWORD *)v16 + 6) )
        {
          v17 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          v18 = KsepDebugFlag;
          dword_140332304[2 * v17] = -1073740768;
          KsepHistoryErrors[2 * v17] = 460150;
          if ( (v18 & 4) != 0 )
            RtlAssert("RegisteredShim->RefCount > 0", "minkernel\\ntos\\kshim\\kseloader.c", 0x576u, 0LL);
        }
        --*((_DWORD *)v16 + 6);
        if ( (*((_DWORD *)v16 + 7) & 4) != 0 && !*((_DWORD *)v16 + 6) )
        {
          v19 = (__int64 *)*v16;
          v20 = (__int64 **)v16[1];
          if ( *(__int64 **)(*v16 + 8) != v16 || *v20 != v16 )
            __fastfail(3u);
          *v20 = v19;
          v19[1] = (__int64)v20;
        }
        ++v15;
      }
      while ( v15 < *i );
      v10 = (_QWORD *)v36;
    }
    v21 = *v10;
    v22 = (_QWORD *)v10[1];
    if ( *(_QWORD **)(*v10 + 8LL) != v10 || (_QWORD *)*v22 != v10 )
      __fastfail(3u);
    *v22 = v21;
    *(_QWORD *)(v21 + 8) = v22;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140353CC0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140353CC0);
    KeAbPostRelease((ULONG_PTR)&qword_140353CC0);
    v23 = KeGetCurrentThread();
    v24 = v23->KernelApcDisable + 1;
    v23->KernelApcDisable = v24;
    if ( !v24
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v23->ApcState.ApcListHead[0].Flink != &v23->152
      && !v23->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v25 = 0;
    if ( *i )
    {
      v26 = v36;
      do
      {
        v27 = *(_QWORD *)(*(_QWORD *)(v26 + 32) + 80LL * v25 + 72);
        v28 = *(void **)(v27 + 32);
        if ( v28 )
          ObfDereferenceObject(v28);
        if ( (*(_DWORD *)(v27 + 28) & 4) != 0 && !*(_DWORD *)(v27 + 24) )
        {
          KsepPoolFreePaged((void *)v27);
          v29 = KsepDebugFlag;
          KsepHistoryMessages[((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F] = 460207LL;
          if ( (v29 & 1) != 0 )
            KsepDebugPrint(5LL, "KSE: Cleaned up dangling shim object [0x%08X] (unregistered while refcount >0)\n", v27);
          KsepLogInfo(
            5LL,
            (__int64)"KSE: Cleaned up dangling shim object [0x%08X] (unregistered while refcount >0)\n",
            v27);
        }
        ++v25;
      }
      while ( v25 < *i );
    }
    v30 = *i;
    v31 = (void *)v36;
    v32 = *(_QWORD **)(v36 + 32);
    if ( v32 )
    {
      v33 = 0;
      if ( v30 )
      {
        v34 = v32 + 3;
        do
        {
          if ( v34[2] )
            KsepStringFree(&v32[10 * v33 + 4]);
          if ( *v34 )
            KsepStringFree(&v32[10 * v33 + 2]);
          if ( v34[4] )
            KsepStringFree(&v32[10 * v33 + 6]);
          ++v33;
          v34 += 10;
        }
        while ( v33 < v30 );
      }
      KsepPoolFreePaged(v32);
    }
    KsepPoolFreePaged(v31);
    v35 = KsepDebugFlag;
    KsepHistoryMessages[((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F] = 460215LL;
    if ( (v35 & 1) != 0 )
      KsepDebugPrint(5LL, "KSE: Shimmed driver unload notification processed\n");
    KsepLogInfo(5LL, (__int64)"KSE: Shimmed driver unload notification processed\n");
  }
  return 0LL;
}
