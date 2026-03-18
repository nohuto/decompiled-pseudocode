/*
 * XREFs of VerifierPortIoAllocateIrp @ 0x1407057D0
 * Callers:
 *     <none>
 * Callees:
 *     XdvIoAllocateIrp @ 0x140223410 (XdvIoAllocateIrp.c)
 *     VerifierBugCheckIfAppropriate @ 0x14070C2E8 (VerifierBugCheckIfAppropriate.c)
 *     VfFaultsInjectResourceFailure @ 0x140710DF0 (VfFaultsInjectResourceFailure.c)
 */

__int64 __fastcall VerifierPortIoAllocateIrp(char a1, char a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8

  if ( a2 && (MmVerifierData & 8) != 0 )
  {
    if ( KeGetCurrentThread()->ApcState.Process == PsIdleProcess )
      VerifierBugCheckIfAppropriate(196, 266, 0, 0, 0LL);
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 )
      VerifierBugCheckIfAppropriate(196, 267, 0, 0, 0LL);
  }
  if ( (unsigned int)VfFaultsInjectResourceFailure(0LL) )
    return 0LL;
  LOBYTE(v7) = a2;
  LOBYTE(v6) = a1;
  return pXdvIoAllocateIrp(0LL, v6, v7, a3, (__int64 (*)(void))IovAllocateIrp);
}
