/*
 * XREFs of ObDestroyHandleRevocationBlock @ 0x1404C7F44
 * Callers:
 *     SepDeReferenceLogonSession @ 0x1404C7CF8 (SepDeReferenceLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x1405335D4 (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     ObpHandleRevocationBlockRemoveInsertedObject @ 0x140665C9C (ObpHandleRevocationBlockRemoveInsertedObject.c)
 */

void __fastcall ObDestroyHandleRevocationBlock(struct _EX_RUNDOWN_REF *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *p_Count; // rdi
  _BYTE *v4; // rax
  __int64 v5; // r9
  _BYTE *v6; // rsi
  signed __int64 v7; // rbx
  struct _EX_RUNDOWN_REF *Count; // rsi
  signed __int64 v9; // rax
  unsigned __int64 v10; // rtt
  struct _EX_RUNDOWN_REF *v11; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  p_Count = &a1[2].Count;
  v4 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&a1[2], 0LL, 0);
  v6 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)p_Count, 0LL) )
    ExfAcquirePushLockExclusiveEx(p_Count, v4, (ULONG_PTR)p_Count);
  v7 = 0LL;
  if ( v6 )
    v6[26] |= 1u;
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
