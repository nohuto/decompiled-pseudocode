/*
 * XREFs of VerifierExAllocateCacheAwareRundownProtection @ 0x14071A1F8
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPoolType @ 0x1407042E0 (VfCheckPoolType.c)
 */

__int64 __fastcall VerifierExAllocateCacheAwareRundownProtection(unsigned int a1, unsigned int a2)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  VfCheckPoolType(a1, retaddr, a2);
  return pXdvExAllocateCacheAwareRundownProtection(a1, a2);
}
