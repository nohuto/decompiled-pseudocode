/*
 * XREFs of PsQueryRuntimeProcess @ 0x14042E5E8
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x14042E030 (ExpQuerySystemPerformanceInformation.c)
 *     PspSetJobTimeLimitCallback @ 0x1406C4E34 (PspSetJobTimeLimitCallback.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PsQueryRuntimeProcess(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // r9
  unsigned int v10; // edi
  _QWORD *v11; // rcx
  int v12; // ebp
  __int16 v13; // ax
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = (unsigned __int64 *)(a1 + 1688);
  v8 = KeAbPreAcquire(a1 + 1688, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v7, v8, (ULONG_PTR)v7, v9);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v10 = *(_DWORD *)(a1 + 620);
  v11 = *(_QWORD **)(a1 + 1152);
  v12 = *(_DWORD *)(a1 + 624);
  while ( v11 != (_QWORD *)(a1 + 1152) )
  {
    v10 += *((_DWORD *)v11 - 257);
    v12 += *((_DWORD *)v11 - 237);
    v11 = (_QWORD *)*v11;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v7);
  KeAbPostRelease((ULONG_PTR)v7);
  v13 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v13;
  if ( !v13
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  result = v10;
  *a2 = v12;
  return result;
}
