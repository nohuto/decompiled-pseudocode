/*
 * XREFs of PoFxSystemLatencyNotify @ 0x140009F18
 * Callers:
 *     PoFxSendSystemLatencyUpdate @ 0x140009E20 (PoFxSendSystemLatencyUpdate.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 */

bool __fastcall PoFxSystemLatencyNotify(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  bool v3; // di
  __int64 v4; // rbx
  ULONG_PTR i; // rbx
  __int64 (__fastcall *v7)(__int64, __int64 *); // rax
  char v8; // al
  __int64 v9; // [rsp+68h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --CurrentThread->KernelApcDisable;
  v4 = KeAbPreAcquire((ULONG_PTR)&PopFxPluginLock);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&PopFxPluginLock, v4, &PopFxPluginLock);
  if ( v4 )
    *(_BYTE *)(v4 + 26) |= 1u;
  for ( i = PopFxPluginList; (ULONG_PTR *)i != &PopFxPluginList; i = *(_QWORD *)i )
  {
    v7 = *(__int64 (__fastcall **)(__int64, __int64 *))(i + 96);
    if ( v7 )
    {
      v9 = a1;
      v8 = v7(16LL, &v9);
    }
    else
    {
      v8 = 0;
    }
    if ( v8 && !v3 )
      v3 = *(_DWORD *)(i + 24) >= 0;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(&PopFxPluginLock);
  KeAbPostRelease((ULONG_PTR)&PopFxPluginLock);
  KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
  return v3;
}
