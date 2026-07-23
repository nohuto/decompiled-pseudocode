/*
 * XREFs of KeComplementAffinityEx @ 0x1400D4BD0
 * Callers:
 *     KiGetDeepIdleProcessors @ 0x1400823D8 (KiGetDeepIdleProcessors.c)
 *     PpmParkSteerInterrupts @ 0x1400D58E0 (PpmParkSteerInterrupts.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeComplementAffinityEx(__int64 a1, unsigned __int16 *a2)
{
  unsigned int i; // eax
  __int64 v4; // r8
  __int64 result; // rax
  __int64 v6; // rcx

  for ( i = 0; i < *a2; *(_QWORD *)(8 * v4 + a1 + 8) = ~*(_QWORD *)&a2[4 * v4 + 4] )
    v4 = i++;
  for ( ; i < a2[1]; *(_QWORD *)(a1 + 8 * v6 + 8) = -1LL )
    v6 = i++;
  *(_DWORD *)(a1 + 4) = 0;
  *(_WORD *)a1 = a2[1];
  result = a2[1];
  *(_WORD *)(a1 + 2) = result;
  return result;
}
