/*
 * XREFs of WdipSemAllocatePool @ 0x140540620
 * Callers:
 *     WdipSemFastAllocate @ 0x1404C70F0 (WdipSemFastAllocate.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall WdipSemAllocatePool(int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v2; // rbx
  unsigned int v3; // esi
  __int64 v4; // rbp
  _BYTE *v5; // rax
  signed __int8 v6; // cf
  _BYTE *v7; // rdi
  int v8; // edx
  __int64 v9; // rcx
  ULONG_PTR v10; // rtt
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *PoolWithTag; // rax
  _QWORD *v16; // rcx

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  v3 = (a1 + 15) & 0xFFFFFFF0;
  v4 = 0LL;
  --CurrentThread->KernelApcDisable;
  v5 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_140328B00, 0LL, 0);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140328B00, 0LL);
  v7 = v5;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(&qword_140328B00, v5, (ULONG_PTR)&qword_140328B00);
  if ( v7 )
    v7[26] |= 1u;
  v8 = dword_140328AF0;
  if ( v3 <= dword_140328AF0 )
  {
    v9 = qword_140328AF8;
LABEL_7:
    v4 = v9;
    qword_140328AF8 = v3 + v9;
    dword_140328AF0 = v8 - v3;
    goto LABEL_8;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x73494457u);
  if ( PoolWithTag )
  {
    v16 = (_QWORD *)qword_140328AE8;
    if ( *(PVOID **)qword_140328AE8 != &WdipSemPool )
      __fastfail(3u);
    *PoolWithTag = &WdipSemPool;
    v8 = 4080;
    PoolWithTag[1] = v16;
    *v16 = PoolWithTag;
    v9 = (__int64)(PoolWithTag + 2);
    qword_140328AE8 = (__int64)PoolWithTag;
    goto LABEL_7;
  }
LABEL_8:
  _m_prefetchw(&qword_140328B00);
  if ( (qword_140328B00 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v2 = qword_140328B00 - 16;
  if ( (qword_140328B00 & 2) != 0
    || (v10 = qword_140328B00,
        v10 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140328B00, v2, qword_140328B00)) )
  {
    ExfReleasePushLock(&qword_140328B00);
  }
  KeAbPostRelease((ULONG_PTR)&qword_140328B00);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v11, v12, v13);
  return v4;
}
