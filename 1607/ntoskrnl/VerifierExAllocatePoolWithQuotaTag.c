/*
 * XREFs of VerifierExAllocatePoolWithQuotaTag @ 0x1407022A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     VfCheckPoolType @ 0x1407042E0 (VfCheckPoolType.c)
 *     VerifierBugCheckIfAppropriate @ 0x14070C318 (VerifierBugCheckIfAppropriate.c)
 *     XdvExAllocatePoolInternal @ 0x14070CEAC (XdvExAllocatePoolInternal.c)
 */

__int64 __fastcall VerifierExAllocatePoolWithQuotaTag(__int64 a1, int a2, __int64 a3)
{
  int v4; // esi
  int v5; // ebx
  int v6; // edi
  __int64 result; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = a3;
  v5 = a1;
  VfCheckPoolType(a1, retaddr, a3);
  if ( (MmVerifierData & 8) != 0 )
  {
    if ( KeGetCurrentThread()->ApcState.Process == PsIdleProcess )
      VerifierBugCheckIfAppropriate(196, 266, 0, 0, 0LL);
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 )
      VerifierBugCheckIfAppropriate(196, 267, 0, 0, 0LL);
  }
  if ( (v5 & 8) != 0 )
  {
    v6 = 0;
    v5 &= ~8u;
  }
  else
  {
    v6 = 1;
  }
  result = pXdvExAllocatePoolWithTagPriority(
             v5 | 0x80u,
             a2,
             v4,
             32,
             (_DWORD)retaddr,
             (__int64)VeAllocatePoolWithTagPriority);
  if ( !result && v6 == 1 )
    RtlRaiseStatus(-1073741670);
  return result;
}
