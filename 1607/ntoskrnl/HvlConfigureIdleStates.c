/*
 * XREFs of HvlConfigureIdleStates @ 0x1401BEBC0
 * Callers:
 *     PpmIdleUpdateHvStates @ 0x140676470 (PpmIdleUpdateHvStates.c)
 * Callees:
 *     HvlpSetPowerProperty @ 0x1401BF768 (HvlpSetPowerProperty.c)
 */

__int64 __fastcall HvlConfigureIdleStates(int a1, _OWORD *a2)
{
  __int64 v2; // rax
  char *v3; // rcx
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  _DWORD v12[4]; // [rsp+20h] [rbp-1A8h] BYREF
  char v13; // [rsp+30h] [rbp-198h] BYREF

  v12[0] = 0;
  v2 = 3LL;
  v12[2] = a1;
  v3 = &v13;
  do
  {
    v4 = a2[1];
    *(_OWORD *)v3 = *a2;
    v5 = a2[2];
    *((_OWORD *)v3 + 1) = v4;
    v6 = a2[3];
    *((_OWORD *)v3 + 2) = v5;
    v7 = a2[4];
    *((_OWORD *)v3 + 3) = v6;
    v8 = a2[5];
    *((_OWORD *)v3 + 4) = v7;
    v9 = a2[6];
    *((_OWORD *)v3 + 5) = v8;
    v10 = a2[7];
    a2 += 8;
    *((_OWORD *)v3 + 6) = v9;
    v3 += 128;
    *((_OWORD *)v3 - 1) = v10;
    --v2;
  }
  while ( v2 );
  *(_QWORD *)v3 = *(_QWORD *)a2;
  return HvlpSetPowerProperty(v12);
}
