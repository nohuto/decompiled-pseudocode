/*
 * XREFs of ObpHandleRevocationBlockRemoveInsertedObject @ 0x14062DAAC
 * Callers:
 *     ObDestroyHandleRevocationBlock @ 0x14049B8E4 (ObDestroyHandleRevocationBlock.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x14049BF20 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObRevokeHandles @ 0x1404F464C (ObRevokeHandles.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
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
  __int64 v11; // rax
  __int64 v12; // rdi
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
      v11 = KeAbPreAcquire((ULONG_PTR)&a2[2], 0LL, 0LL);
      v12 = v11;
      if ( _interlockedbittestandset64((volatile signed __int32 *)p_Count, 0LL) )
        ExfAcquirePushLockExclusiveEx(p_Count, v11, (ULONG_PTR)p_Count);
      if ( v12 )
        *(_BYTE *)(v12 + 26) |= 1u;
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
    ExReleaseRundownProtection_0(a2 + 3);
    a1[2] = a3;
  }
}
