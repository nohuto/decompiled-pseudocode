/*
 * XREFs of PfSnSectionInfoCleanupWorkItem @ 0x1404DA4D4
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PsSetCurrentThreadPrefetching @ 0x1404DAA78 (PsSetCurrentThreadPrefetching.c)
 *     PfSnCleanupPrefetchSectionInfo @ 0x1404DB164 (PfSnCleanupPrefetchSectionInfo.c)
 */

void __fastcall PfSnSectionInfoCleanupWorkItem(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rsi
  __int64 v3; // r15
  __int64 v4; // r14
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int32 v6; // eax
  __int64 v7; // rdi
  void *v8; // rcx
  __int64 v9; // rax

  v1 = *(_QWORD *)(a1 + 32);
  v2 = *(_QWORD **)(v1 + 8);
  v3 = v2[8];
  v4 = v2[9];
  PsSetCurrentThreadPrefetching(1u);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  while ( 1 )
  {
    v6 = _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 28), 1u);
    if ( v6 >= *(_DWORD *)(v1 + 32) )
      break;
    v7 = v6;
    v8 = *(void **)(v3 + 8LL * v6);
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
    v9 = *(unsigned int *)(v4 + 4 * v7);
    if ( (int)v9 >= 0 )
      PfSnCleanupPrefetchSectionInfo((void *)(v2[7] + 56 * v9));
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  PsSetCurrentThreadPrefetching(0);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v1);
}
