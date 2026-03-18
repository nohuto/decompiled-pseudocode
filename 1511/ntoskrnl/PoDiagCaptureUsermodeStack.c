/*
 * XREFs of PoDiagCaptureUsermodeStack @ 0x1404B50FC
 * Callers:
 *     NtSetTimerResolution @ 0x1404B4EBC (NtSetTimerResolution.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x140026150 (RtlWalkFrameChain.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

PVOID *PoDiagCaptureUsermodeStack()
{
  PVOID *PoolWithTag; // rax
  PVOID *v1; // rbx
  ULONG v2; // eax

  PoolWithTag = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x108uLL, 0x50455654u);
  v1 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x108uLL);
    v2 = RtlWalkFrameChain(v1 + 1, 0x20u, 1u);
    if ( v2 )
    {
      *(_DWORD *)v1 = v2;
    }
    else
    {
      ExFreePoolWithTag(v1, 0x50455654u);
      return 0LL;
    }
  }
  return v1;
}
