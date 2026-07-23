/*
 * XREFs of ObMakeTemporaryObject @ 0x1404CD494
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x14007F22C (IopCompleteUnloadOrDelete.c)
 *     IoDeleteDevice @ 0x14007F38C (IoDeleteDevice.c)
 *     IopLoadDriver @ 0x140516794 (IopLoadDriver.c)
 *     IopUnloadDriver @ 0x140545368 (IopUnloadDriver.c)
 *     NtMakeTemporaryObject @ 0x14054AA20 (NtMakeTemporaryObject.c)
 *     IoCreateDriver @ 0x1405518C4 (IoCreateDriver.c)
 *     ObShutdownSystem @ 0x1406656C0 (ObShutdownSystem.c)
 *     IovpUnloadDriver @ 0x14070175C (IovpUnloadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x14079BB9C (IopInitializeBuiltinDriver.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
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
