/*
 * XREFs of DpiMiracastStartSessionRequestCallback @ 0x1C016EBD0
 * Callers:
 *     <none>
 * Callees:
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C0024AE0 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastTearDownAssociation @ 0x1C00256C4 (DpiMiracastTearDownAssociation.c)
 */

void __fastcall DpiMiracastStartSessionRequestCallback(_DWORD *a1, int *a2)
{
  __int64 v2; // rsi
  IRP *v5; // rcx

  v2 = *(_QWORD *)a1;
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(*(_QWORD *)a1 + 32LL);
  v5 = *(IRP **)(v2 + 304);
  *(_QWORD *)(v2 + 88) = KeGetCurrentThread();
  IoFreeIrp(v5);
  *(_QWORD *)(v2 + 304) = 0LL;
  *(_QWORD *)(v2 + 88) = 0LL;
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v2 + 32);
  if ( *a2 < 0 )
    DpiMiracastTearDownAssociation((char *)v2, a1[2], -2147483647, 1u, 0);
  DpiMiracastReleaseMiracastDeviceContext((int *)v2, v2);
  ExFreePoolWithTag(a1, 0);
}
