/*
 * XREFs of KseUnregisterShim @ 0x14069C630
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KsepPoolFreePaged @ 0x140153D50 (KsepPoolFreePaged.c)
 *     KsepLogInfo @ 0x140153D70 (KsepLogInfo.c)
 *     KsepDebugPrint @ 0x14020C31C (KsepDebugPrint.c)
 *     KsepLogError @ 0x14020C584 (KsepLogError.c)
 *     KsepIsShimRegistered @ 0x1405B557C (KsepIsShimRegistered.c)
 */

__int64 __fastcall KseUnregisterShim(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // r14d
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  signed __int8 v11; // cf
  __int64 v12; // rsi
  unsigned int v13; // ebp
  _QWORD *v14; // rsi
  __int64 v15; // rcx
  _QWORD *v16; // rdx
  void **v17; // rcx
  __int64 v18; // rcx
  struct _KTHREAD *v19; // rcx
  __int16 v20; // ax
  _QWORD *v21; // [rsp+50h] [rbp+8h] BYREF

  v21 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  if ( dword_140353C94 != 2 )
    return 3221225473LL;
  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  --CurrentThread->KernelApcDisable;
  v8 = KeAbPreAcquire((ULONG_PTR)&qword_140353CC0, 0LL, 0LL, a4);
  v11 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140353CC0, 0LL);
  v12 = v8;
  if ( v11 )
    ExfAcquirePushLockExclusiveEx(&qword_140353CC0, v8, (ULONG_PTR)&qword_140353CC0, v10);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  if ( (unsigned int)KsepIsShimRegistered((__int64)&KseEngine, *(_QWORD **)(a1 + 8), v9, &v21) )
  {
    if ( *((_DWORD *)v21 + 6) )
    {
      v13 = -1073741790;
      v14 = v21;
      v15 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
      dword_140332304[2 * v15] = -1073741790;
      KsepHistoryErrors[2 * v15] = 131464;
      if ( (KsepDebugFlag & 2) != 0 )
        KsepDebugPrint(
          3LL,
          "KSE: Ending shim [0x%08X] unregistration. Shim object [0x%08X] ref count is not 0.\n",
          **(_DWORD **)(a1 + 8),
          (_DWORD)v14);
      KsepLogError(
        3,
        "KSE: Ending shim [0x%08X] unregistration. Shim object [0x%08X] ref count is not 0.\n",
        **(_DWORD **)(a1 + 8),
        (_DWORD)v14);
      *((_DWORD *)v14 + 7) |= 4u;
    }
    else
    {
      v16 = (_QWORD *)*v21;
      v17 = (void **)v21[1];
      if ( *(_QWORD **)(*v21 + 8LL) != v21 || *v17 != v21 )
        __fastfail(3u);
      *v17 = v16;
      v7 = 1;
      v16[1] = v17;
      KsepHistoryMessages[((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F] = 131481LL;
      if ( (KsepDebugFlag & 1) != 0 )
        KsepDebugPrint(3LL, "KSE: Succeeded shim [0x%08X] unregistration.\n", **(_DWORD **)(a1 + 8));
      KsepLogInfo(3LL, (__int64)"KSE: Succeeded shim [0x%08X] unregistration.\n", **(_DWORD **)(a1 + 8));
      v13 = 0;
    }
  }
  else
  {
    v13 = -1073741772;
    v18 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    dword_140332304[2 * v18] = -1073741772;
    KsepHistoryErrors[2 * v18] = 131493;
    if ( (KsepDebugFlag & 2) != 0 )
      KsepDebugPrint(3LL, "KSE: Failed shim [0x%08X] unregistration. Shim not found.\n", **(_DWORD **)(a1 + 8));
    KsepLogError(3, "KSE: Failed shim [0x%08X] unregistration. Shim not found.\n", **(_DWORD **)(a1 + 8));
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
  if ( v7 )
    KsepPoolFreePaged(v21);
  return v13;
}
