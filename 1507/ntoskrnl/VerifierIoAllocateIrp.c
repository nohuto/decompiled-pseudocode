/*
 * XREFs of VerifierIoAllocateIrp @ 0x140739918
 * Callers:
 *     <none>
 * Callees:
 *     XdvIoAllocateIrp @ 0x14025AFF0 (XdvIoAllocateIrp.c)
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 *     VfFaultsInjectResourceFailure @ 0x14074657C (VfFaultsInjectResourceFailure.c)
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
