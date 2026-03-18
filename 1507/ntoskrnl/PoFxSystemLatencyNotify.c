/*
 * XREFs of PoFxSystemLatencyNotify @ 0x1400ED3F0
 * Callers:
 *     PoFxSendSystemLatencyUpdate @ 0x1400ED21C (PoFxSendSystemLatencyUpdate.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 */

bool __fastcall PoFxSystemLatencyNotify(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  bool v6; // di
  __int64 v7; // rbx
  ULONG_PTR i; // rbx
  struct _KTHREAD *v9; // rdx
  __int16 v10; // ax
  $CD287064E7C9F7953DE243E927CFCB99 *v12; // rcx
  __int64 (__fastcall *v13)(__int64, __int64 *); // rax
  char v14; // al
  __int64 v15; // [rsp+68h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v6 = 0;
  --CurrentThread->KernelApcDisable;
  v7 = KeAbPreAcquire((ULONG_PTR)&PopFxPluginLock, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&PopFxPluginLock, v7, &PopFxPluginLock);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  for ( i = PopFxPluginList; (ULONG_PTR *)i != &PopFxPluginList; i = *(_QWORD *)i )
  {
    v13 = *(__int64 (__fastcall **)(__int64, __int64 *))(i + 96);
    if ( v13 )
    {
      v15 = a1;
      v14 = v13(16LL, &v15);
    }
    else
    {
      v14 = 0;
    }
    if ( v14 && !v6 )
      v6 = *(_DWORD *)(i + 24) >= 0;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(&PopFxPluginLock);
  KeAbPostRelease((ULONG_PTR)&PopFxPluginLock);
  v9 = KeGetCurrentThread();
  v10 = v9->KernelApcDisable + 1;
  v9->KernelApcDisable = v10;
  if ( !v10 )
  {
    v12 = &v9->152;
    if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v12->ApcState.ApcListHead[0].Flink != v12 && !v9->SpecialApcDisable )
      KiCheckForKernelApcDelivery(v12);
  }
  return v6;
}
