/*
 * XREFs of HvlConfigurePerfStates @ 0x1401BECBC
 * Callers:
 *     PpmPerfRegisterHvStates @ 0x140676680 (PpmPerfRegisterHvStates.c)
 * Callees:
 *     HvlpSetLogicalProcessorProperty @ 0x1401BC3A0 (HvlpSetLogicalProcessorProperty.c)
 */

__int64 __fastcall HvlConfigurePerfStates(int a1, _OWORD *a2)
{
  __int64 v2; // rax
  _OWORD *v3; // r8
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 v11; // rax
  __int128 v12; // xmm1
  _OWORD v14[204]; // [rsp+20h] [rbp-CC8h] BYREF

  v2 = 24LL;
  v3 = v14;
  do
  {
    v4 = a2[1];
    *v3 = *a2;
    v5 = a2[2];
    v3[1] = v4;
    v6 = a2[3];
    v3[2] = v5;
    v7 = a2[4];
    v3[3] = v6;
    v8 = a2[5];
    v3[4] = v7;
    v9 = a2[6];
    v3[5] = v8;
    v10 = a2[7];
    a2 += 8;
    v3[6] = v9;
    v3 += 8;
    *(v3 - 1) = v10;
    --v2;
  }
  while ( v2 );
  v11 = *((_QWORD *)a2 + 4);
  v12 = a2[1];
  *v3 = *a2;
  v3[1] = v12;
  *((_QWORD *)v3 + 4) = v11;
  return HvlpSetLogicalProcessorProperty(a1, 0, v14);
}
