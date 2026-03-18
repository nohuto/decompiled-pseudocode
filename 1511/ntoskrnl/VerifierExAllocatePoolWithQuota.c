/*
 * XREFs of VerifierExAllocatePoolWithQuota @ 0x1406B62C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     VfCheckPoolType @ 0x1406B822C (VfCheckPoolType.c)
 *     VerifierBugCheckIfAppropriate @ 0x1406C028C (VerifierBugCheckIfAppropriate.c)
 *     XdvExAllocatePoolInternal @ 0x1406C0E14 (XdvExAllocatePoolInternal.c)
 */

__int64 __fastcall VerifierExAllocatePoolWithQuota(__int64 a1, int a2)
{
  int v3; // ebx
  int v4; // edi
  __int64 result; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = a1;
  VfCheckPoolType(a1, retaddr, 0LL);
  ++dword_1402E189C;
  if ( (MmVerifierData & 8) != 0 )
  {
    if ( KeGetCurrentThread()->ApcState.Process == PsIdleProcess )
      VerifierBugCheckIfAppropriate(196, 266, 0, 0, 0LL);
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 )
      VerifierBugCheckIfAppropriate(196, 267, 0, 0, 0LL);
  }
  if ( (v3 & 8) != 0 )
  {
    v4 = 0;
    v3 &= ~8u;
  }
  else
  {
    v4 = 1;
  }
  result = pXdvExAllocatePoolWithTagPriority(
             v3 | 0x80u,
             a2,
             1885434455,
             32,
             (_DWORD)retaddr,
             (__int64)VeAllocatePoolWithTagPriority);
  if ( !result && v4 == 1 )
    RtlRaiseStatus(-1073741670);
  return result;
}
