/*
 * XREFs of KseUnregisterShim @ 0x140652DAC
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     KsepPoolFreePaged @ 0x14010B35C (KsepPoolFreePaged.c)
 *     KsepLogInfo @ 0x14010B3D0 (KsepLogInfo.c)
 *     KsepDebugPrint @ 0x1401DCA68 (KsepDebugPrint.c)
 *     KsepLogError @ 0x1401DCCD0 (KsepLogError.c)
 *     KsepIsShimRegistered @ 0x140570B4C (KsepIsShimRegistered.c)
 */

__int64 __fastcall KseUnregisterShim(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v4; // r14d
  _BYTE *v5; // rax
  __int64 v6; // r8
  signed __int8 v7; // cf
  _BYTE *v8; // rsi
  unsigned int v9; // ebp
  _QWORD *v10; // rsi
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  void **v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // [rsp+50h] [rbp+8h] BYREF

  v19 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  if ( dword_140328F34 != 2 )
    return 3221225473LL;
  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  --CurrentThread->KernelApcDisable;
  v5 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_140328F60, 0LL, 0);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140328F60, 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&qword_140328F60, v5, (ULONG_PTR)&qword_140328F60);
  if ( v8 )
    v8[26] |= 1u;
  if ( (unsigned int)KsepIsShimRegistered((__int64)&KseEngine, *(_QWORD **)(a1 + 8), v6, &v19) )
  {
    if ( *((_DWORD *)v19 + 6) )
    {
      v9 = -1073741790;
      v10 = v19;
      v11 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
      dword_140307464[2 * v11] = -1073741790;
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
      v12 = (_QWORD *)*v19;
      v13 = (void **)v19[1];
      if ( *(_QWORD **)(*v19 + 8LL) != v19 || *v13 != v19 )
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
    dword_140307464[2 * v15] = -1073741772;
    KsepHistoryErrors[2 * v15] = 131493;
    if ( (KsepDebugFlag & 2) != 0 )
      KsepDebugPrint(3LL, "KSE: Failed shim [0x%08X] unregistration. Shim not found.\n", **(_DWORD **)(a1 + 8));
    KsepLogError(3, "KSE: Failed shim [0x%08X] unregistration. Shim not found.\n", **(_DWORD **)(a1 + 8));
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140328F60, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140328F60);
  KeAbPostRelease((ULONG_PTR)&qword_140328F60);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v16, v17, v18);
  if ( v4 )
    KsepPoolFreePaged(v19);
  return v9;
}
