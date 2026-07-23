/*
 * XREFs of ObpHandleRevocationBlockRemoveInsertedObject @ 0x140665C9C
 * Callers:
 *     ObpHandleRevocationBlockRemoveObject @ 0x1404A5760 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObDestroyHandleRevocationBlock @ 0x1404C7F44 (ObDestroyHandleRevocationBlock.c)
 *     ObRevokeHandles @ 0x1405336B4 (ObRevokeHandles.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 */

void __fastcall ObpHandleRevocationBlockRemoveInsertedObject(
        __int64 *a1,
        struct _EX_RUNDOWN_REF *a2,
        __int64 a3,
        char a4)
{
  signed __int64 v8; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *p_Count; // rbp
  _BYTE *v11; // rax
  _BYTE *v12; // rdi
  __int64 *v13; // rcx
  __int64 **v14; // rax
  signed __int64 Count; // rax
  unsigned __int64 v16; // rtt

  if ( a2 == (struct _EX_RUNDOWN_REF *)_InterlockedCompareExchange64(a1 + 2, 2LL, (signed __int64)a2) )
  {
    v8 = 0LL;
    if ( !a4 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      p_Count = &a2[2].Count;
      v11 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&a2[2], 0LL, 0);
      v12 = v11;
      if ( _interlockedbittestandset64((volatile signed __int32 *)p_Count, 0LL) )
        ExfAcquirePushLockExclusiveEx(p_Count, v11, (ULONG_PTR)p_Count);
      if ( v12 )
        v12[26] |= 1u;
    }
    v13 = (__int64 *)*a1;
    v14 = (__int64 **)a1[1];
    if ( *(__int64 **)(*a1 + 8) != a1 || *v14 != a1 )
      __fastfail(3u);
    *v14 = v13;
    v13[1] = (__int64)v14;
    if ( !a4 )
    {
      _m_prefetchw(&a2[2]);
      Count = a2[2].Count;
      if ( (Count & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v8 = Count - 16;
      if ( (Count & 2) != 0
        || (v16 = a2[2].Count, v16 != _InterlockedCompareExchange64((volatile signed __int64 *)&a2[2], v8, Count)) )
      {
        ExfReleasePushLock(&a2[2].Count);
      }
      KeAbPostRelease((ULONG_PTR)&a2[2]);
      KeLeaveCriticalRegion();
    }
    ExReleaseRundownProtection(a2 + 3);
    a1[2] = a3;
  }
}
