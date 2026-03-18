/*
 * XREFs of ObMakeTemporaryObject @ 0x1404EB310
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x14007F1AC (IopCompleteUnloadOrDelete.c)
 *     IoDeleteDevice @ 0x14007F30C (IoDeleteDevice.c)
 *     IopLoadDriver @ 0x14049E388 (IopLoadDriver.c)
 *     IopUnloadDriver @ 0x140544E28 (IopUnloadDriver.c)
 *     NtMakeTemporaryObject @ 0x14054A4E0 (NtMakeTemporaryObject.c)
 *     IoCreateDriver @ 0x140551384 (IoCreateDriver.c)
 *     ObShutdownSystem @ 0x1406655DC (ObShutdownSystem.c)
 *     IovpUnloadDriver @ 0x14070172C (IovpUnloadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x14079BB9C (IopInitializeBuiltinDriver.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C8620 (ExfReleasePushLock.c)
 */

void __stdcall ObMakeTemporaryObject(PVOID Object)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v2; // rsi
  unsigned __int64 *v3; // rbx
  _BYTE *v4; // rax
  _BYTE *v5; // rdi
  signed __int64 v6; // rcx
  signed __int64 v7; // rax
  unsigned __int64 v8; // rtt
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9

  CurrentThread = KeGetCurrentThread();
  v2 = (char *)Object - 48;
  --CurrentThread->KernelApcDisable;
  v3 = (unsigned __int64 *)((char *)Object - 32);
  v4 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v3, 0LL, 0);
  v5 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v4, (ULONG_PTR)v3);
  v6 = 0LL;
  if ( v5 )
    v5[26] |= 1u;
  v2[27] &= ~0x10u;
  _m_prefetchw(v3);
  v7 = *v3;
  if ( (*v3 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v6 = v7 - 16;
  if ( (v7 & 2) != 0 || (v8 = *v3, v8 != _InterlockedCompareExchange64((volatile signed __int64 *)v3, v6, v7)) )
    ExfReleasePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v9, v10, v11);
  ObpDeleteNameCheck((__int64)v2);
}
