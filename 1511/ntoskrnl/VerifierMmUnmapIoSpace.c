/*
 * XREFs of VerifierMmUnmapIoSpace @ 0x1406D0414
 * Callers:
 *     <none>
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x1406C028C (VerifierBugCheckIfAppropriate.c)
 *     ViTargetAddToCounter @ 0x1406C4294 (ViTargetAddToCounter.c)
 */

void __fastcall VerifierMmUnmapIoSpace(void *a1, SIZE_T a2)
{
  unsigned __int8 CurrentIrql; // al
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    VerifierBugCheckIfAppropriate(0xC4u, 0x7BuLL, CurrentIrql, (ULONG_PTR)a1, a2);
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetAddToCounter(retaddr, 184LL, 0xC0u, -(__int64)a2);
  pXdvMmUnmapIoSpace(a1, a2);
}
