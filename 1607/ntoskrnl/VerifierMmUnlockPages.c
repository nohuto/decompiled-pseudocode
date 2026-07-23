/*
 * XREFs of VerifierMmUnlockPages @ 0x14071C438
 * Callers:
 *     <none>
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x14070C318 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetAddToCounter @ 0x140710380 (ViTargetAddToCounter.c)
 */

__int64 __fastcall VerifierMmUnlockPages(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // cl
  __int16 v5; // di
  unsigned __int64 v6; // r9
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u && (MmVerifierData & 1) != 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0x78uLL, CurrentIrql, a1, 0LL);
  v5 = *(_WORD *)(a1 + 10);
  if ( (v5 & 2) == 0 && (MmVerifierData & 1) != 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0x7CuLL, a1, v5, 0LL);
  if ( (unsigned int)VfVerifyMode >= 3 && (v5 & 4) != 0 && (MmVerifierData & 1) != 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0x7DuLL, a1, v5, 0LL);
  if ( (v5 & 0x10) != 0 && (MmVerifierData & 1) != 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0xB4uLL, a1, v5, 16LL);
  if ( (v5 & 1) != 0 && (MmVerifierData & 0x1000) != 0 )
    ViTargetAddToCounter(retaddr, 168LL, 0xB0u, -(__int64)*(unsigned int *)(a1 + 40));
  v6 = -(__int64)*(unsigned int *)(a1 + 40);
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetAddToCounter(retaddr, 152LL, 0xA0u, v6);
  return pXdvMmUnlockPages(a1, a2, a3, v6);
}
