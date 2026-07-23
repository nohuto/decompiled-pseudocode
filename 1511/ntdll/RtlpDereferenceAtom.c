/*
 * XREFs of RtlpDereferenceAtom @ 0x180043AA8
 * Callers:
 *     RtlDeleteAtomFromAtomTable @ 0x180043A00 (RtlDeleteAtomFromAtomTable.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlpFreeAllAtom @ 0x1800438E8 (RtlpFreeAllAtom.c)
 */

char __fastcall RtlpDereferenceAtom(char *a1, char *a2, __int64 a3)
{
  __int64 v6; // rdx

  if ( (a2[2] & 1) != 0 )
    return 0;
  if ( (*(_WORD *)a2)-- != 1 )
    return 0;
  if ( a2 == a1 + 12 )
  {
    v6 = a3;
  }
  else
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a2);
    v6 = a3;
  }
  RtlpFreeAllAtom(a1, v6, a3);
  return 1;
}
