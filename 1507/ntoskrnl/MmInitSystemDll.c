/*
 * XREFs of MmInitSystemDll @ 0x1407CFE98
 * Callers:
 *     Phase1InitializationIoReady @ 0x1407D05E0 (Phase1InitializationIoReady.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14004E3E0 (ObFastDereferenceObject.c)
 *     ObFastReferenceObject @ 0x14004E430 (ObFastReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObFastReferenceObjectLocked @ 0x140085588 (ObFastReferenceObjectLocked.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     PsQuerySystemDllInfo @ 0x14054B934 (PsQuerySystemDllInfo.c)
 */

signed __int64 MmInitSystemDll()
{
  signed __int64 result; // rax
  signed __int64 v1; // rbp
  _QWORD *v2; // r14
  ULONG_PTR v3; // rdi
  __int64 v4; // r9
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v6; // rdi
  __int64 v7; // r9
  __int16 v8; // ax

  result = PsQuerySystemDllInfo(0);
  v1 = result;
  if ( result )
  {
    v2 = (_QWORD *)(result - 16);
    v3 = ObFastReferenceObject((signed __int64 *)(result - 16));
    if ( !v3 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v6 = KeAbPreAcquire((ULONG_PTR)(v2 + 1), 0LL, 0LL, v4);
      if ( _InterlockedCompareExchange64(v2 + 1, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v2 + 1, v6, (ULONG_PTR)(v2 + 1), v7);
      if ( v6 )
        *(_BYTE *)(v6 + 26) |= 1u;
      v3 = ObFastReferenceObjectLocked(v2);
      if ( _InterlockedCompareExchange64(v2 + 1, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v2 + 1);
      KeAbPostRelease((ULONG_PTR)(v2 + 1));
      v8 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v8;
      if ( !v8
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    result = *(_QWORD *)(v1 + 24);
    qword_14034EB30 = result;
    if ( v3 )
      return ObFastDereferenceObject(v2, v3);
  }
  return result;
}
