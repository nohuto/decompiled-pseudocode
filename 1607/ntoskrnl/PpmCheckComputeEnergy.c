/*
 * XREFs of PpmCheckComputeEnergy @ 0x1400D26DC
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x1400D3250 (KeEnumerateNextProcessor.c)
 *     PpmPerfGetCurrentFrequency @ 0x140149EF0 (PpmPerfGetCurrentFrequency.c)
 *     PpmEventComputeEnergy @ 0x14020B9A0 (PpmEventComputeEnergy.c)
 */

char PpmCheckComputeEnergy()
{
  unsigned int v0; // edi
  ULONG v2; // ebx
  __int64 Prcb; // rax
  __int64 v4; // r8
  int CurrentFrequency; // eax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // rsi
  ULONG v10; // r14d
  __int64 v11; // rax
  _QWORD v12[2]; // [rsp+30h] [rbp-40h]
  _QWORD v13[2]; // [rsp+40h] [rbp-30h]
  _QWORD v14[2]; // [rsp+50h] [rbp-20h] BYREF
  __int16 v15; // [rsp+60h] [rbp-10h]
  ULONG v16; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+38h]
  __int64 v18; // [rsp+B0h] [rbp+40h] BYREF
  int v19; // [rsp+B8h] [rbp+48h]

  v0 = 0;
  if ( PopComputeEnergy )
  {
    v15 = 0;
    v17 = 0x4000000040LL;
    v13[0] = 0LL;
    v13[1] = 0LL;
    v12[0] = 0LL;
    v12[1] = 0LL;
    v14[1] = qword_1403AA618[0];
    v14[0] = KeActiveProcessors;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v16, v14) )
    {
      v2 = v16;
      Prcb = KeGetPrcb(v16);
      v4 = *(unsigned __int8 *)(Prcb + 23858);
      *((_DWORD *)&v17 + v4) = v2;
      v13[v4] += *(_QWORD *)(Prcb + 24256);
      v12[v4] += *(_QWORD *)(Prcb + 24264);
      CurrentFrequency = PpmPerfGetCurrentFrequency(Prcb);
      *(&v19 + v6) = CurrentFrequency;
      *(_QWORD *)(v7 + 24256) = 0LL;
      *(_QWORD *)(v7 + 24264) = 0LL;
    }
    v8 = 0LL;
    v9 = 0LL;
    do
    {
      v10 = *(_DWORD *)((char *)&v17 + v8);
      if ( v10 != 64 )
      {
        PopComputeEnergy(v0, v13[v9], v12[v9], *(unsigned int *)((char *)&v19 + v8), &v18);
        PpmEventComputeEnergy(v0, v18);
        v11 = KeGetPrcb(v10);
        *(_QWORD *)(v11 + 24248) += v18;
      }
      ++v0;
      v8 += 4LL;
      ++v9;
    }
    while ( v0 < 2 );
  }
  return 1;
}
