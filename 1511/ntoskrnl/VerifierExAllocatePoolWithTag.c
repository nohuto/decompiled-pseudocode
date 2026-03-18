/*
 * XREFs of VerifierExAllocatePoolWithTag @ 0x1406B64A4
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPoolType @ 0x1406B822C (VfCheckPoolType.c)
 *     XdvExAllocatePoolInternal @ 0x1406C0E14 (XdvExAllocatePoolInternal.c)
 */

__int64 __fastcall VerifierExAllocatePoolWithTag(__int64 a1, int a2, __int64 a3)
{
  int v4; // ebx
  int v5; // esi
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = a3;
  v5 = a1;
  VfCheckPoolType(a1, retaddr, a3);
  return pXdvExAllocatePoolWithTagPriority(
           v5 | 0x80u,
           a2,
           v4,
           32,
           (_DWORD)retaddr,
           (__int64)VeAllocatePoolWithTagPriority);
}
