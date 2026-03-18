/*
 * XREFs of VerifierMmProbeAndLockProcessPages @ 0x1406D01F8
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     MmProbeAndLockProcessPages @ 0x1404D8364 (MmProbeAndLockProcessPages.c)
 *     VerifierBugCheckIfAppropriate @ 0x1406C028C (VerifierBugCheckIfAppropriate.c)
 *     ViTargetAddToCounter @ 0x1406C4294 (ViTargetAddToCounter.c)
 *     VfFaultsInjectResourceFailure @ 0x1406C4D50 (VfFaultsInjectResourceFailure.c)
 */

void __fastcall VerifierMmProbeAndLockProcessPages(
        struct _MDL *a1,
        PEPROCESS Process,
        KPROCESSOR_MODE AccessMode,
        LOCK_OPERATION Operation)
{
  unsigned __int8 CurrentIrql; // al
  __int16 v9; // ax
  CSHORT MdlFlags; // dx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    VerifierBugCheckIfAppropriate(0xC4u, 0x71uLL, CurrentIrql, (ULONG_PTR)a1, (__int64)Process);
  v9 = 2071;
  if ( (unsigned int)VfVerifyMode < 3 )
    v9 = 2067;
  MdlFlags = a1->MdlFlags;
  if ( ((unsigned __int16)MdlFlags & (unsigned __int16)v9) != 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0xB1uLL, (ULONG_PTR)a1, MdlFlags, MdlFlags & (unsigned __int64)v9);
  if ( (unsigned int)VfFaultsInjectResourceFailure(0) == 1 )
    RtlRaiseStatus(-1073741663);
  pXdvMmProbeAndLockProcessPages(a1, Process, AccessMode, Operation);
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetAddToCounter(retaddr, 152LL, 0xA0u, a1->ByteCount);
}
