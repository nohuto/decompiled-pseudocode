/*
 * XREFs of VerifierMmProbeAndLockPages @ 0x140753BF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     MmProbeAndLockPages @ 0x140034050 (MmProbeAndLockPages.c)
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetAddToCounter @ 0x140745B48 (ViTargetAddToCounter.c)
 *     VfFaultsInjectResourceFailure @ 0x14074657C (VfFaultsInjectResourceFailure.c)
 */

void __fastcall VerifierMmProbeAndLockPages(struct _MDL *a1, KPROCESSOR_MODE a2, LOCK_OPERATION a3)
{
  unsigned __int8 CurrentIrql; // cl
  __int16 v7; // ax
  CSHORT MdlFlags; // dx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    VerifierBugCheckIfAppropriate(0xC4u, 0x70uLL, CurrentIrql, (ULONG_PTR)a1, a2);
  v7 = 2071;
  if ( (unsigned int)VfVerifyMode < 3 )
    v7 = 2067;
  MdlFlags = a1->MdlFlags;
  if ( ((unsigned __int16)MdlFlags & (unsigned __int16)v7) != 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0xB0uLL, (ULONG_PTR)a1, MdlFlags, MdlFlags & (unsigned __int64)v7);
  if ( (unsigned int)VfFaultsInjectResourceFailure(0) == 1 )
    RtlRaiseStatus(-1073741663);
  pXdvMmProbeAndLockPages(a1, a2, a3);
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetAddToCounter(retaddr, 152LL, 0xA0u, a1->ByteCount);
}
