/*
 * XREFs of RtlpAllocateAtomTableEntry @ 0x180044348
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x180043B0C (RtlAddAtomToAtomTableEx.c)
 * Callees:
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 */

_QWORD *__fastcall RtlpAllocateAtomTableEntry(unsigned int a1, _QWORD *a2)
{
  _QWORD *Heap; // rax
  _QWORD *v4; // rcx
  _WORD *v5; // rax

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, a1 + 20LL);
  v4 = Heap;
  if ( !Heap )
    return 0LL;
  *Heap = 0LL;
  v5 = (_WORD *)Heap + 6;
  *((_WORD *)v4 + 7) = 0;
  *v5 = 1;
  *a2 = v5;
  return v4;
}
