/*
 * XREFs of VerifierExAllocatePool @ 0x1406B6244
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPoolType @ 0x1406B822C (VfCheckPoolType.c)
 *     XdvExAllocatePoolInternal @ 0x1406C0E14 (XdvExAllocatePoolInternal.c)
 *     ViTargetIncrementCounter @ 0x1406C44AC (ViTargetIncrementCounter.c)
 */

__int64 __fastcall VerifierExAllocatePool(__int64 a1, int a2)
{
  int v3; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = a1;
  VfCheckPoolType(a1, retaddr, 0LL);
  ++dword_1402E189C;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 140LL);
  return pXdvExAllocatePoolWithTagPriority(
           v3 | 0x80u,
           a2,
           1885434455,
           32,
           (_DWORD)retaddr,
           (__int64)VeAllocatePoolWithTagPriority);
}
