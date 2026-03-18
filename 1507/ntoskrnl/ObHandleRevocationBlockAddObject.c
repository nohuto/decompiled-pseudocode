/*
 * XREFs of ObHandleRevocationBlockAddObject @ 0x1406AB480
 * Callers:
 *     ObpCreateHandle @ 0x140492D10 (ObpCreateHandle.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 */

__int64 __fastcall ObHandleRevocationBlockAddObject(struct _EX_RUNDOWN_REF *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // r14d
  __int64 v6; // rbx
  struct _EX_RUNDOWN_REF *v7; // rsi
  unsigned __int64 v8; // rtt
  BOOLEAN v9; // r12
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // r15
  struct _EX_RUNDOWN_REF **Count; // rax
  signed __int64 v17; // rax
  signed __int64 v18; // rcx
  signed __int64 v19; // rtt
  struct _KTHREAD *v20; // rcx
  __int16 v21; // ax
  unsigned __int64 v22; // rtt

  v5 = 0;
  if ( (*(_BYTE *)(a2 - 48 + 26) & 0x40) != 0 )
    v6 = a2 - 48 - ObpInfoMaskToOffset[*(_BYTE *)(a2 - 48 + 26) & 0x7F];
  else
    v6 = 0LL;
  if ( v6 )
  {
    v7 = a1 + 3;
    _m_prefetchw(&a1[3]);
    v8 = a1[3].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v8 == _InterlockedCompareExchange64((volatile signed __int64 *)&a1[3], v8 + 2, v8) )
      v9 = 1;
    else
      v9 = ExfAcquireRundownProtection(a1 + 3);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v11 = (signed __int64 *)&a1[2];
    v12 = KeAbPreAcquire((ULONG_PTR)&a1[2], 0LL, 0LL, a4);
    v15 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&a1[2], 0LL) )
      ExfAcquirePushLockExclusiveEx(&a1[2].Count, v12, (ULONG_PTR)&a1[2], v14);
    if ( v15 )
      *(_BYTE *)(v15 + 26) |= 1u;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 16), (signed __int64)a1, 0LL) )
    {
      v5 = -1073741823;
    }
    else
    {
      Count = (struct _EX_RUNDOWN_REF **)a1[1].Count;
      *(_QWORD *)v6 = a1;
      *(_QWORD *)(v6 + 8) = Count;
      if ( *Count != a1 )
        __fastfail(3u);
      *Count = (struct _EX_RUNDOWN_REF *)v6;
      a1[1].Count = v6;
    }
    _m_prefetchw(v11);
    v17 = *v11;
    v18 = *v11 - 16;
    if ( (*v11 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v18 = 0LL;
    if ( (v17 & 2) != 0 || (v19 = *v11, v19 != _InterlockedCompareExchange64(v11, v18, v17)) )
      ExfReleasePushLock(&a1[2].Count, v13);
    KeAbPostRelease((ULONG_PTR)&a1[2]);
    v20 = KeGetCurrentThread();
    v21 = v20->KernelApcDisable + 1;
    v20->KernelApcDisable = v21;
    if ( !v21
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v20->ApcState.ApcListHead[0].Flink != &v20->152
      && !v20->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( v5 < 0 )
    {
      if ( v9 )
      {
        _m_prefetchw(v7);
        v22 = v7->Count & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v22 != _InterlockedCompareExchange64((volatile signed __int64 *)v7, v22 - 2, v22) )
          ExfReleaseRundownProtection(a1 + 3);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v5;
}
