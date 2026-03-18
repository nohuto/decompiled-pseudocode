/*
 * XREFs of KseUnregisterShim @ 0x14061DA50
 * Callers:
 *     <none>
 * Callees:
 *     KsepPoolFreePaged @ 0x1400028CC (KsepPoolFreePaged.c)
 *     KsepLogInfo @ 0x140002940 (KsepLogInfo.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KsepDebugPrint @ 0x1401CCFB8 (KsepDebugPrint.c)
 *     KsepLogError @ 0x1401CD220 (KsepLogError.c)
 *     KsepIsShimRegistered @ 0x140524D80 (KsepIsShimRegistered.c)
 */

__int64 __fastcall KseUnregisterShim(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v4; // r14d
  __int64 v5; // rax
  __int64 v6; // r8
  signed __int8 v7; // cf
  __int64 v8; // rsi
  unsigned int v9; // ebp
  _QWORD *v10; // rsi
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  void **v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  _QWORD *v16; // [rsp+50h] [rbp+8h] BYREF

  v16 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  if ( dword_140305F14 != 2 )
    return 3221225473LL;
  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((ULONG_PTR)&qword_140305F40, 0LL, 0LL);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140305F40, 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&qword_140305F40, v5, (ULONG_PTR)&qword_140305F40);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  if ( (unsigned int)KsepIsShimRegistered((__int64)&KseEngine, *(_QWORD **)(a1 + 8), v6, &v16) )
  {
    if ( *((_DWORD *)v16 + 6) )
    {
      v9 = -1073741790;
      v10 = v16;
      v11 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
      dword_1402E1EA4[2 * v11] = -1073741790;
      KsepHistoryErrors[2 * v11] = 131464;
      if ( (KsepDebugFlag & 2) != 0 )
        KsepDebugPrint(
          3LL,
          "KSE: Ending shim [0x%08X] unregistration. Shim object [0x%08X] ref count is not 0.\n",
          **(_DWORD **)(a1 + 8),
          (_DWORD)v10);
      KsepLogError(
        3,
        "KSE: Ending shim [0x%08X] unregistration. Shim object [0x%08X] ref count is not 0.\n",
        **(_DWORD **)(a1 + 8),
        (_DWORD)v10);
      *((_DWORD *)v10 + 7) |= 4u;
    }
    else
    {
      v12 = (_QWORD *)*v16;
      v13 = (void **)v16[1];
      if ( *(_QWORD **)(*v16 + 8LL) != v16 || *v13 != v16 )
        __fastfail(3u);
      *v13 = v12;
      v4 = 1;
      v12[1] = v13;
      v14 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
      HIDWORD(KsepHistoryMessages[v14]) = 0;
      LODWORD(KsepHistoryMessages[v14]) = 131481;
      if ( (KsepDebugFlag & 1) != 0 )
        KsepDebugPrint(3LL, "KSE: Succeeded shim [0x%08X] unregistration.\n", **(_DWORD **)(a1 + 8));
      KsepLogInfo(3LL, (__int64)"KSE: Succeeded shim [0x%08X] unregistration.\n", **(_DWORD **)(a1 + 8));
      v9 = 0;
    }
  }
  else
  {
    v9 = -1073741772;
    v15 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    dword_1402E1EA4[2 * v15] = -1073741772;
    KsepHistoryErrors[2 * v15] = 131493;
    if ( (KsepDebugFlag & 2) != 0 )
      KsepDebugPrint(3LL, "KSE: Failed shim [0x%08X] unregistration. Shim not found.\n", **(_DWORD **)(a1 + 8));
    KsepLogError(3, "KSE: Failed shim [0x%08X] unregistration. Shim not found.\n", **(_DWORD **)(a1 + 8));
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140305F40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140305F40);
  KeAbPostRelease((ULONG_PTR)&qword_140305F40);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v4 )
    KsepPoolFreePaged(v16);
  return v9;
}
