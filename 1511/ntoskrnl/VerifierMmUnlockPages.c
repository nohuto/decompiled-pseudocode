/*
 * XREFs of VerifierMmUnlockPages @ 0x1406D030C
 * Callers:
 *     <none>
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x1406C028C (VerifierBugCheckIfAppropriate.c)
 *     ViTargetAddToCounter @ 0x1406C4294 (ViTargetAddToCounter.c)
 */

void __fastcall VerifierMmUnlockPages(struct _MDL *a1)
{
  unsigned __int8 CurrentIrql; // al
  CSHORT MdlFlags; // bx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    VerifierBugCheckIfAppropriate(0xC4u, 0x78uLL, CurrentIrql, (ULONG_PTR)a1, 0LL);
  MdlFlags = a1->MdlFlags;
  if ( (MdlFlags & 2) == 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0x7CuLL, (ULONG_PTR)a1, MdlFlags, 0LL);
  if ( (unsigned int)VfVerifyMode >= 3 && (MdlFlags & 4) != 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0x7DuLL, (ULONG_PTR)a1, MdlFlags, 0LL);
  if ( (MdlFlags & 0x10) != 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0xB4uLL, (ULONG_PTR)a1, MdlFlags, 16LL);
  if ( (MdlFlags & 1) != 0 && (MmVerifierData & 0x1000) != 0 )
    ViTargetAddToCounter(retaddr, 168LL, 0xB0u, -(__int64)a1->ByteCount);
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetAddToCounter(retaddr, 152LL, 0xA0u, -(__int64)a1->ByteCount);
  pXdvMmUnlockPages(a1);
}
