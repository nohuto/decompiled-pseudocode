/*
 * XREFs of ObMakeTemporaryObject @ 0x140494274
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x140003C9C (IopCompleteUnloadOrDelete.c)
 *     IoDeleteDevice @ 0x1400D0DC8 (IoDeleteDevice.c)
 *     IopLoadDriver @ 0x1403BB9F8 (IopLoadDriver.c)
 *     IopUnloadDriver @ 0x140493DE4 (IopUnloadDriver.c)
 *     NtMakeTemporaryObject @ 0x140494204 (NtMakeTemporaryObject.c)
 *     IoCreateDriver @ 0x140523034 (IoCreateDriver.c)
 *     ObShutdownSystem @ 0x14062D4D0 (ObShutdownSystem.c)
 *     IovpUnloadDriver @ 0x1406B58F4 (IovpUnloadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x14075210C (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 */

void __stdcall ObMakeTemporaryObject(PVOID Object)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v2; // rsi
  unsigned __int64 *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  signed __int64 v6; // rcx
  signed __int64 v7; // rax
  unsigned __int64 v8; // rtt

  CurrentThread = KeGetCurrentThread();
  v2 = (char *)Object - 48;
  --CurrentThread->KernelApcDisable;
  v3 = (unsigned __int64 *)((char *)Object - 32);
  v4 = KeAbPreAcquire((ULONG_PTR)v3, 0LL, 0LL);
  v5 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v4, (ULONG_PTR)v3);
  v6 = 0LL;
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  v2[27] &= ~0x10u;
  _m_prefetchw(v3);
  v7 = *v3;
  if ( (*v3 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v6 = v7 - 16;
  if ( (v7 & 2) != 0 || (v8 = *v3, v8 != _InterlockedCompareExchange64((volatile signed __int64 *)v3, v6, v7)) )
    ExfReleasePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  ObpDeleteNameCheck((__int64)v2);
}
