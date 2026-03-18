/*
 * XREFs of PopInitSIdle @ 0x14050A84C
 * Callers:
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 *     PopDispatchFullWake @ 0x1404F5684 (PopDispatchFullWake.c)
 *     PopBatteryApplyCompositeState @ 0x1404F9820 (PopBatteryApplyCompositeState.c)
 *     PopSleepPowerSettingCallback @ 0x14053DAAC (PopSleepPowerSettingCallback.c)
 *     PopApplyPolicy @ 0x14053E204 (PopApplyPolicy.c)
 * Callees:
 *     PopResetIdleTime @ 0x1400F1E98 (PopResetIdleTime.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x14015BFC0 (RtlCompareMemory.c)
 *     PopIdleIsDozeS4Enabled @ 0x140457388 (PopIdleIsDozeS4Enabled.c)
 *     PopFilterCapabilities @ 0x140457EB8 (PopFilterCapabilities.c)
 *     PopTraceSystemIdleTimeoutInitialization @ 0x14050A9DC (PopTraceSystemIdleTimeoutInitialization.c)
 */

__int64 PopInitSIdle()
{
  char v0; // bl
  int v1; // edi
  int v2; // r9d
  int v3; // ecx
  int v5; // eax
  int v6; // eax
  char v7; // [rsp+28h] [rbp-79h]
  _BYTE v8[92]; // [rsp+38h] [rbp-69h] BYREF
  int v9; // [rsp+94h] [rbp-Dh]
  __int64 Source2; // [rsp+9Ch] [rbp-5h] BYREF
  int v11; // [rsp+A4h] [rbp+3h]
  int v12; // [rsp+A8h] [rbp+7h]

  v0 = 1;
  Source2 = 0x100000000LL;
  v9 = -1;
  v1 = 5;
  v11 = *((_DWORD *)PopPolicy + 14);
  v12 = 2;
  if ( (PopFullWake & 3) != 0 || !dword_1402DE2A0 || (PopSimulate & 0x1000000) != 0 )
  {
    PopFilterCapabilities((__int64)&PopCapabilities, (__int64)v8);
    if ( *((_DWORD *)PopPolicy + 15) )
    {
      if ( v8[20] )
      {
        LODWORD(Source2) = 2;
        v1 = 1;
        v9 = *((_DWORD *)PopPolicy + 15);
        v12 = 1;
        goto LABEL_4;
      }
      if ( v8[3] || v8[4] || v8[5] )
      {
        LODWORD(Source2) = 2;
        v1 = 2;
        v9 = *((_DWORD *)PopPolicy + 15);
        v12 = 4;
        goto LABEL_4;
      }
    }
    else if ( !*((_DWORD *)PopPolicy + 22) )
    {
      goto LABEL_4;
    }
    if ( PopIdleIsDozeS4Enabled(v8) )
    {
      v1 = 3;
      LODWORD(Source2) = 3;
      v9 = *((_DWORD *)PopPolicy + 22);
      v12 = 5;
    }
  }
  else
  {
    v1 = 4;
    if ( (unsigned int)(qword_1402DE084 - 2) <= 1 )
    {
      v12 = HIDWORD(qword_1402DE084);
      LODWORD(Source2) = qword_1402DE084;
    }
    else
    {
      LODWORD(Source2) = 2;
      v12 = 4;
    }
    v11 = 0;
    v9 = dword_1402DE2A0;
    HIDWORD(Source2) = 1;
  }
LABEL_4:
  if ( RtlCompareMemory(&qword_1402DEAD4, &Source2, 0xCuLL) == 12
    && (v2 = dword_1402DEAE0, dword_1402DEAE0 == v12)
    && (v3 = dword_1402DEACC, dword_1402DEACC == v9) )
  {
    v0 = 0;
  }
  else
  {
    PopResetIdleTime(4);
    v2 = v12;
    v3 = v9;
    dword_1402DEADC = v11;
    qword_1402DEAD4 = Source2;
    byte_1402DEAF0 = 1;
    dword_1402DEAE0 = v12;
    dword_1402DEACC = v9;
    if ( dword_1402C72E0 )
      v5 = dword_1402DEAE4 | 1;
    else
      v5 = dword_1402DEAE4 & 0xFFFFFFFE;
    dword_1402DEAE4 = v5;
    if ( !byte_1402DDF74 )
    {
      if ( dword_1402C7300 )
        v6 = v5 | 2;
      else
        v6 = v5 & 0xFFFFFFFD;
      dword_1402DEAE4 = v6;
    }
  }
  v7 = v3;
  LOBYTE(v3) = v0;
  return PopTraceSystemIdleTimeoutInitialization(v3, v1, qword_1402DEAD4, v2, v7, SBYTE4(qword_1402DEAD4));
}
