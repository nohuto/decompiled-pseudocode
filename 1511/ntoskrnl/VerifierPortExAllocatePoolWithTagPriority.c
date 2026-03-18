/*
 * XREFs of VerifierPortExAllocatePoolWithTagPriority @ 0x1406CE4E8
 * Callers:
 *     <none>
 * Callees:
 *     XdvExAllocatePoolInternal @ 0x1406C0E14 (XdvExAllocatePoolInternal.c)
 */

__int64 __fastcall VerifierPortExAllocatePoolWithTagPriority(int a1, int a2, int a3, int a4, __int64 a5)
{
  return pXdvExAllocatePoolWithTagPriority(a1 | 0x80u, a2, a3, a4, a5, (__int64)VeAllocatePoolWithTagPriority);
}
