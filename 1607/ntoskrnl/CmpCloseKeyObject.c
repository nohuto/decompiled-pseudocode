/*
 * XREFs of CmpCloseKeyObject @ 0x14049A770
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwGetKernelTraceTimestamp @ 0x140059D50 (EtwGetKernelTraceTimestamp.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400F05A0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400F0700 (ExReleaseFastMutexUnsafe.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     CmpUnlockRegistry @ 0x14040476C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404047A0 (CmpLockRegistry.c)
 *     CmpLockKcbShared @ 0x140435440 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140438610 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140439400 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpSignalDeferredPosts @ 0x14049A8F0 (CmpSignalDeferredPosts.c)
 *     CmpPostNotify @ 0x14049A9D4 (CmpPostNotify.c)
 *     CmpDelayedDerefKeys @ 0x140514B2C (CmpDelayedDerefKeys.c)
 */

__int64 (__fastcall *__fastcall CmpCloseKeyObject(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4))(__int64, int *, _QWORD, _QWORD, __int64, _QWORD)
{
  __int64 v4; // rsi
  __int64 (__fastcall *result)(__int64, int *, _QWORD, _QWORD, __int64, _QWORD); // rax
  struct _KTHREAD *CurrentThread; // rax
  int v9; // edx
  int v10; // r8d
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD v15[2]; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v16[2]; // [rsp+50h] [rbp-38h] BYREF
  int v17; // [rsp+60h] [rbp-28h] BYREF
  __int64 v18; // [rsp+64h] [rbp-24h]
  int v19; // [rsp+6Ch] [rbp-1Ch]

  v17 = 0;
  v18 = 0LL;
  v4 = 0LL;
  v19 = 0;
  result = (__int64 (__fastcall *)(__int64, int *, _QWORD, _QWORD, __int64, _QWORD))CmpTraceRoutine;
  if ( CmpTraceRoutine )
  {
    EtwGetKernelTraceTimestamp((char *)&v17, 0x20000uLL);
    result = (__int64 (__fastcall *)(__int64, int *, _QWORD, _QWORD, __int64, _QWORD))CmpTraceRoutine;
    if ( CmpTraceRoutine )
    {
      if ( a2 )
        v4 = *(_QWORD *)(a2 + 8);
    }
  }
  if ( a4 <= 1 && *(_DWORD *)a2 == 1803104306 && *(_QWORD *)(a2 + 16) )
  {
    v16[1] = v16;
    v16[0] = v16;
    v15[1] = v15;
    v15[0] = v15;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    CmpLockRegistry();
    CmpLockKcbShared(*(_QWORD *)(a2 + 8));
    if ( CmpIsKeyDeletedForKeyBody(a2, 0LL) )
    {
      CmpUnlockKcb(*(char **)(a2 + 8));
      CmpUnlockRegistry();
    }
    else
    {
      ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 24LL) + 2832LL));
      v11 = *(_QWORD *)(a2 + 16);
      if ( v11 && *(_QWORD *)(v11 + 16) != v11 + 16 )
        CmpPostNotify(v11, v9, v10, 267, 0, (__int64)v15, (__int64)v16);
      ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 24LL) + 2832LL));
      CmpUnlockKcb(*(char **)(a2 + 8));
      CmpUnlockRegistry();
      CmpDelayedDerefKeys(v15);
      CmpSignalDeferredPosts(v16);
    }
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v12, v13, v14);
    result = (__int64 (__fastcall *)(__int64, int *, _QWORD, _QWORD, __int64, _QWORD))CmpTraceRoutine;
  }
  if ( result )
  {
    LOBYTE(a1) = 27;
    return (__int64 (__fastcall *)(__int64, int *, _QWORD, _QWORD, __int64, _QWORD))result(a1, &v17, 0LL, 0LL, v4, 0LL);
  }
  return result;
}
