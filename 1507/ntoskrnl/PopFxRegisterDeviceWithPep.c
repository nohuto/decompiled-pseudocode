/*
 * XREFs of PopFxRegisterDeviceWithPep @ 0x140166CE8
 * Callers:
 *     PopFxRegisterDeviceWorker @ 0x1405AC9D0 (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     PopPluginRegisterDevice @ 0x14023A0DC (PopPluginRegisterDevice.c)
 *     PopPepRegisterDevice @ 0x1405AD2D0 (PopPepRegisterDevice.c)
 */

__int64 __fastcall PopFxRegisterDeviceWithPep(ULONG_PTR a1, int a2, __int64 a3, __int64 a4)
{
  int v4; // r14d
  ULONG_PTR v7; // rbp
  struct _KTHREAD *CurrentThread; // rax
  int v9; // esi
  __int64 v10; // rbx
  __int64 v11; // r9
  ULONG_PTR *i; // rbx
  struct _KTHREAD *v13; // rcx
  __int16 v14; // ax
  int v16; // [rsp+20h] [rbp-48h]
  __int64 v17; // [rsp+70h] [rbp+8h] BYREF

  v4 = a4;
  v17 = 0LL;
  v7 = a1;
  if ( a1 )
  {
    v9 = PopPluginRegisterDevice(a1, v16, (__int64)&v17);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v9 = 0;
    --CurrentThread->KernelApcDisable;
    v10 = KeAbPreAcquire((ULONG_PTR)&PopFxPluginLock, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&PopFxPluginLock, v10, (ULONG_PTR)&PopFxPluginLock, v11);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    for ( i = (ULONG_PTR *)PopFxPluginList; i != &PopFxPluginList; i = (ULONG_PTR *)*i )
    {
      v7 = (ULONG_PTR)i;
      v9 = PopPluginRegisterDevice((ULONG_PTR)i, v16, (__int64)&v17);
      if ( v9 )
        break;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxPluginLock);
    KeAbPostRelease((ULONG_PTR)&PopFxPluginLock);
    v13 = KeGetCurrentThread();
    v14 = v13->KernelApcDisable + 1;
    v13->KernelApcDisable = v14;
    if ( !v14
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
      && !v13->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  if ( v9 )
  {
    v9 = 2;
    *(_QWORD *)(a3 + 72) = v17;
    *(_QWORD *)(a3 + 64) = v7;
  }
  return PopPepRegisterDevice(a2, a3, v4, v9, a3 + 56);
}
