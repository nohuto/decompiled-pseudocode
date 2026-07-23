/*
 * XREFs of VerifierMmProbeAndLockProcessPages @ 0x14071C310
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     VerifierBugCheckIfAppropriate @ 0x14070C318 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetAddToCounter @ 0x140710380 (ViTargetAddToCounter.c)
 *     VfFaultsInjectResourceFailure @ 0x140710DF0 (VfFaultsInjectResourceFailure.c)
 */

unsigned __int64 __fastcall VerifierMmProbeAndLockProcessPages(ULONG_PTR a1, __int64 a2, char a3, unsigned int a4)
{
  unsigned __int8 CurrentIrql; // cl
  __int16 v9; // cx
  unsigned __int16 v10; // dx
  __int64 v11; // r8
  unsigned __int64 result; // rax
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u && (MmVerifierData & 1) != 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0x71uLL, CurrentIrql, a1, a2);
  v9 = 2071;
  if ( (unsigned int)VfVerifyMode < 3 )
    v9 = 2067;
  v10 = *(_WORD *)(a1 + 10);
  if ( (v10 & (unsigned __int16)v9) != 0 && (MmVerifierData & 1) != 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0xB1uLL, a1, (__int16)v10, (__int16)v10 & (unsigned __int64)v9);
  if ( (unsigned int)VfFaultsInjectResourceFailure(0) == 1 )
    RtlRaiseStatus(-1073741663);
  LOBYTE(v11) = a3;
  result = pXdvMmProbeAndLockProcessPages(a1, a2, v11, a4);
  if ( (MmVerifierData & 0x1000) != 0 )
    return ViTargetAddToCounter(retaddr, 152LL, 0xA0u, *(unsigned int *)(a1 + 40));
  return result;
}
