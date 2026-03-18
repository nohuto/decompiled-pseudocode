/*
 * XREFs of PfSnSectionInfoCleanupWorkItem @ 0x14047329C
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PfSnCleanupPrefetchSectionInfo @ 0x14042D2D8 (PfSnCleanupPrefetchSectionInfo.c)
 *     PsSetCurrentThreadPrefetching @ 0x1404738D4 (PsSetCurrentThreadPrefetching.c)
 */

void __fastcall PfSnSectionInfoCleanupWorkItem(__int64 a1)
{
  volatile signed __int32 *v1; // rbx
  _QWORD *v2; // rsi
  __int64 v3; // r15
  __int64 v4; // r14
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int32 i; // eax
  __int64 v7; // rdi
  void *v8; // rcx
  __int64 v9; // rax
  struct _KTHREAD *v10; // rcx
  __int16 v11; // ax
  unsigned __int64 v12; // rtt

  v1 = *(volatile signed __int32 **)(a1 + 32);
  v2 = (_QWORD *)*((_QWORD *)v1 + 1);
  v3 = v2[22];
  v4 = v2[23];
  PsSetCurrentThreadPrefetching(1u);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  for ( i = _InterlockedExchangeAdd(v1 + 7, 1u); i < *((_DWORD *)v1 + 8); i = _InterlockedExchangeAdd(v1 + 7, 1u) )
  {
    v7 = i;
    v8 = *(void **)(v3 + 8LL * i);
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
    v9 = *(unsigned int *)(v4 + 4 * v7);
    if ( (int)v9 >= 0 )
      PfSnCleanupPrefetchSectionInfo((PVOID *)(v2[21] + 56 * v9), (__int64)v2, 1);
  }
  v10 = KeGetCurrentThread();
  v11 = v10->KernelApcDisable + 1;
  v10->KernelApcDisable = v11;
  if ( !v11
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v10->ApcState.ApcListHead[0].Flink != &v10->152
    && !v10->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  PsSetCurrentThreadPrefetching(0);
  _m_prefetchw((const void *)v1);
  v12 = *(_QWORD *)v1 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v12 != _InterlockedCompareExchange64((volatile signed __int64 *)v1, v12 - 2, v12) )
    ExfReleaseRundownProtection((PEX_RUNDOWN_REF)v1);
}
