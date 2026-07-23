/*
 * XREFs of PfSnSectionInfoCleanupWorkItem @ 0x1404ED640
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PfSnCleanupPrefetchSectionInfo @ 0x1404ED574 (PfSnCleanupPrefetchSectionInfo.c)
 *     PsSetCurrentThreadPrefetching @ 0x1404EDBEC (PsSetCurrentThreadPrefetching.c)
 */

void __fastcall PfSnSectionInfoCleanupWorkItem(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rsi
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int32 v9; // eax
  __int64 v10; // rdi
  void *v11; // rcx
  __int64 v12; // rax

  v1 = *(_QWORD *)(a1 + 32);
  v2 = *(_QWORD **)(v1 + 8);
  v3 = v2[8];
  v4 = v2[9];
  PsSetCurrentThreadPrefetching(1u);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  while ( 1 )
  {
    v9 = _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 28), 1u);
    if ( v9 >= *(_DWORD *)(v1 + 32) )
      break;
    v10 = v9;
    v11 = *(void **)(v3 + 8LL * v9);
    if ( v11 )
      ExFreePoolWithTag(v11, 0);
    v12 = *(unsigned int *)(v4 + 4 * v10);
    if ( (int)v12 >= 0 )
      PfSnCleanupPrefetchSectionInfo((PVOID *)(v2[7] + 56 * v12), (__int64)v2, 1);
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v5, v6, v7);
  PsSetCurrentThreadPrefetching(0);
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)v1);
}
