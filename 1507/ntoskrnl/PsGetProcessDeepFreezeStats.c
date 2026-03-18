/*
 * XREFs of PsGetProcessDeepFreezeStats @ 0x14050CE38
 * Callers:
 *     PsSetProcessTelemetryAppState @ 0x140507404 (PsSetProcessTelemetryAppState.c)
 *     PfpPrivSourceEnum @ 0x14050CF74 (PfpPrivSourceEnum.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PsGetProcessDeepFreezeStats(unsigned __int64 *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 *v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r9
  __int64 v10; // rsi
  __int16 v11; // ax
  __int64 v12; // rcx
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = a1 + 91;
  v8 = KeAbPreAcquire((ULONG_PTR)(a1 + 91), 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v7, v8, (ULONG_PTR)v7, v9);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  a2[2] = a1[235];
  a2[3] = a1[221];
  do
  {
    v10 = MEMORY[0xFFFFF780000003B0];
    *a2 = MEMORY[0xFFFFF78000000008];
  }
  while ( v10 != MEMORY[0xFFFFF780000003B0] );
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v7);
  KeAbPostRelease((ULONG_PTR)v7);
  v11 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v11;
  if ( !v11
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  v12 = a2[3];
  result = *a2 - v10;
  a2[1] = result;
  if ( v12 )
  {
    result -= v12;
    a2[2] += result;
  }
  return result;
}
