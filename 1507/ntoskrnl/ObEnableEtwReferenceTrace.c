/*
 * XREFs of ObEnableEtwReferenceTrace @ 0x1406AD128
 * Callers:
 *     EtwpEnableKernelTrace @ 0x14054A9EC (EtwpEnableKernelTrace.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

void __fastcall ObEnableEtwReferenceTrace(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rax
  __int64 v6; // r9
  signed __int8 v7; // cf
  __int64 v8; // rdi
  struct _KTHREAD *v9; // rcx
  __int16 v10; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = KeAbPreAcquire((ULONG_PTR)&ObpStackTraceLock, 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&ObpStackTraceLock, 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&ObpStackTraceLock, v5, (ULONG_PTR)&ObpStackTraceLock, v6);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  ObpTraceFlags |= 4u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
  KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
  v9 = KeGetCurrentThread();
  v10 = v9->SpecialApcDisable + 1;
  v9->SpecialApcDisable = v10;
  if ( !v10 && ($CD287064E7C9F7953DE243E927CFCB99 *)v9->ApcState.ApcListHead[0].Flink != &v9->152 )
    KiCheckForKernelApcDelivery();
}
