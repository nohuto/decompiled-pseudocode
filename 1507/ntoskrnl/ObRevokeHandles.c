/*
 * XREFs of ObRevokeHandles @ 0x140568AAC
 * Callers:
 *     SepDeleteLogonSessionTrack @ 0x14056899C (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ObpHandleRevocationBlockRemoveInsertedObject @ 0x1406AB630 (ObpHandleRevocationBlockRemoveInsertedObject.c)
 */

void __fastcall ObRevokeHandles(_QWORD **a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // rdi
  _QWORD *v11; // rdi
  signed __int64 v12; // rax
  signed __int64 v13; // rcx
  unsigned __int64 v14; // rtt
  struct _KTHREAD *v15; // rcx
  __int16 v16; // ax
  _QWORD *v17; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (unsigned __int64 *)(a1 + 2);
  v7 = KeAbPreAcquire((ULONG_PTR)(a1 + 2), 0LL, 0LL, a4);
  v10 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, v7, (ULONG_PTR)v6, v9);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  v11 = *a1;
  while ( v11 != a1 )
  {
    v17 = v11;
    LOBYTE(v9) = 1;
    v11 = (_QWORD *)*v11;
    ObpHandleRevocationBlockRemoveInsertedObject(v17, a1, 1LL, v9);
  }
  _m_prefetchw(v6);
  v12 = *v6;
  v13 = *v6 - 16;
  if ( (*v6 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v13 = 0LL;
  if ( (v12 & 2) != 0 || (v14 = *v6, v14 != _InterlockedCompareExchange64((volatile signed __int64 *)v6, v13, v12)) )
    ExfReleasePushLock(v6, v8);
  KeAbPostRelease((ULONG_PTR)v6);
  v15 = KeGetCurrentThread();
  v16 = v15->KernelApcDisable + 1;
  v15->KernelApcDisable = v16;
  if ( !v16
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v15->ApcState.ApcListHead[0].Flink != &v15->152
    && !v15->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
