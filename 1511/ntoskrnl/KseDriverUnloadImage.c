/*
 * XREFs of KseDriverUnloadImage @ 0x1404C57BC
 * Callers:
 *     MiUnloadSystemImage @ 0x1403CF92C (MiUnloadSystemImage.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x1400028CC (KsepPoolFreePaged.c)
 *     KsepLogInfo @ 0x140002940 (KsepLogInfo.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     MmIsSessionAddress @ 0x1400431C0 (MmIsSessionAddress.c)
 *     KsepDebugPrint @ 0x1401CCFB8 (KsepDebugPrint.c)
 *     RtlAssert @ 0x1401F912C (RtlAssert.c)
 *     KsepStringFree @ 0x1403B8B6C (KsepStringFree.c)
 *     KsepIsModuleShimmed @ 0x1403B8C3C (KsepIsModuleShimmed.c)
 */

__int64 __fastcall KseDriverUnloadImage(__int64 a1)
{
  __int64 v2; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rax
  signed __int8 v6; // cf
  __int64 v7; // rdi
  _QWORD *v8; // rsi
  __int64 v9; // rdi
  unsigned int *i; // r14
  __int64 v11; // rdx
  void (__fastcall *v12)(_QWORD); // rdx
  __int64 v13; // rbp
  __int64 *v14; // rdi
  __int64 v15; // rcx
  char v16; // al
  __int64 *v17; // rcx
  __int64 **v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rbx
  void *v24; // rcx
  __int64 v25; // rcx
  char v26; // al
  unsigned int v27; // ebp
  void *v28; // r14
  _QWORD *v29; // rbx
  __int64 v30; // rdi
  _QWORD *v31; // rsi
  __int64 v32; // rdx
  char v33; // al
  __int64 v34; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  if ( dword_140305F14 != 2 )
    return 3221225659LL;
  if ( (KseEngine & 1) != 0 )
    return 3221225659LL;
  v2 = *(_QWORD *)(a1 + 48);
  if ( MmIsSessionAddress(v2) )
    return 3221225659LL;
  if ( (unsigned int)KsepIsModuleShimmed((__int64)&KseEngine, v2, &v34) && v34 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v5 = KeAbPreAcquire((ULONG_PTR)&qword_140305F40, 0LL, 0LL);
    v6 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140305F40, 0LL);
    v7 = v5;
    if ( v6 )
      ExfAcquirePushLockExclusiveEx(&qword_140305F40, v5, (ULONG_PTR)&qword_140305F40);
    if ( v7 )
      *(_BYTE *)(v7 + 26) |= 1u;
    v8 = (_QWORD *)v34;
    v9 = 0LL;
    for ( i = (unsigned int *)(v34 + 24); (unsigned int)v9 < *i; v9 = (unsigned int)(v9 + 1) )
    {
      v11 = *(_QWORD *)(v8[4] + 80 * v9 + 72);
      if ( (*(_DWORD *)(v11 + 28) & 4) == 0 )
      {
        v12 = *(void (__fastcall **)(_QWORD))(*(_QWORD *)(v11 + 16) + 32LL);
        if ( v12 )
          v12(*(_QWORD *)(a1 + 48));
      }
    }
    v13 = 0LL;
    if ( *i )
    {
      do
      {
        v14 = *(__int64 **)(v8[4] + 80 * v13 + 72);
        if ( !*((_DWORD *)v14 + 6) )
        {
          v15 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          v16 = KsepDebugFlag;
          dword_1402E1EA4[2 * v15] = -1073740768;
          KsepHistoryErrors[2 * v15] = 460150;
          if ( (v16 & 4) != 0 )
            RtlAssert("RegisteredShim->RefCount > 0", "minkernel\\ntos\\kshim\\kseloader.c", 0x576u, 0LL);
        }
        --*((_DWORD *)v14 + 6);
        if ( (*((_DWORD *)v14 + 7) & 4) != 0 && !*((_DWORD *)v14 + 6) )
        {
          v17 = (__int64 *)*v14;
          v18 = (__int64 **)v14[1];
          if ( *(__int64 **)(*v14 + 8) != v14 || *v18 != v14 )
            __fastfail(3u);
          *v18 = v17;
          v17[1] = (__int64)v18;
        }
        v13 = (unsigned int)(v13 + 1);
      }
      while ( (unsigned int)v13 < *i );
      v8 = (_QWORD *)v34;
    }
    v19 = *v8;
    v20 = (_QWORD *)v8[1];
    if ( *(_QWORD **)(*v8 + 8LL) != v8 || (_QWORD *)*v20 != v8 )
      __fastfail(3u);
    *v20 = v19;
    *(_QWORD *)(v19 + 8) = v20;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140305F40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140305F40);
    KeAbPostRelease((ULONG_PTR)&qword_140305F40);
    KeLeaveCriticalRegion();
    v21 = 0LL;
    if ( *i )
    {
      v22 = v34;
      do
      {
        v23 = *(_QWORD *)(*(_QWORD *)(v22 + 32) + 80 * v21 + 72);
        v24 = *(void **)(v23 + 32);
        if ( v24 )
          ObfDereferenceObject(v24);
        if ( (*(_DWORD *)(v23 + 28) & 4) != 0 && !*(_DWORD *)(v23 + 24) )
        {
          KsepPoolFreePaged((void *)v23);
          v25 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
          v26 = KsepDebugFlag;
          HIDWORD(KsepHistoryMessages[v25]) = 0;
          LODWORD(KsepHistoryMessages[v25]) = 460207;
          if ( (v26 & 1) != 0 )
            KsepDebugPrint(5LL, "KSE: Cleaned up dangling shim object [0x%08X] (unregistered while refcount >0)\n", v23);
          KsepLogInfo(
            5LL,
            (__int64)"KSE: Cleaned up dangling shim object [0x%08X] (unregistered while refcount >0)\n",
            v23);
        }
        v21 = (unsigned int)(v21 + 1);
      }
      while ( (unsigned int)v21 < *i );
    }
    v27 = *i;
    v28 = (void *)v34;
    v29 = *(_QWORD **)(v34 + 32);
    if ( v29 )
    {
      v30 = 0LL;
      if ( v27 )
      {
        v31 = v29 + 3;
        do
        {
          if ( v31[2] )
            KsepStringFree(&v29[10 * v30 + 4]);
          if ( *v31 )
            KsepStringFree(&v29[10 * v30 + 2]);
          if ( v31[4] )
            KsepStringFree(&v29[10 * v30 + 6]);
          v30 = (unsigned int)(v30 + 1);
          v31 += 10;
        }
        while ( (unsigned int)v30 < v27 );
      }
      KsepPoolFreePaged(v29);
    }
    KsepPoolFreePaged(v28);
    v32 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
    v33 = KsepDebugFlag;
    HIDWORD(KsepHistoryMessages[v32]) = 0;
    LODWORD(KsepHistoryMessages[v32]) = 460215;
    if ( (v33 & 1) != 0 )
      KsepDebugPrint(5LL, "KSE: Shimmed driver unload notification processed\n");
    KsepLogInfo(5LL, (__int64)"KSE: Shimmed driver unload notification processed\n");
  }
  return 0LL;
}
