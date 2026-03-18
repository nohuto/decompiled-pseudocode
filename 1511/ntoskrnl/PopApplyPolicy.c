/*
 * XREFs of PopApplyPolicy @ 0x14053E204
 * Callers:
 *     PopVideoPowerSettingCallback @ 0x14013C9A0 (PopVideoPowerSettingCallback.c)
 *     NtPowerInformation @ 0x140452E2C (NtPowerInformation.c)
 *     PopHardDiskPowerSettingCallback @ 0x14053D7D0 (PopHardDiskPowerSettingCallback.c)
 *     PopConsoleLockPowerSettingCallback @ 0x14053D938 (PopConsoleLockPowerSettingCallback.c)
 *     PopSleepPowerSettingCallback @ 0x14053DAAC (PopSleepPowerSettingCallback.c)
 *     PopPowerButtonSettingCallback @ 0x14053DD44 (PopPowerButtonSettingCallback.c)
 *     PopBatteryUpdateAlarms @ 0x14053DF34 (PopBatteryUpdateAlarms.c)
 *     PopResetCurrentPolicies @ 0x14053E130 (PopResetCurrentPolicies.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     PopSetNotificationWork @ 0x140097574 (PopSetNotificationWork.c)
 *     PopOpenPowerKey @ 0x140127640 (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memcmp @ 0x140144AB0 (memcmp.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwSetValueKey @ 0x140151220 (ZwSetValueKey.c)
 *     PopInitSIdle @ 0x14050A84C (PopInitSIdle.c)
 *     PopVerifySystemPowerPolicy @ 0x14053E494 (PopVerifySystemPowerPolicy.c)
 *     PopResetCBTriggers @ 0x14053E770 (PopResetCBTriggers.c)
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
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  _OWORD *v34; // rbx
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int64 v41; // rax
  __int64 v42; // rcx
  HANDLE KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  _OWORD Buf1[6]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v47; // [rsp+B0h] [rbp-50h]
  _OWORD v48[7]; // [rsp+C0h] [rbp-40h]
  __int64 v49; // [rsp+130h] [rbp+30h]
  _OWORD Data[14]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v51; // [rsp+220h] [rbp+120h]

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
  v51 = v14;
  v20 = PopVerifySystemPowerPolicy(Data, Buf1);
  v21 = PopPolicy;
  v22 = v20;
  if ( !memcmp(Buf1, PopPolicy, 0xE8uLL) && !a1 )
    return 0LL;
  v23 = 0;
  v24 = 0LL;
  while ( 1 )
  {
    v25 = 3 * v24;
    v26 = *((_QWORD *)&v48[-1] + 3 * v24) - *((_QWORD *)v21 + 3 * v24 + 12);
    if ( !v26 )
    {
      v26 = *((_QWORD *)&v47 + 3 * v24 + 1) - *((_QWORD *)v21 + 3 * v24 + 13);
      if ( !v26 )
        v26 = *((_QWORD *)v48 + 3 * v24) - *((_QWORD *)v21 + 3 * v24 + 14);
    }
    if ( v26 )
      break;
    v24 = (unsigned int)(v24 + 1);
    if ( (unsigned int)v24 >= 4 )
      goto LABEL_11;
  }
  v23 = 1;
LABEL_11:
  v27 = Buf1[1];
  *v21 = Buf1[0];
  v28 = Buf1[2];
  v21[1] = v27;
  v29 = Buf1[3];
  v21[2] = v28;
  v30 = Buf1[4];
  v21[3] = v29;
  v31 = Buf1[5];
  v21[4] = v30;
  v32 = v47;
  v21[5] = v31;
  v33 = v48[0];
  v21[6] = v32;
  v34 = v21 + 8;
  v35 = v48[1];
  *(v34 - 1) = v33;
  v36 = v48[2];
  *v34 = v35;
  v37 = v48[3];
  v34[1] = v36;
  v38 = v48[4];
  v34[2] = v37;
  v39 = v48[5];
  v34[3] = v38;
  v40 = v48[6];
  v41 = v49;
  v34[4] = v39;
  v34[5] = v40;
  *((_QWORD *)v34 + 12) = v41;
  PopSetNotificationWork(2u, v25);
  if ( v23 && !a2 )
  {
    LOBYTE(v42) = -125;
    PopResetCBTriggers(v42);
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
