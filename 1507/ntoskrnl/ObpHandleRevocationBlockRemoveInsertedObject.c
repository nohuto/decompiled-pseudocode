/*
 * XREFs of ObpHandleRevocationBlockRemoveInsertedObject @ 0x1406AB630
 * Callers:
 *     ObpHandleRevocationBlockRemoveObject @ 0x140524370 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObDestroyHandleRevocationBlock @ 0x14052E61C (ObDestroyHandleRevocationBlock.c)
 *     ObRevokeHandles @ 0x140568AAC (ObRevokeHandles.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 */

void __fastcall ObpHandleRevocationBlockRemoveInsertedObject(
        __int64 *a1,
        struct _EX_RUNDOWN_REF *a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // bp
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *p_Count; // rsi
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 *v13; // rcx
  __int64 **v14; // rax
  signed __int64 Count; // rax
  signed __int64 v16; // rcx
  unsigned __int64 v17; // rtt
  struct _KTHREAD *v18; // rcx
  __int16 v19; // ax
  unsigned __int64 v20; // rtt

  v4 = a4;
  if ( a2 == (struct _EX_RUNDOWN_REF *)_InterlockedCompareExchange64(a1 + 2, 2LL, (signed __int64)a2) )
  {
    if ( !(_BYTE)a4 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      p_Count = &a2[2].Count;
      v10 = KeAbPreAcquire((ULONG_PTR)&a2[2], 0LL, 0LL, a4);
      v12 = v10;
      if ( _interlockedbittestandset64((volatile signed __int32 *)p_Count, 0LL) )
        ExfAcquirePushLockExclusiveEx(p_Count, v10, (ULONG_PTR)p_Count, v11);
      if ( v12 )
        *(_BYTE *)(v12 + 26) |= 1u;
    }
    v13 = (__int64 *)*a1;
    v14 = (__int64 **)a1[1];
    if ( *(__int64 **)(*a1 + 8) != a1 || *v14 != a1 )
      __fastfail(3u);
    *v14 = v13;
    v13[1] = (__int64)v14;
    if ( !v4 )
    {
      _m_prefetchw(&a2[2]);
      Count = a2[2].Count;
      v16 = Count - 16;
      if ( (Count & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v16 = 0LL;
      if ( (Count & 2) != 0
        || (v17 = a2[2].Count, v17 != _InterlockedCompareExchange64((volatile signed __int64 *)&a2[2], v16, Count)) )
      {
        ExfReleasePushLock(&a2[2].Count, (__int64)a2);
      }
      KeAbPostRelease((ULONG_PTR)&a2[2]);
      v18 = KeGetCurrentThread();
      v19 = v18->KernelApcDisable + 1;
      v18->KernelApcDisable = v19;
      if ( !v19
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v18->ApcState.ApcListHead[0].Flink != &v18->152
        && !v18->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    _m_prefetchw(&a2[3]);
    v20 = a2[3].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v20 != _InterlockedCompareExchange64((volatile signed __int64 *)&a2[3], v20 - 2, v20) )
      ExfReleaseRundownProtection(a2 + 3);
    a1[2] = a3;
  }
}
