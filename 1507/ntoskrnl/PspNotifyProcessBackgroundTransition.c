/*
 * XREFs of PspNotifyProcessBackgroundTransition @ 0x140129860
 * Callers:
 *     PspAddProcessToJobChain @ 0x14041B3E0 (PspAddProcessToJobChain.c)
 *     PspSetProcessBackgroundCountCallback @ 0x14054B68C (PspSetProcessBackgroundCountCallback.c)
 * Callees:
 *     KeAbProcessBaseIoPriorityChange @ 0x14000A100 (KeAbProcessBaseIoPriorityChange.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 */

void __fastcall PspNotifyProcessBackgroundTransition(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 *v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r9
  unsigned __int8 CurrentIrql; // r15
  __int64 *v11; // rsi
  __int64 *i; // rbx
  int v13; // r8d
  int v14; // edx
  __int16 v15; // ax

  if ( a2 )
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 772), 0x14u);
  else
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 772), 0x14u);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = (unsigned __int64 *)(a1 + 1688);
  v8 = KeAbPreAcquire(a1 + 1688, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v7, v8, (ULONG_PTR)v7, v9);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v11 = (__int64 *)(a1 + 1152);
  for ( i = *(__int64 **)(a1 + 1152); i != v11; i = (__int64 *)*i )
  {
    if ( (*((_BYTE *)i - 888) | *((_BYTE *)i - 262)) != 63 )
    {
      if ( a2 )
      {
        v13 = 0;
        v14 = (*((_DWORD *)i + 11) >> 9) & 7;
      }
      else
      {
        v14 = 0;
        v13 = (*((_DWORD *)i + 11) >> 9) & 7;
      }
      if ( v14 != v13 )
        KeAbProcessBaseIoPriorityChange((__int64)(i - 210), v14, v13);
    }
  }
  __writecr8(CurrentIrql);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v7);
  KeAbPostRelease((ULONG_PTR)v7);
  v15 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v15;
  if ( !v15
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
