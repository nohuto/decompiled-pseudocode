/*
 * XREFs of RtlpDereferenceAtom @ 0x180067CA8
 * Callers:
 *     RtlDeleteAtomFromAtomTable @ 0x180067C00 (RtlDeleteAtomFromAtomTable.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlpFreeAllAtom @ 0x180067AEC (RtlpFreeAllAtom.c)
 */

char __fastcall RtlpDereferenceAtom(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v7; // rdx

  if ( (*(_BYTE *)(a2 + 2) & 1) != 0 )
    return 0;
  if ( (*(_WORD *)a2)-- != 1 )
    return 0;
  if ( (_QWORD *)a2 == (_QWORD *)((char *)a1 + 12) )
  {
    v7 = a3;
  }
  else
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a2);
    v7 = a3;
  }
  RtlpFreeAllAtom(a1, v7, a3);
  return 1;
}
