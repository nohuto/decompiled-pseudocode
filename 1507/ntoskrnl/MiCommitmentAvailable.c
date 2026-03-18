/*
 * XREFs of MiCommitmentAvailable @ 0x1400DEFAC
 * Callers:
 *     MiPrefetchVirtualMemory @ 0x1400DEBC8 (MiPrefetchVirtualMemory.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiCommitmentAvailable(__int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rdx

  v1 = *(_QWORD *)(a1 + 5736);
  v2 = *(_QWORD *)(a1 + 5576);
  if ( v2 > v1 )
    return 0LL;
  else
    return v1 - v2;
}
