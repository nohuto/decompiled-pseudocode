/*
 * XREFs of PpmPerfGetCurrentState @ 0x14009ACEC
 * Callers:
 *     PoGetPerfStateAndParkingInfo @ 0x1401F11AC (PoGetPerfStateAndParkingInfo.c)
 *     PpmTracePerfIdleRundown @ 0x1401F16E4 (PpmTracePerfIdleRundown.c)
 *     PopProcessorInformation @ 0x14046167C (PopProcessorInformation.c)
 *     PpmWmiGetAllData @ 0x14063BEEC (PpmWmiGetAllData.c)
 * Callees:
 *     PpmPerfGetCurrentFrequency @ 0x140141F40 (PpmPerfGetCurrentFrequency.c)
 */

void __fastcall PpmPerfGetCurrentState(__int64 a1, _DWORD *a2, unsigned int *a3, _DWORD *a4, _DWORD *a5, int *a6)
{
  _DWORD *v6; // rbx
  _DWORD *v8; // r10
  unsigned int v9; // r9d
  int v10; // eax

  v6 = *(_DWORD **)(a1 + 24176);
  v8 = *(_DWORD **)(a1 + 24184);
  if ( v6 && v8 )
  {
    v9 = v6[91];
    if ( v8[13] < v9 )
      v9 = v8[13];
    if ( a2 )
      *a2 = v8[14];
    if ( a3 )
      *a3 = v6[91] * v6[73] / 0x64u;
    if ( a5 )
      *a5 = (v9 < v6[75]) + 1;
    if ( a6 )
    {
      v10 = v8[8];
      *a6 = v10;
      if ( v8[7] < 0x64u )
        *a6 = v10 | 4;
    }
  }
  else
  {
    if ( a2 )
      *a2 = *(_DWORD *)(a1 + 1524);
    if ( a3 )
      *a3 = *(_DWORD *)(a1 + 1524);
    if ( a5 )
      *a5 = 0;
    if ( a6 )
      *a6 = 0;
  }
  if ( a4 )
    *a4 = PpmPerfGetCurrentFrequency(a1);
}
