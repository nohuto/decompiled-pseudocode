/*
 * XREFs of PopFxRegisterDeviceWithPep @ 0x14012FE54
 * Callers:
 *     PopFxRegisterDeviceWorker @ 0x14051BB30 (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PopPluginRegisterDevice @ 0x1401EBED4 (PopPluginRegisterDevice.c)
 *     PopPepRegisterDevice @ 0x14051C284 (PopPepRegisterDevice.c)
 */

__int64 __fastcall PopFxRegisterDeviceWithPep(ULONG_PTR a1, int a2, __int64 a3, int a4)
{
  ULONG_PTR v7; // rbp
  struct _KTHREAD *CurrentThread; // rax
  int v9; // esi
  __int64 v10; // rdi
  ULONG_PTR *i; // rdi
  int v13; // [rsp+20h] [rbp-48h]
  __int64 v14; // [rsp+70h] [rbp+8h] BYREF

  v14 = 0LL;
  v7 = a1;
  if ( a1 )
  {
    v9 = PopPluginRegisterDevice(a1, v13, (__int64)&v14);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v9 = 0;
    --CurrentThread->KernelApcDisable;
    v10 = KeAbPreAcquire((ULONG_PTR)&PopFxPluginLock, 0LL, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&PopFxPluginLock, v10, (ULONG_PTR)&PopFxPluginLock);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    for ( i = (ULONG_PTR *)PopFxPluginList; i != &PopFxPluginList; i = (ULONG_PTR *)*i )
    {
      v7 = (ULONG_PTR)i;
      v9 = PopPluginRegisterDevice((ULONG_PTR)i, v13, (__int64)&v14);
      if ( v9 )
        break;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxPluginLock);
    KeAbPostRelease((ULONG_PTR)&PopFxPluginLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( v9 )
  {
    v9 = 2;
    *(_QWORD *)(a3 + 72) = v14;
    *(_QWORD *)(a3 + 64) = v7;
  }
  return PopPepRegisterDevice(a2, a3, a4, v9, a3 + 56);
}
