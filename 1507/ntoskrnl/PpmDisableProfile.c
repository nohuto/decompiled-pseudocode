/*
 * XREFs of PpmDisableProfile @ 0x1406BD9CC
 * Callers:
 *     PdcPoPpmResetProfile @ 0x1406B75F0 (PdcPoPpmResetProfile.c)
 * Callees:
 *     <none>
 */

char __fastcall PpmDisableProfile(__int64 a1)
{
  char v1; // r11
  _QWORD *v2; // r9
  _OWORD *v3; // rdx
  __int64 v4; // r10
  _OWORD *v6; // rax
  __int64 v7; // rcx
  __int128 v8; // xmm1
  _OWORD *v9; // rcx
  _OWORD *v10; // rax
  __int128 v11; // xmm1
  __int64 v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax

  v1 = *(_BYTE *)(a1 + 8);
  v2 = (_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 28) &= ~1u;
  v3 = &unk_14032C768;
  v4 = 10LL;
  v6 = (_OWORD *)(a1 + 40);
  v7 = 10LL;
  do
  {
    *v6 = *v3;
    v6[1] = v3[1];
    v6[2] = v3[2];
    v6[3] = v3[3];
    v6[4] = v3[4];
    v6[5] = v3[5];
    v6[6] = v3[6];
    v6 += 8;
    v8 = v3[7];
    v3 += 8;
    *(v6 - 1) = v8;
    --v7;
  }
  while ( v7 );
  v9 = &unk_14032CCD8;
  *v6 = *v3;
  v6[1] = v3[1];
  v6[2] = v3[2];
  v6[3] = v3[3];
  v6[4] = v3[4];
  v6[5] = v3[5];
  v6[6] = v3[6];
  v10 = (_OWORD *)(a1 + 1432);
  do
  {
    *v10 = *v9;
    v10[1] = v9[1];
    v10[2] = v9[2];
    v10[3] = v9[3];
    v10[4] = v9[4];
    v10[5] = v9[5];
    v10[6] = v9[6];
    v10 += 8;
    v11 = v9[7];
    v9 += 8;
    *(v10 - 1) = v11;
    --v4;
  }
  while ( v4 );
  v12 = 2LL;
  *v10 = *v9;
  v10[1] = v9[1];
  v10[2] = v9[2];
  v10[3] = v9[3];
  v10[4] = v9[4];
  v10[5] = v9[5];
  v10[6] = v9[6];
  do
  {
    v13 = v2;
    v14 = 2LL;
    do
    {
      *v13 = 0LL;
      v13 += 174;
      --v14;
    }
    while ( v14 );
    ++v2;
    --v12;
  }
  while ( v12 );
  v15 = *(_QWORD *)(a1 + 12) - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_LOW_POWER.Data1;
  if ( !v15 )
    v15 = *(_QWORD *)(a1 + 20) - *(_QWORD *)GUID_POWER_POLICY_PROFILE_LOW_POWER.Data4;
  if ( !v15 )
    PpmLowPowerProfile = 0LL;
  return PpmEventTraceProfileEnable(v1, 0);
}
