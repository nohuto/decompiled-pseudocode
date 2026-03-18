/*
 * XREFs of PspSwapSystemDll @ 0x1406BEE64
 * Callers:
 *     PsShutdownSystem @ 0x1406C39F0 (PsShutdownSystem.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObFastReplaceObject @ 0x1400864A0 (ObFastReplaceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockExclusive @ 0x1400F36C0 (ExfReleasePushLockExclusive.c)
 */

ULONG_PTR __fastcall PspSwapSystemDll(volatile __int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  ULONG_PTR result; // rax
  __int64 v4; // r9
  void *v5; // rbp
  unsigned __int64 *v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r9
  __int16 v9; // ax
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  result = ObFastReplaceObject(a1, 0LL);
  v5 = (void *)result;
  if ( result )
  {
    --CurrentThread->KernelApcDisable;
    v6 = (unsigned __int64 *)(a1 + 1);
    _InterlockedOr(v10, 0);
    if ( (*v6 & 1) != 0 )
    {
      v7 = KeAbPreAcquire((ULONG_PTR)v6, 0LL, 0LL, v4);
      ExfAcquirePushLockExclusiveEx(v6, v7, (ULONG_PTR)v6, v8);
      if ( v7 )
        *(_BYTE *)(v7 + 26) |= 1u;
      ExfReleasePushLockExclusive((volatile signed __int64 *)v6);
      if ( v7 )
        KeAbPostRelease((ULONG_PTR)v6);
    }
    v9 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v9;
    if ( !v9
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return ObfDereferenceObject(v5);
  }
  return result;
}
