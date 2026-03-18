/*
 * XREFs of PopComputeDerivedHiberStats @ 0x1404F8608
 * Callers:
 *     PopDiagTracePerfTrackData @ 0x1404F80E0 (PopDiagTracePerfTrackData.c)
 *     PopDiagTraceHiberStats @ 0x1404F81FC (PopDiagTraceHiberStats.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PopComputeDerivedHiberStats(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 result; // rax

  *(_QWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 8) = 0LL;
  v4 = a1[51] + a1[52];
  v5 = *a1;
  v6 = (1000 * a2 * v4) >> 20;
  if ( v5 )
    *(_DWORD *)a3 = v6 / v5;
  else
    *(_DWORD *)a3 = 0;
  v7 = a1[4];
  if ( v7 )
    *(_DWORD *)(a3 + 8) = v6 / v7;
  else
    *(_DWORD *)(a3 + 8) = 0;
  v8 = a1[17];
  if ( v8 || a1[35] )
    *(_DWORD *)(a3 + 4) = v6 / (v8 + a1[35]);
  else
    *(_DWORD *)(a3 + 4) = 0;
  result = a1[18];
  if ( result || a1[34] )
  {
    result = v6 / (result + a1[34]);
    *(_DWORD *)(a3 + 12) = result;
  }
  else
  {
    *(_DWORD *)(a3 + 12) = 0;
  }
  return result;
}
