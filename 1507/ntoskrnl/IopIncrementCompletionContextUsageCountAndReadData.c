/*
 * XREFs of IopIncrementCompletionContextUsageCountAndReadData @ 0x1401F2578
 * Callers:
 *     IopCompleteRequest @ 0x14004A190 (IopCompleteRequest.c)
 *     IopXxxControlFile @ 0x14048DB80 (IopXxxControlFile.c)
 *     NtLockFile @ 0x1404A4FE4 (NtLockFile.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall IopIncrementCompletionContextUsageCountAndReadData(
        ULONG_PTR BugCheckParameter1,
        _BYTE *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  volatile signed __int32 *v5; // rbx
  signed __int64 BugCheckParameter4; // rbp
  unsigned __int8 CurrentIrql; // r13
  _QWORD *v11; // rdi
  __int64 result; // rax
  void *retaddr; // [rsp+58h] [rbp+0h]

  v5 = (volatile signed __int32 *)(BugCheckParameter1 + 184);
  BugCheckParameter4 = -1LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(BugCheckParameter1 + 184);
  }
  else if ( _interlockedbittestandset64(v5, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(BugCheckParameter1 + 184));
  }
  v11 = *(_QWORD **)(BugCheckParameter1 + 176);
  if ( v11 )
  {
    BugCheckParameter4 = v11[2];
    v11[2] = BugCheckParameter4 + 1;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v5, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v5, 0LL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( v11 )
  {
    *a2 = 1;
    *a3 = *v11;
    result = v11[1];
    *a4 = result;
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, BugCheckParameter1, *(_QWORD *)(BugCheckParameter1 + 176), 0x81uLL, BugCheckParameter4);
  }
  else
  {
    *a2 = 0;
    *a3 = 0LL;
    *a4 = 0LL;
  }
  return result;
}
