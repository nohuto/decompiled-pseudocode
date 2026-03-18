/*
 * XREFs of WdipSemAllocatePool @ 0x140580394
 * Callers:
 *     WdipSemFastAllocate @ 0x1405525E0 (WdipSemFastAllocate.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall WdipSemAllocatePool(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // edi
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r9
  signed __int8 v9; // cf
  __int64 v10; // rbx
  int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rdx
  signed __int64 v14; // rcx
  ULONG_PTR v15; // rtt
  struct _KTHREAD *v16; // rdx
  __int16 v17; // ax
  PVOID *PoolWithTag; // rax
  PVOID **v20; // rcx

  CurrentThread = KeGetCurrentThread();
  v5 = (a1 + 15) & 0xFFFFFFF0;
  v6 = 0LL;
  --CurrentThread->KernelApcDisable;
  v7 = KeAbPreAcquire((ULONG_PTR)&qword_140356530, 0LL, 0LL, a4);
  v9 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140356530, 0LL);
  v10 = v7;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(&qword_140356530, v7, (ULONG_PTR)&qword_140356530, v8);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  v11 = dword_140356520;
  if ( v5 <= dword_140356520 )
  {
    v12 = qword_140356528;
LABEL_7:
    v6 = v12;
    v13 = v11 - v5;
    qword_140356528 = v5 + v12;
    dword_140356520 = v13;
    goto LABEL_8;
  }
  PoolWithTag = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x73494457u);
  if ( PoolWithTag )
  {
    v20 = (PVOID **)qword_140356518;
    *PoolWithTag = &WdipSemPool;
    PoolWithTag[1] = v20;
    if ( *v20 != &WdipSemPool )
      __fastfail(3u);
    *v20 = PoolWithTag;
    v11 = 4080;
    qword_140356518 = (__int64)PoolWithTag;
    v12 = (__int64)(PoolWithTag + 2);
    goto LABEL_7;
  }
LABEL_8:
  _m_prefetchw(&qword_140356530);
  v14 = qword_140356530 - 16;
  if ( (qword_140356530 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v14 = 0LL;
  if ( (qword_140356530 & 2) != 0
    || (v15 = qword_140356530,
        v15 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140356530, v14, qword_140356530)) )
  {
    ExfReleasePushLock(&qword_140356530, v13);
  }
  KeAbPostRelease((ULONG_PTR)&qword_140356530);
  v16 = KeGetCurrentThread();
  v17 = v16->KernelApcDisable + 1;
  v16->KernelApcDisable = v17;
  if ( !v17
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v16->ApcState.ApcListHead[0].Flink != &v16->152
    && !v16->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v6;
}
