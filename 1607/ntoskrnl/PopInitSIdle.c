/*
 * XREFs of PopInitSIdle @ 0x140544AF4
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 *     PopDispatchFullWake @ 0x140534800 (PopDispatchFullWake.c)
 *     PopBatteryApplyCompositeState @ 0x140543EB0 (PopBatteryApplyCompositeState.c)
 *     PopSleepPowerSettingCallback @ 0x14056D878 (PopSleepPowerSettingCallback.c)
 *     PopApplyPolicy @ 0x14056DFD8 (PopApplyPolicy.c)
 * Callees:
 *     PopResetIdleTime @ 0x140007F48 (PopResetIdleTime.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140167460 (RtlCompareMemory.c)
 *     PopFilterCapabilities @ 0x1403F3CF4 (PopFilterCapabilities.c)
 *     PopIdleIsHibernateEnabled @ 0x1403F56BC (PopIdleIsHibernateEnabled.c)
 *     PopTraceSystemIdleTimeoutInitialization @ 0x140544C84 (PopTraceSystemIdleTimeoutInitialization.c)
 */

__int64 PopInitSIdle()
{
  char v0; // bl
  int v1; // edi
  int v2; // r9d
  int v3; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  char v8; // [rsp+28h] [rbp-79h]
  _BYTE v9[92]; // [rsp+38h] [rbp-69h] BYREF
  int v10; // [rsp+94h] [rbp-Dh]
  __int64 Source2; // [rsp+9Ch] [rbp-5h] BYREF
  int v12; // [rsp+A4h] [rbp+3h]
  int v13; // [rsp+A8h] [rbp+7h]

  v0 = 1;
  Source2 = 0x100000000LL;
  v10 = -1;
  v1 = 5;
  v12 = *((_DWORD *)PopPolicy + 14);
  v13 = 2;
  if ( (PopFullWake & 3) != 0 || !dword_140303E20 || (PopSimulate & 0x1000000) != 0 )
  {
    PopFilterCapabilities((__int64)&PopCapabilities, (__int64)v9);
    if ( *((_DWORD *)PopPolicy + 15) )
    {
      if ( v9[20] )
      {
        LODWORD(Source2) = 2;
        v1 = 1;
        v7 = *((_DWORD *)PopPolicy + 15);
        v13 = 1;
        goto LABEL_33;
      }
      if ( v9[3] || v9[4] || v9[5] )
      {
        LODWORD(Source2) = 2;
        v1 = 2;
        v7 = *((_DWORD *)PopPolicy + 15);
        v13 = 4;
        goto LABEL_33;
      }
    }
    else if ( !*((_DWORD *)PopPolicy + 22) )
    {
      goto LABEL_4;
    }
    if ( !PopIdleIsHibernateEnabled(v9) || !*((_DWORD *)PopPolicy + 22) )
      goto LABEL_4;
    v1 = 3;
    LODWORD(Source2) = 3;
    v7 = *((_DWORD *)PopPolicy + 22);
    v13 = 5;
LABEL_33:
    v10 = v7;
    goto LABEL_4;
  }
  v1 = 4;
  if ( (unsigned int)(qword_140303464 - 2) <= 1 )
  {
    v13 = HIDWORD(qword_140303464);
    LODWORD(Source2) = qword_140303464;
  }
  else
  {
    LODWORD(Source2) = 2;
    v13 = 4;
  }
  v12 = 0;
  v10 = dword_140303E20;
  HIDWORD(Source2) = 1;
LABEL_4:
  if ( RtlCompareMemory(&qword_140303394, &Source2, 0xCuLL) == 12
    && (v2 = dword_1403033A0, dword_1403033A0 == v13)
    && (v3 = dword_14030338C, dword_14030338C == v10) )
  {
    v0 = 0;
  }
  else
  {
    PopResetIdleTime(4);
    v2 = v13;
    v3 = v10;
    dword_14030339C = v12;
    qword_140303394 = Source2;
    byte_1403033B4 = 1;
    dword_1403033A0 = v13;
    dword_14030338C = v10;
    if ( dword_1402F26B0 )
      v5 = dword_1403033A4 | 1;
    else
      v5 = dword_1403033A4 & 0xFFFFFFFE;
    dword_1403033A4 = v5;
    if ( !byte_140303F74 )
    {
      if ( dword_1402F26D0 )
        v6 = v5 | 2;
      else
        v6 = v5 & 0xFFFFFFFD;
      dword_1403033A4 = v6;
    }
  }
  v8 = v3;
  LOBYTE(v3) = v0;
  return PopTraceSystemIdleTimeoutInitialization(v3, v1, qword_140303394, v2, v8, SBYTE4(qword_140303394));
}
