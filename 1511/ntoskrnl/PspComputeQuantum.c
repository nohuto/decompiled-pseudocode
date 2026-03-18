/*
 * XREFs of PspComputeQuantum @ 0x14044F844
 * Callers:
 *     PspComputeQuantumAndPriority @ 0x14044F79C (PspComputeQuantumAndPriority.c)
 *     PsChangeQuantumTable @ 0x14050B020 (PsChangeQuantumTable.c)
 * Callees:
 *     <none>
 */

char __fastcall PspComputeQuantum(__int64 a1, char a2)
{
  __int64 v2; // rcx
  __int64 v4; // rax

  if ( *(_BYTE *)(a1 + 1119) == 1 )
    return 6;
  v2 = *(_QWORD *)(a1 + 944);
  if ( !v2 || !PspUseJobSchedulingClasses )
    return *((_BYTE *)&PspForegroundQuantum + (PsPrioritySeparation & (unsigned int)-(a2 != 0)));
  v4 = *(unsigned int *)(v2 + 860);
  if ( (unsigned int)v4 >= 0xA )
    v4 = *(unsigned int *)(v2 + 484);
  return *((_BYTE *)PspJobSchedulingClasses + v4);
}
