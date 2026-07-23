/*
 * XREFs of VerifierMmUnmapIoSpace @ 0x14071C56C
 * Callers:
 *     <none>
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x14070C318 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetAddToCounter @ 0x140710380 (ViTargetAddToCounter.c)
 */

__int64 __fastcall VerifierMmUnmapIoSpace(ULONG_PTR a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // cl
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u && (MmVerifierData & 1) != 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0x7BuLL, CurrentIrql, a1, a2);
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetAddToCounter(retaddr, 184LL, 0xC0u, -a2);
  return pXdvMmUnmapIoSpace(a1, a2);
}
