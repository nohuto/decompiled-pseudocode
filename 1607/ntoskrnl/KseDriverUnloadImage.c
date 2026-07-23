/*
 * XREFs of KseDriverUnloadImage @ 0x140546D94
 * Callers:
 *     MiUnloadSystemImage @ 0x1404821BC (MiUnloadSystemImage.c)
 * Callees:
 *     MmIsSessionAddress @ 0x1400137C0 (MmIsSessionAddress.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     KsepPoolFreePaged @ 0x14010B35C (KsepPoolFreePaged.c)
 *     KsepLogInfo @ 0x14010B3D0 (KsepLogInfo.c)
 *     KsepDebugPrint @ 0x1401DCA68 (KsepDebugPrint.c)
 *     RtlAssert @ 0x140213284 (RtlAssert.c)
 *     KsepDbFreeDriverShims @ 0x140513C9C (KsepDbFreeDriverShims.c)
 *     KsepIsModuleShimmed @ 0x140515050 (KsepIsModuleShimmed.c)
 */

__int64 __fastcall KseDriverUnloadImage(__int64 a1)
{
  unsigned __int64 v2; // rbx
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v5; // rax
  signed __int8 v6; // cf
  _BYTE *v7; // rdi
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
  void *v27; // rbx
  __int64 v28; // rdx
  char v29; // al
  __int64 v30; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  if ( dword_140328F34 != 2 )
    return 3221225659LL;
  if ( (KseEngine & 1) != 0 )
    return 3221225659LL;
  v2 = *(_QWORD *)(a1 + 48);
  if ( MmIsSessionAddress(v2) )
    return 3221225659LL;
  if ( (unsigned int)KsepIsModuleShimmed((__int64)&KseEngine, v2, &v30) && v30 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v5 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_140328F60, 0LL, 0);
    v6 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140328F60, 0LL);
    v7 = v5;
    if ( v6 )
      ExfAcquirePushLockExclusiveEx(&qword_140328F60, v5, (ULONG_PTR)&qword_140328F60);
    if ( v7 )
      v7[26] |= 1u;
    v8 = (_QWORD *)v30;
    v9 = 0LL;
    for ( i = (unsigned int *)(v30 + 24); (unsigned int)v9 < *i; v9 = (unsigned int)(v9 + 1) )
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
          dword_140307464[2 * v15] = -1073740768;
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
      v8 = (_QWORD *)v30;
    }
    v19 = *v8;
    v20 = (_QWORD *)v8[1];
    if ( *(_QWORD **)(*v8 + 8LL) != v8 || (_QWORD *)*v20 != v8 )
      __fastfail(3u);
    *v20 = v19;
    *(_QWORD *)(v19 + 8) = v20;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140328F60, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140328F60);
    KeAbPostRelease((ULONG_PTR)&qword_140328F60);
    KeLeaveCriticalRegion();
    v21 = 0LL;
    if ( *i )
    {
      v22 = v30;
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
    v27 = (void *)v30;
    KsepDbFreeDriverShims(*(_QWORD **)(v30 + 32), *i);
    KsepPoolFreePaged(v27);
    v28 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
    v29 = KsepDebugFlag;
    HIDWORD(KsepHistoryMessages[v28]) = 0;
    LODWORD(KsepHistoryMessages[v28]) = 460215;
    if ( (v29 & 1) != 0 )
      KsepDebugPrint(5LL, "KSE: Shimmed driver unload notification processed\n");
    KsepLogInfo(5LL, (__int64)"KSE: Shimmed driver unload notification processed\n");
  }
  return 0LL;
}
