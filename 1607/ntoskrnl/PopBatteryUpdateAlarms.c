/*
 * XREFs of PopBatteryUpdateAlarms @ 0x14056E23C
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x1405443F0 (PopBatteryApplyCompositeState.c)
 *     PopBatteryAlarmPowerSettingCallback @ 0x14056E214 (PopBatteryAlarmPowerSettingCallback.c)
 * Callees:
 *     PopGetPowerSettingValue @ 0x14000851C (PopGetPowerSettingValue.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PopApplyPolicy @ 0x14056E518 (PopApplyPolicy.c)
 */

__int64 __fastcall PopBatteryUpdateAlarms(char a1, unsigned int a2)
{
  unsigned int v2; // r14d
  __int64 v4; // rcx
  unsigned int v5; // r9d
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rsi
  int *v21; // rbx
  __int64 v22; // rdx
  unsigned int v23; // eax
  __int64 v24; // rdx
  int v25; // eax
  __int64 v27; // [rsp+28h] [rbp-E0h]
  __int64 v28; // [rsp+28h] [rbp-E0h]
  __int64 v29; // [rsp+28h] [rbp-E0h]
  unsigned int v30; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v31[3]; // [rsp+3Ch] [rbp-CCh] BYREF
  _OWORD v32[6]; // [rsp+48h] [rbp-C0h] BYREF
  _OWORD v33[8]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v34; // [rsp+128h] [rbp+20h]

  v2 = dword_140303D4C;
  v4 = 128LL;
  v5 = a2;
  v6 = *((_OWORD *)PopPolicy + 1);
  v32[0] = *(_OWORD *)PopPolicy;
  v7 = *((_OWORD *)PopPolicy + 2);
  v32[1] = v6;
  v8 = *((_OWORD *)PopPolicy + 3);
  v32[2] = v7;
  v9 = *((_OWORD *)PopPolicy + 4);
  v32[3] = v8;
  v10 = *((_OWORD *)PopPolicy + 5);
  v32[4] = v9;
  v11 = *((_OWORD *)PopPolicy + 6);
  v32[5] = v10;
  v33[0] = v11;
  v33[1] = *((_OWORD *)PopPolicy + 7);
  v12 = *((_OWORD *)PopPolicy + 9);
  v33[2] = *((_OWORD *)PopPolicy + 8);
  v13 = *((_OWORD *)PopPolicy + 10);
  v33[3] = v12;
  v14 = *((_OWORD *)PopPolicy + 11);
  v33[4] = v13;
  v15 = *((_OWORD *)PopPolicy + 12);
  v33[5] = v14;
  v16 = *((_OWORD *)PopPolicy + 13);
  v17 = *((_QWORD *)PopPolicy + 28);
  v33[6] = v15;
  v33[7] = v16;
  v34 = v17;
  if ( a1 )
  {
    v5 = 0;
    v18 = 4LL;
  }
  else
  {
    v18 = a2 + 1;
  }
  if ( v5 < (unsigned int)v18 )
  {
    v19 = v5;
    v18 = (unsigned int)v18 - v5;
    v20 = (unsigned int)v18;
    v21 = (int *)v33 + 6 * v5 + 1;
    do
    {
      if ( (int)PopGetPowerSettingValue((__int64)GUIDS_BATTERY_DISCHARGE_ACTION[v19], v18, v2, &v30, v27, v31) >= 0 )
      {
        v23 = v30;
        if ( v30 <= 6 )
        {
          v21[1] = v30;
          *((_BYTE *)v21 - 4) = v23 != 0;
        }
      }
      if ( (int)PopGetPowerSettingValue((__int64)GUIDS_BATTERY_DISCHARGE_LEVEL[v19], v22, v2, &v30, v28, v31) >= 0 )
      {
        v25 = v30;
        if ( v30 > 0x64 )
          v25 = 100;
        *v21 = v25;
      }
      if ( (int)PopGetPowerSettingValue((__int64)GUIDS_BATTERY_DISCHARGE_FLAGS[v19], v24, v2, &v30, v29, v31) >= 0 )
        v21[3] = v30 & 7;
      v21 += 6;
      ++v19;
      --v20;
    }
    while ( v20 );
  }
  LOBYTE(v18) = a1;
  LOBYTE(v4) = 1;
  return PopApplyPolicy(v4, v18, v32, 232LL);
}
