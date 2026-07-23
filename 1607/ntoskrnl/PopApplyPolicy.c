/*
 * XREFs of PopApplyPolicy @ 0x14056E518
 * Callers:
 *     PopVideoPowerSettingCallback @ 0x14014566C (PopVideoPowerSettingCallback.c)
 *     NtPowerInformation @ 0x14050189C (NtPowerInformation.c)
 *     PopConsoleLockPowerSettingCallback @ 0x14056DAD8 (PopConsoleLockPowerSettingCallback.c)
 *     PopHardDiskPowerSettingCallback @ 0x14056DBF8 (PopHardDiskPowerSettingCallback.c)
 *     PopSleepPowerSettingCallback @ 0x14056DDB8 (PopSleepPowerSettingCallback.c)
 *     PopPowerButtonSettingCallback @ 0x14056E030 (PopPowerButtonSettingCallback.c)
 *     PopBatteryUpdateAlarms @ 0x14056E23C (PopBatteryUpdateAlarms.c)
 *     PopResetCurrentPolicies @ 0x14056E44C (PopResetCurrentPolicies.c)
 * Callees:
 *     PopSetNotificationWork @ 0x1400085B4 (PopSetNotificationWork.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     PopOpenPowerKey @ 0x140132A90 (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memcmp @ 0x14014E450 (memcmp.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwSetValueKey @ 0x14015ADF0 (ZwSetValueKey.c)
 *     PopInitSIdle @ 0x140545034 (PopInitSIdle.c)
 *     PopVerifySystemPowerPolicy @ 0x14056E7A8 (PopVerifySystemPowerPolicy.c)
 *     PopResetCBTriggers @ 0x14056EA70 (PopResetCBTriggers.c)
 */

__int64 __fastcall PopApplyPolicy(char a1, char a2, _OWORD *a3, unsigned int a4)
{
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm0
  _OWORD *v13; // r8
  __int64 v14; // rax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  int v20; // eax
  _OWORD *v21; // rbx
  int v22; // edi
  char v23; // r14
  __int64 v24; // r8
  __int64 v25; // rcx
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  _OWORD *v33; // rbx
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int64 v40; // rax
  __int64 v41; // rcx
  HANDLE KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  _OWORD Buf1[6]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v46; // [rsp+B0h] [rbp-50h]
  _OWORD v47[7]; // [rsp+C0h] [rbp-40h]
  __int64 v48; // [rsp+130h] [rbp+30h]
  _OWORD Data[14]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v50; // [rsp+220h] [rbp+120h]

  if ( a4 < 0xE8 )
    return 3221225507LL;
  if ( a4 > 0xE8 )
    return 2147483653LL;
  v6 = a3[1];
  Data[0] = *a3;
  v7 = a3[2];
  Data[1] = v6;
  v8 = a3[3];
  Data[2] = v7;
  v9 = a3[4];
  Data[3] = v8;
  v10 = a3[5];
  Data[4] = v9;
  v11 = a3[6];
  Data[5] = v10;
  Data[6] = v11;
  v12 = a3[7];
  v13 = a3 + 8;
  Data[7] = v12;
  v14 = *((_QWORD *)v13 + 12);
  v15 = v13[1];
  Data[8] = *v13;
  v16 = v13[2];
  Data[9] = v15;
  v17 = v13[3];
  Data[10] = v16;
  v18 = v13[4];
  Data[11] = v17;
  v19 = v13[5];
  Data[12] = v18;
  Data[13] = v19;
  v50 = v14;
  v20 = PopVerifySystemPowerPolicy(Data, Buf1);
  v21 = PopPolicy;
  v22 = v20;
  if ( !memcmp(Buf1, PopPolicy, 0xE8uLL) && !a1 )
    return 0LL;
  v23 = 0;
  v24 = 0LL;
  while ( 1 )
  {
    v25 = *((_QWORD *)&v47[-1] + 3 * v24) - *((_QWORD *)v21 + 3 * v24 + 12);
    if ( !v25 )
    {
      v25 = *((_QWORD *)&v46 + 3 * v24 + 1) - *((_QWORD *)v21 + 3 * v24 + 13);
      if ( !v25 )
        v25 = *((_QWORD *)v47 + 3 * v24) - *((_QWORD *)v21 + 3 * v24 + 14);
    }
    if ( v25 )
      break;
    v24 = (unsigned int)(v24 + 1);
    if ( (unsigned int)v24 >= 4 )
      goto LABEL_11;
  }
  v23 = 1;
LABEL_11:
  v26 = Buf1[1];
  *v21 = Buf1[0];
  v27 = Buf1[2];
  v21[1] = v26;
  v28 = Buf1[3];
  v21[2] = v27;
  v29 = Buf1[4];
  v21[3] = v28;
  v30 = Buf1[5];
  v21[4] = v29;
  v31 = v46;
  v21[5] = v30;
  v32 = v47[0];
  v21[6] = v31;
  v33 = v21 + 8;
  v34 = v47[1];
  *(v33 - 1) = v32;
  v35 = v47[2];
  *v33 = v34;
  v36 = v47[3];
  v33[1] = v35;
  v37 = v47[4];
  v33[2] = v36;
  v38 = v47[5];
  v33[3] = v37;
  v39 = v47[6];
  v40 = v48;
  v33[4] = v38;
  v33[5] = v39;
  *((_QWORD *)v33 + 12) = v40;
  PopSetNotificationWork(2u);
  if ( v23 && !a2 )
  {
    LOBYTE(v41) = -125;
    PopResetCBTriggers(v41);
  }
  PopInitSIdle();
  if ( a1 )
  {
    v22 = PopOpenPowerKey((__int64)&KeyHandle);
    if ( v22 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"SystemPowerPolicy");
      v22 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 3u, Data, 0xE8u);
      ZwClose(KeyHandle);
    }
  }
  return (unsigned int)v22;
}
