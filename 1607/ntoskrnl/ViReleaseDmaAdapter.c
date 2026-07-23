/*
 * XREFs of ViReleaseDmaAdapter @ 0x14070A27C
 * Callers:
 *     VfGetDmaAdapter @ 0x140707458 (VfGetDmaAdapter.c)
 *     VfPutDmaAdapter @ 0x14070807C (VfPutDmaAdapter.c)
 *     VfIoDeleteDevice @ 0x14070D840 (VfIoDeleteDevice.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     MmFreeContiguousMemory @ 0x14009A3B8 (MmFreeContiguousMemory.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     VfReportIssueWithOptions @ 0x140223370 (VfReportIssueWithOptions.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ViHalPreprocessOptions @ 0x140709AEC (ViHalPreprocessOptions.c)
 */

void __fastcall ViReleaseDmaAdapter(ULONG_PTR a1)
{
  _QWORD *v1; // r14
  KSPIN_LOCK *v2; // rbx
  KIRQL v4; // al
  PVOID *v5; // rbp
  PVOID *v6; // rbx
  __int64 v7; // rsi
  LONG_PTR v8; // rax
  int v9; // ebx

  v1 = *(_QWORD **)(a1 + 16);
  v2 = (KSPIN_LOCK *)(a1 + 280);
  v1[1] = *(_QWORD *)(a1 + 48);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 280));
  v5 = *(PVOID **)(a1 + 264);
  *(_QWORD *)(a1 + 264) = 0LL;
  KeReleaseSpinLock(v2, v4);
  if ( v5 )
  {
    v6 = v5;
    v7 = 32LL;
    do
    {
      if ( *v6 )
        MmFreeContiguousMemory(*v6);
      ++v6;
      --v7;
    }
    while ( v7 );
    ExFreePoolWithTag(v5, 0);
  }
  v8 = ObfDereferenceObject(v1);
  v9 = v8;
  if ( *(int *)(a1 + 36) > 0 && v8 && (v8 != 1 || !*(_BYTE *)(a1 + 34)) )
  {
    ViHalPreprocessOptions(
      &byte_1402F99B8,
      "Too many outstanding reference counts (%x) for adapter %p",
      17LL,
      v8,
      (__int64)v1,
      a1);
    VfReportIssueWithOptions(230, 17, v9, (int)v1, a1, &byte_1402F99B8);
  }
  ExFreePoolWithTag((PVOID)a1, 0);
}
