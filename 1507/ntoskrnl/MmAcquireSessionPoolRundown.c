/*
 * XREFs of MmAcquireSessionPoolRundown @ 0x14051C9E0
 * Callers:
 *     ExGetSessionPoolTagInfo @ 0x1400FEAA8 (ExGetSessionPoolTagInfo.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall MmAcquireSessionPoolRundown(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v5; // r15
  __int64 v6; // rbp
  __int64 v7; // r9
  __int16 v8; // cx
  __int16 v10; // ax

  CurrentThread = KeGetCurrentThread();
  v5 = CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  if ( a1 != 1 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14034EAD8, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_14034EAD8);
    KeAbPostRelease((ULONG_PTR)&qword_14034EAD8);
    v8 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v8;
    if ( !v8 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    return 1LL;
  }
  --CurrentThread->SpecialApcDisable;
  v6 = KeAbPreAcquire((ULONG_PTR)&qword_14034EAD8, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14034EAD8, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&qword_14034EAD8, v6, (ULONG_PTR)&qword_14034EAD8, v7);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  if ( (*(_DWORD *)(v5 + 4) & 0x21) == 1 )
    return 1LL;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14034EAD8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_14034EAD8);
  KeAbPostRelease((ULONG_PTR)&qword_14034EAD8);
  v10 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v10;
  if ( !v10 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return 0LL;
}
