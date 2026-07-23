/*
 * XREFs of HvlpSetPowerProperty @ 0x1401BF768
 * Callers:
 *     PpmScaleIdleStateValues @ 0x14012FC20 (PpmScaleIdleStateValues.c)
 *     HvlConfigureIdleStates @ 0x1401BEBC0 (HvlConfigureIdleStates.c)
 *     HvlRegisterPerfFeedbackCounters @ 0x1401BF370 (HvlRegisterPerfFeedbackCounters.c)
 *     HvlSetPlatformIdleState @ 0x1401BF3EC (HvlSetPlatformIdleState.c)
 *     HvlpPowerPolicySettingCallback @ 0x1401BF690 (HvlpPowerPolicySettingCallback.c)
 * Callees:
 *     HvlpAcquireHypercallPage @ 0x1401BB178 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBC30 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlpSetPowerProperty(_OWORD *a1)
{
  unsigned int v1; // edi
  _OWORD *v3; // rcx
  __int64 v4; // rax
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int64 v12; // rax
  PHYSICAL_ADDRESS v13; // rdx
  PHYSICAL_ADDRESS v15[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  v3 = (_OWORD *)HvlpAcquireHypercallPage(v15, 1, 0LL, 408LL);
  v4 = 3LL;
  do
  {
    v5 = a1[1];
    *v3 = *a1;
    v6 = a1[2];
    v3[1] = v5;
    v7 = a1[3];
    v3[2] = v6;
    v8 = a1[4];
    v3[3] = v7;
    v9 = a1[5];
    v3[4] = v8;
    v10 = a1[6];
    v3[5] = v9;
    v11 = a1[7];
    a1 += 8;
    v3[6] = v10;
    v3 += 8;
    *(v3 - 1) = v11;
    --v4;
  }
  while ( v4 );
  v12 = *((_QWORD *)a1 + 2);
  v13 = v15[3];
  *v3 = *a1;
  *((_QWORD *)v3 + 2) = v12;
  if ( (unsigned __int16)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallCodeVa)(
                           156LL,
                           (PHYSICAL_ADDRESS)v13.QuadPart,
                           0LL) )
    v1 = -1073741823;
  HvlpReleaseHypercallPage((__int64)v15);
  return v1;
}
