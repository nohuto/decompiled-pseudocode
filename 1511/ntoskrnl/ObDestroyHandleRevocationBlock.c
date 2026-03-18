/*
 * XREFs of ObDestroyHandleRevocationBlock @ 0x14049B8E4
 * Callers:
 *     SepDeReferenceLogonSession @ 0x14049B694 (SepDeReferenceLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x1404F4570 (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ObpHandleRevocationBlockRemoveInsertedObject @ 0x14062DAAC (ObpHandleRevocationBlockRemoveInsertedObject.c)
 */

void __fastcall ObDestroyHandleRevocationBlock(struct _EX_RUNDOWN_REF *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *p_Count; // rdi
  __int64 v4; // rax
  __int64 v5; // r9
  __int64 v6; // rsi
  signed __int64 v7; // rbx
  struct _EX_RUNDOWN_REF *Count; // rsi
  signed __int64 v9; // rax
  unsigned __int64 v10; // rtt
  struct _EX_RUNDOWN_REF *v11; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  p_Count = &a1[2].Count;
  v4 = KeAbPreAcquire((ULONG_PTR)&a1[2], 0LL, 0LL);
  v6 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)p_Count, 0LL) )
    ExfAcquirePushLockExclusiveEx(p_Count, v4, (ULONG_PTR)p_Count);
  v7 = 0LL;
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  Count = (struct _EX_RUNDOWN_REF *)a1->Count;
  while ( Count != a1 )
  {
    v11 = Count;
    LOBYTE(v5) = 1;
    Count = (struct _EX_RUNDOWN_REF *)Count->Count;
    ObpHandleRevocationBlockRemoveInsertedObject(v11, a1, 0LL, v5);
  }
  _m_prefetchw(p_Count);
  v9 = *p_Count;
  if ( (*p_Count & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v7 = v9 - 16;
  if ( (v9 & 2) != 0
    || (v10 = *p_Count, v10 != _InterlockedCompareExchange64((volatile signed __int64 *)p_Count, v7, v9)) )
  {
    ExfReleasePushLock(p_Count);
  }
  KeAbPostRelease((ULONG_PTR)p_Count);
  KeLeaveCriticalRegion();
  ExWaitForRundownProtectionRelease(a1 + 3);
}
