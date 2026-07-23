/*
 * XREFs of ObRevokeHandles @ 0x1405336B4
 * Callers:
 *     SepDeleteLogonSessionTrack @ 0x1405335D4 (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     ObpHandleRevocationBlockRemoveInsertedObject @ 0x140665C9C (ObpHandleRevocationBlockRemoveInsertedObject.c)
 */

__int64 __fastcall ObRevokeHandles(_QWORD **a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v3; // rdi
  _BYTE *v4; // rax
  __int64 v5; // r9
  _BYTE *v6; // rsi
  signed __int64 v7; // rbx
  _QWORD *v8; // rsi
  signed __int64 v9; // rax
  unsigned __int64 v10; // rtt
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v15; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (unsigned __int64 *)(a1 + 2);
  v4 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)(a1 + 2), 0LL, 0);
  v6 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v4, (ULONG_PTR)v3);
  v7 = 0LL;
  if ( v6 )
    v6[26] |= 1u;
  v8 = *a1;
  while ( v8 != a1 )
  {
    v15 = v8;
    LOBYTE(v5) = 1;
    v8 = (_QWORD *)*v8;
    ObpHandleRevocationBlockRemoveInsertedObject(v15, a1, 1LL, v5);
  }
  _m_prefetchw(v3);
  v9 = *v3;
  if ( (*v3 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v7 = v9 - 16;
  if ( (v9 & 2) != 0 || (v10 = *v3, v10 != _InterlockedCompareExchange64((volatile signed __int64 *)v3, v7, v9)) )
    ExfReleasePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v11, v12, v13);
}
