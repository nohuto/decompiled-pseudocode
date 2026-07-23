/*
 * XREFs of VerifierIoAllocateIrp @ 0x1407054B8
 * Callers:
 *     <none>
 * Callees:
 *     XdvIoAllocateIrp @ 0x14022323C (XdvIoAllocateIrp.c)
 *     VerifierBugCheckIfAppropriate @ 0x14070C318 (VerifierBugCheckIfAppropriate.c)
 *     VfFaultsInjectResourceFailure @ 0x140710DF0 (VfFaultsInjectResourceFailure.c)
 */

__int64 __fastcall VerifierIoAllocateIrp(char a1, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 && (MmVerifierData & 8) != 0 )
  {
    if ( KeGetCurrentThread()->ApcState.Process == PsIdleProcess )
      VerifierBugCheckIfAppropriate(196, 266, 0, 0, 0LL);
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 )
      VerifierBugCheckIfAppropriate(196, 267, 0, 0, 0LL);
  }
  if ( (unsigned int)VfFaultsInjectResourceFailure(0LL) )
    return 0LL;
  LOBYTE(v5) = a2;
  LOBYTE(v4) = a1;
  return pXdvIoAllocateIrp(0LL, v4, v5, retaddr, (__int64 (*)(void))IovAllocateIrp);
}
