/*
 * XREFs of VerifierPortExAllocatePoolWithQuotaTag @ 0x14071A4B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     VerifierBugCheckIfAppropriate @ 0x14070C318 (VerifierBugCheckIfAppropriate.c)
 *     XdvExAllocatePoolInternal @ 0x14070CEAC (XdvExAllocatePoolInternal.c)
 */

__int64 __fastcall VerifierPortExAllocatePoolWithQuotaTag(int a1, int a2, int a3, int a4)
{
  int v8; // edi
  __int64 result; // rax

  if ( (MmVerifierData & 8) != 0 )
  {
    if ( KeGetCurrentThread()->ApcState.Process == PsIdleProcess )
      VerifierBugCheckIfAppropriate(0xC4u, 0x10AuLL, 0LL, 0LL, 0LL);
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 )
      VerifierBugCheckIfAppropriate(0xC4u, 0x10BuLL, 0LL, 0LL, 0LL);
  }
  if ( (a1 & 8) != 0 )
  {
    v8 = 0;
    a1 &= ~8u;
  }
  else
  {
    v8 = 1;
  }
  result = pXdvExAllocatePoolWithTagPriority(a1 | 0x80u, a2, a3, 32, a4, (__int64)VeAllocatePoolWithTagPriority);
  if ( !result && v8 == 1 )
    RtlRaiseStatus(-1073741670);
  return result;
}
