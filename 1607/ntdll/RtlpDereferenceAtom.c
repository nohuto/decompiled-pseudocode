/*
 * XREFs of RtlpDereferenceAtom @ 0x180067C98
 * Callers:
 *     RtlDeleteAtomFromAtomTable @ 0x180067BF0 (RtlDeleteAtomFromAtomTable.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlpFreeAllAtom @ 0x180067ADC (RtlpFreeAllAtom.c)
 */

char __fastcall RtlpDereferenceAtom(char *a1, char *a2, __int64 a3)
{
  __int64 v7; // rdx

  if ( (a2[2] & 1) != 0 )
    return 0;
  if ( (*(_WORD *)a2)-- != 1 )
    return 0;
  if ( a2 == a1 + 12 )
  {
    v7 = a3;
  }
  else
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a2);
    v7 = a3;
  }
  RtlpFreeAllAtom(a1, v7, a3);
  return 1;
}
