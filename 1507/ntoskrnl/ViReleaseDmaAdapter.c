/*
 * XREFs of ViReleaseDmaAdapter @ 0x14073F00C
 * Callers:
 *     VfGetDmaAdapter @ 0x14073BD44 (VfGetDmaAdapter.c)
 *     VfPutDmaAdapter @ 0x14073C9BC (VfPutDmaAdapter.c)
 *     VfIoDeleteDevice @ 0x140742FD4 (VfIoDeleteDevice.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     MmFreeContiguousMemory @ 0x140114978 (MmFreeContiguousMemory.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     VfReportIssueWithOptions @ 0x14025B0C0 (VfReportIssueWithOptions.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ViHalPreprocessOptions @ 0x14073E7D0 (ViHalPreprocessOptions.c)
 */

void __fastcall ViReleaseDmaAdapter(ULONG_PTR a1)
{
  _QWORD *v1; // r14
  volatile signed __int32 *v2; // rdi
  unsigned __int8 CurrentIrql; // bp
  PVOID *v5; // rsi
  PVOID *v6; // rdi
  __int64 v7; // rbp
  LONG_PTR v8; // rax
  int v9; // edi
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v1 = *(_QWORD **)(a1 + 16);
  v2 = (volatile signed __int32 *)(a1 + 280);
  v1[1] = *(_QWORD *)(a1 + 48);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)(a1 + 280));
  }
  else if ( _interlockedbittestandset64(v2, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a1 + 280));
  }
  v5 = *(PVOID **)(a1 + 264);
  *(_QWORD *)(a1 + 264) = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)v2, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v2, 0LL);
  __writecr8(CurrentIrql);
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
      &byte_140323180,
      "Too many outstanding reference counts (%x) for adapter %p",
      17LL,
      v8,
      (__int64)v1,
      a1);
    VfReportIssueWithOptions(230, 17, v9, (int)v1, a1, &byte_140323180);
  }
  ExFreePoolWithTag((PVOID)a1, 0);
}
