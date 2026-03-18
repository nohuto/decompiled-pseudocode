/*
 * XREFs of ObRevokeHandles @ 0x1404F464C
 * Callers:
 *     SepDeleteLogonSessionTrack @ 0x1404F4570 (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ObpHandleRevocationBlockRemoveInsertedObject @ 0x14062DAAC (ObpHandleRevocationBlockRemoveInsertedObject.c)
 */

__int64 __fastcall ObRevokeHandles(_QWORD **a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // r9
  __int64 v6; // rsi
  signed __int64 v7; // rbx
  _QWORD *v8; // rsi
  signed __int64 v9; // rax
  unsigned __int64 v10; // rtt
  _QWORD *v12; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (unsigned __int64 *)(a1 + 2);
  v4 = KeAbPreAcquire((ULONG_PTR)(a1 + 2), 0LL, 0LL);
  v6 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v4, (ULONG_PTR)v3);
  v7 = 0LL;
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  v8 = *a1;
  while ( v8 != a1 )
  {
    v12 = v8;
    LOBYTE(v5) = 1;
    v8 = (_QWORD *)*v8;
    ObpHandleRevocationBlockRemoveInsertedObject(v12, a1, 1LL, v5);
  }
  _m_prefetchw(v3);
  v9 = *v3;
  if ( (*v3 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v7 = v9 - 16;
  if ( (v9 & 2) != 0 || (v10 = *v3, v10 != _InterlockedCompareExchange64((volatile signed __int64 *)v3, v7, v9)) )
    ExfReleasePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
