/*
 * XREFs of PpmPerfGetCurrentState @ 0x1400F8C78
 * Callers:
 *     PoGetPerfStateAndParkingInfo @ 0x14020A0E4 (PoGetPerfStateAndParkingInfo.c)
 *     PpmTracePerfIdleRundown @ 0x14020A624 (PpmTracePerfIdleRundown.c)
 *     PopProcessorInformation @ 0x140500E84 (PopProcessorInformation.c)
 *     PpmWmiGetAllData @ 0x14067335C (PpmWmiGetAllData.c)
 * Callees:
 *     PpmPerfGetCurrentFrequency @ 0x140149EF0 (PpmPerfGetCurrentFrequency.c)
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
    v9 = v6[93];
    if ( v8[15] < v9 )
      v9 = v8[15];
    if ( a2 )
      *a2 = v8[16];
    if ( a3 )
      *a3 = v6[93] * v6[75] / 0x64u;
    if ( a5 )
      *a5 = (v9 < v6[77]) + 1;
    if ( a6 )
    {
      v10 = v8[10];
      *a6 = v10;
      if ( v8[9] < 0x64u )
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
