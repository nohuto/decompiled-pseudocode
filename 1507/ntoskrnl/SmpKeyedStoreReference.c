/*
 * XREFs of SmpKeyedStoreReference @ 0x14013FF18
 * Callers:
 *     SmpPageWrite @ 0x14013E380 (SmpPageWrite.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     SmpKeyedStoreEntryGet @ 0x1400F0084 (SmpKeyedStoreEntryGet.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall SmpKeyedStoreReference(unsigned __int64 *BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // esi
  __int64 v8; // rdi
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rbp
  struct _KTHREAD *v12; // rdx
  __int16 v13; // ax
  unsigned int v15; // esi
  __int64 v16; // r14
  struct _EX_RUNDOWN_REF *v17; // rdi
  unsigned __int64 v18; // rtt
  unsigned __int64 v19; // rtt
  __int64 v20; // [rsp+70h] [rbp+18h] BYREF

  v20 = a3;
  CurrentThread = KeGetCurrentThread();
  v5 = -1;
  --CurrentThread->KernelApcDisable;
  v8 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(BugCheckParameter2, v8, (ULONG_PTR)BugCheckParameter2, v9);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v10 = SmpKeyedStoreEntryGet((ULONG_PTR)BugCheckParameter2, &v20, 0, 1LL);
  v11 = v10;
  if ( v10 )
  {
    v15 = *(unsigned __int16 *)(v10 + 16);
    v16 = 176LL * (*(_WORD *)(v10 + 16) & 0x1F);
    v17 = (struct _EX_RUNDOWN_REF *)(v16 + a2);
    _m_prefetchw((const void *)(v16 + a2 + 8));
    v18 = *(_QWORD *)(v16 + a2 + 8) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v18 == _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + a2 + 8), v18 + 2, v18)
       || ExfAcquireRundownProtection(v17 + 1))
      && (*(_WORD *)(v16 + a2 + 24) & 0x7FF) != v15 >> 5 )
    {
      _m_prefetchw(&v17[1]);
      v19 = v17[1].Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v19 != _InterlockedCompareExchange64((volatile signed __int64 *)&v17[1], v19 - 2, v19) )
        ExfReleaseRundownProtection(v17 + 1);
    }
    v5 = *(unsigned __int16 *)(v11 + 16);
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  v12 = KeGetCurrentThread();
  v13 = v12->KernelApcDisable + 1;
  v12->KernelApcDisable = v13;
  if ( !v13
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v12->ApcState.ApcListHead[0].Flink != &v12->152
    && !v12->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v5;
}
