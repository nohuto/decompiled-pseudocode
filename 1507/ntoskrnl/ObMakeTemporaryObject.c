/*
 * XREFs of ObMakeTemporaryObject @ 0x140539B08
 * Callers:
 *     IoDeleteDevice @ 0x140007508 (IoDeleteDevice.c)
 *     IopCompleteUnloadOrDelete @ 0x140007694 (IopCompleteUnloadOrDelete.c)
 *     IopUnloadDriver @ 0x140539658 (IopUnloadDriver.c)
 *     NtMakeTemporaryObject @ 0x140539A98 (NtMakeTemporaryObject.c)
 *     IopLoadDriver @ 0x140572EA0 (IopLoadDriver.c)
 *     IoCreateDriver @ 0x1405900A4 (IoCreateDriver.c)
 *     ObShutdownSystem @ 0x1406AAF80 (ObShutdownSystem.c)
 *     IovpUnloadDriver @ 0x140735BD8 (IovpUnloadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x1407B91D4 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 */

void __stdcall ObMakeTemporaryObject(PVOID Object)
{
  __int64 v1; // r9
  struct _KTHREAD *CurrentThread; // rax
  char *v3; // rsi
  unsigned __int64 *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // rdi
  signed __int64 v9; // rax
  signed __int64 v10; // rcx
  unsigned __int64 v11; // rtt
  __int64 v12; // r8
  __int64 v13; // r9
  struct _KTHREAD *v14; // rdx
  __int16 v15; // ax

  CurrentThread = KeGetCurrentThread();
  v3 = (char *)Object - 48;
  --CurrentThread->KernelApcDisable;
  v4 = (unsigned __int64 *)((char *)Object - 32);
  v5 = KeAbPreAcquire((ULONG_PTR)v4, 0LL, 0LL, v1);
  v8 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v5, (ULONG_PTR)v4, v7);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v3[27] &= ~0x10u;
  _m_prefetchw(v4);
  v9 = *v4;
  v10 = *v4 - 16;
  if ( (*v4 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v10 = 0LL;
  if ( (v9 & 2) != 0 || (v11 = *v4, v11 != _InterlockedCompareExchange64((volatile signed __int64 *)v4, v10, v9)) )
    ExfReleasePushLock(v4, v6);
  KeAbPostRelease((ULONG_PTR)v4);
  v14 = KeGetCurrentThread();
  v15 = v14->KernelApcDisable + 1;
  v14->KernelApcDisable = v15;
  if ( !v15
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v14->ApcState.ApcListHead[0].Flink != &v14->152
    && !v14->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  ObpDeleteNameCheck((__int64)v3, (__int64)v14, v12, v13);
}
