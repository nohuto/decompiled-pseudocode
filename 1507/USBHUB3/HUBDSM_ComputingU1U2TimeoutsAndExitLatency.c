/*
 * XREFs of HUBDSM_ComputingU1U2TimeoutsAndExitLatency @ 0x1C001B1C0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_ComputeU1Timeout @ 0x1C00249C0 (HUBMISC_ComputeU1Timeout.c)
 *     HUBMISC_ComputeU2Timeout @ 0x1C0024BE0 (HUBMISC_ComputeU2Timeout.c)
 */

__int64 __fastcall HUBDSM_ComputingU1U2TimeoutsAndExitLatency(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // r8
  unsigned int v3; // edx
  char v4; // cl
  bool v5; // r8
  char v6; // r9
  int v7; // eax
  unsigned int v8; // edx
  int v9; // ecx
  int v10; // eax

  v1 = *(_QWORD *)(a1 + 960);
  HUBMISC_ComputeU1Timeout(v1);
  HUBMISC_ComputeU2Timeout(v1);
  v2 = *(_BYTE *)(v1 + 2198);
  LOWORD(v3) = 0;
  v4 = 1;
  v5 = v2 && ((*(_DWORD *)(v1 + 2200) & 0x10) != 0 || v2 != -1);
  v6 = *(_BYTE *)(v1 + 2199);
  if ( !v6 || (*(_DWORD *)(v1 + 2200) & 0x20) == 0 && v6 == -1 )
    v4 = 0;
  if ( v5 || v4 )
  {
    if ( v4 )
      v7 = *(unsigned __int16 *)(v1 + 2188);
    else
      v7 = *(unsigned __int16 *)(v1 + 2186);
    v8 = 1000 * v7;
    v10 = 2100;
    if ( v8 > 0x834 )
      v10 = v8;
    v9 = *(unsigned __int16 *)(v1 + 2558)
       + *(unsigned __int16 *)(*(_QWORD *)v1 + 1108LL)
       + *(unsigned __int16 *)(*(_QWORD *)v1 + 2412LL);
    v3 = (v10 + 2 * (v9 + 200) + (v10 + 2 * (v9 + 200)) * (unsigned int)*(unsigned __int8 *)(v1 + 2190) / 0x64 + 500)
       / 0x3E8;
  }
  *(_WORD *)(v1 + 2194) = v3;
  return 4077LL;
}
