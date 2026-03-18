/*
 * XREFs of VerifierMmUnmapLockedPages @ 0x1406D0484
 * Callers:
 *     <none>
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x1406C028C (VerifierBugCheckIfAppropriate.c)
 *     ViTargetAddToCounter @ 0x1406C4294 (ViTargetAddToCounter.c)
 */

void __fastcall VerifierMmUnmapLockedPages(PVOID a1, struct _MDL *a2)
{
  unsigned __int8 CurrentIrql; // al
  CSHORT MdlFlags; // ax
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  if ( a1 <= MmHighestUserAddress )
  {
    if ( CurrentIrql > 1u )
      VerifierBugCheckIfAppropriate(0xC4u, 0x7AuLL, CurrentIrql, (ULONG_PTR)a1, (__int64)a2);
  }
  else if ( CurrentIrql > 2u )
  {
    VerifierBugCheckIfAppropriate(0xC4u, 0x79uLL, CurrentIrql, (ULONG_PTR)a1, (__int64)a2);
  }
  if ( (unsigned int)VfVerifyMode >= 3 && a1 > MmHighestUserAddress )
  {
    MdlFlags = a2->MdlFlags;
    if ( (MdlFlags & 1) == 0 )
      VerifierBugCheckIfAppropriate(0xC4u, 0xB6uLL, (ULONG_PTR)a2, MdlFlags, 1LL);
  }
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetAddToCounter(retaddr, 168LL, 0xB0u, -(__int64)a2->ByteCount);
  pXdvMmUnmapLockedPages(a1, a2);
}
