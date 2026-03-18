/*
 * XREFs of CmpCloseKeyObject @ 0x14049A970
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400DE680 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     CmpDelayedDerefKeys @ 0x1403F50DC (CmpDelayedDerefKeys.c)
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 *     CmpSignalDeferredPosts @ 0x1404218C4 (CmpSignalDeferredPosts.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpLockKcbShared @ 0x140423B90 (CmpLockKcbShared.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 *     CmpPostNotify @ 0x14049AAF4 (CmpPostNotify.c)
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
  __int64 v9; // rcx
  int v10; // edx
  int v11; // r8d
  __int64 v12; // rcx
  _QWORD *v13[2]; // [rsp+40h] [rbp-48h] BYREF
  void *v14[2]; // [rsp+50h] [rbp-38h] BYREF
  int v15; // [rsp+60h] [rbp-28h] BYREF
  __int64 v16; // [rsp+64h] [rbp-24h]
  int v17; // [rsp+6Ch] [rbp-1Ch]

  v15 = 0;
  v16 = 0LL;
  v4 = 0LL;
  v17 = 0;
  result = (__int64 (__fastcall *)(__int64, int *, _QWORD, _QWORD, __int64, _QWORD))CmpTraceRoutine;
  if ( CmpTraceRoutine )
  {
    EtwGetKernelTraceTimestamp((char *)&v15, (char *)0x20000);
    result = (__int64 (__fastcall *)(__int64, int *, _QWORD, _QWORD, __int64, _QWORD))CmpTraceRoutine;
    if ( CmpTraceRoutine )
    {
      if ( a2 )
        v4 = *(_QWORD *)(a2 + 8);
    }
  }
  if ( a4 <= 1 && *(_DWORD *)a2 == 1803104306 && *(_QWORD *)(a2 + 16) )
  {
    v13[1] = v13;
    v13[0] = v13;
    v14[1] = v14;
    v14[0] = v14;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    CmpLockRegistry();
    CmpLockKcbShared(*(_QWORD *)(a2 + 8));
    v9 = *(_QWORD *)(a2 + 8);
    if ( (*(_DWORD *)(v9 + 4) & 0x20000) != 0 || (*(_DWORD *)(a2 + 48) & 1) != 0 )
    {
      CmpUnlockKcb((char *)v9);
      CmpUnlockRegistry();
    }
    else
    {
      ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(*(_QWORD *)(v9 + 32) + 2832LL));
      v12 = *(_QWORD *)(a2 + 16);
      if ( v12 && *(_QWORD *)(v12 + 16) != v12 + 16 )
        CmpPostNotify(v12, v10, v11, 267, 0, (__int64)v14, (__int64)v13);
      ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 32LL) + 2832LL));
      CmpUnlockKcb(*(char **)(a2 + 8));
      CmpUnlockRegistry();
      CmpDelayedDerefKeys(v14);
      CmpSignalDeferredPosts(v13);
    }
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    result = (__int64 (__fastcall *)(__int64, int *, _QWORD, _QWORD, __int64, _QWORD))CmpTraceRoutine;
  }
  if ( result )
  {
    LOBYTE(a1) = 27;
    return (__int64 (__fastcall *)(__int64, int *, _QWORD, _QWORD, __int64, _QWORD))result(a1, &v15, 0LL, 0LL, v4, 0LL);
  }
  return result;
}
