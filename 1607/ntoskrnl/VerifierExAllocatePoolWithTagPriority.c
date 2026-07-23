/*
 * XREFs of VerifierExAllocatePoolWithTagPriority @ 0x140702394
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPoolType @ 0x1407042E0 (VfCheckPoolType.c)
 *     XdvExAllocatePoolInternal @ 0x14070CEAC (XdvExAllocatePoolInternal.c)
 */

__int64 __fastcall VerifierExAllocatePoolWithTagPriority(__int64 a1, int a2, __int64 a3, int a4)
{
  int v6; // edi
  int v7; // ebp
  void *retaddr; // [rsp+38h] [rbp+0h]

  v6 = a3;
  v7 = a1;
  VfCheckPoolType(a1, retaddr, a3);
  return pXdvExAllocatePoolWithTagPriority(
           v7 | 0x80u,
           a2,
           v6,
           a4,
           (_DWORD)retaddr,
           (__int64)VeAllocatePoolWithTagPriority);
}
