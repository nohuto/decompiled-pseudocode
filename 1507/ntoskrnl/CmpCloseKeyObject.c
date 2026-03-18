/*
 * XREFs of CmpCloseKeyObject @ 0x14042C8B0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     EtwGetKernelTraceTimestamp @ 0x140111B58 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     CmpLockKcbShared @ 0x140427A50 (CmpLockKcbShared.c)
 *     CmpSignalDeferredPosts @ 0x1404293F0 (CmpSignalDeferredPosts.c)
 *     CmpDelayedDerefKeys @ 0x14042A334 (CmpDelayedDerefKeys.c)
 *     CmpUnlockKcb @ 0x1404C53F0 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404C7410 (CmpLockRegistry.c)
 *     CmpPostNotify @ 0x1404ECFFC (CmpPostNotify.c)
 */

__int64 (__fastcall *__fastcall CmpCloseKeyObject(
        struct _KTHREAD *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD)
{
  __int64 v5; // rsi
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r9
  __int64 v13; // rcx
  struct _KTHREAD *v14; // r14
  ULONG_PTR v15; // rbp
  __int64 v16; // rax
  int v17; // edx
  int v18; // r8d
  __int64 v19; // rdi
  __int64 v20; // rcx
  ULONG_PTR v21; // rdi
  signed __int32 v22; // eax
  __int16 v23; // ax
  __int16 v24; // ax
  _QWORD *v25[2]; // [rsp+40h] [rbp-58h] BYREF
  void *v26[2]; // [rsp+50h] [rbp-48h] BYREF
  int v27; // [rsp+60h] [rbp-38h] BYREF
  __int64 v28; // [rsp+64h] [rbp-34h]
  int v29; // [rsp+6Ch] [rbp-2Ch]

  v27 = 0;
  v28 = 0LL;
  v5 = 0LL;
  v29 = 0;
  if ( CmpTraceRoutine )
  {
    EtwGetKernelTraceTimestamp((char *)&v27, (char *)0x20000);
    if ( CmpTraceRoutine )
    {
      if ( a2 )
        v5 = *(_QWORD *)(a2 + 8);
    }
  }
  if ( a4 <= 1 && *(_DWORD *)a2 == 1803104306 && *(_QWORD *)(a2 + 16) )
  {
    v25[1] = v25;
    v25[0] = v25;
    v26[1] = v26;
    v26[0] = v26;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    CmpLockRegistry();
    CmpLockKcbShared(*(_QWORD *)(a2 + 8), v9, v10, v11);
    v13 = *(_QWORD *)(a2 + 8);
    if ( (*(_DWORD *)(v13 + 4) & 0x20000) != 0 || (*(_DWORD *)(a2 + 48) & 1) != 0 )
    {
      CmpUnlockKcb((PVOID)v13);
      CmpUnlockRegistry();
      a1 = KeGetCurrentThread();
      v24 = a1->KernelApcDisable + 1;
      a1->KernelApcDisable = v24;
      if ( v24
        || ($CD287064E7C9F7953DE243E927CFCB99 *)a1->ApcState.ApcListHead[0].Flink == &a1->152
        || a1->SpecialApcDisable )
      {
        goto LABEL_5;
      }
    }
    else
    {
      v14 = KeGetCurrentThread();
      v15 = *(_QWORD *)(*(_QWORD *)(v13 + 32) + 2832LL);
      v16 = KeAbPreAcquire(v15, 0LL, 0LL, v12);
      v19 = v16;
      if ( !_interlockedbittestandreset((volatile signed __int32 *)v15, 0) )
        ExpAcquireFastMutexContended(v15, v16);
      if ( v19 )
        *(_BYTE *)(v19 + 26) |= 1u;
      *(_QWORD *)(v15 + 8) = v14;
      v20 = *(_QWORD *)(a2 + 16);
      if ( v20 && *(_QWORD *)(v20 + 16) != v20 + 16 )
        CmpPostNotify(v20, v17, v18, 267, 0, (__int64)v26, (__int64)v25);
      v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 32LL) + 2832LL);
      *(_QWORD *)(v21 + 8) = 0LL;
      v22 = _InterlockedCompareExchange((volatile signed __int32 *)v21, 1, 0);
      if ( v22 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)v21, v22);
      KeAbPostRelease(v21);
      CmpUnlockKcb(*(PVOID *)(a2 + 8));
      CmpUnlockRegistry();
      CmpDelayedDerefKeys(v26);
      CmpSignalDeferredPosts(v25);
      a1 = KeGetCurrentThread();
      v23 = a1->KernelApcDisable + 1;
      a1->KernelApcDisable = v23;
      if ( v23
        || ($CD287064E7C9F7953DE243E927CFCB99 *)a1->ApcState.ApcListHead[0].Flink == &a1->152
        || a1->SpecialApcDisable )
      {
        goto LABEL_5;
      }
    }
    KiCheckForKernelApcDelivery();
  }
LABEL_5:
  result = CmpTraceRoutine;
  if ( CmpTraceRoutine )
  {
    LOBYTE(a1) = 27;
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))CmpTraceRoutine(
                                                                                     a1,
                                                                                     &v27,
                                                                                     0LL,
                                                                                     0LL,
                                                                                     v5,
                                                                                     0LL);
  }
  return result;
}
