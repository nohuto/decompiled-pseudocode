/*
 * XREFs of PopInitSIdle @ 0x1405813E0
 * Callers:
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 *     PopDispatchFullWake @ 0x14056993C (PopDispatchFullWake.c)
 *     PopBatteryApplyCompositeState @ 0x14056B6B4 (PopBatteryApplyCompositeState.c)
 *     PopSleepPowerSettingCallback @ 0x14059905C (PopSleepPowerSettingCallback.c)
 *     PopApplyPolicy @ 0x1405997B4 (PopApplyPolicy.c)
 * Callees:
 *     PopResetIdleTime @ 0x14012DF68 (PopResetIdleTime.c)
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x14018BAA0 (RtlCompareMemory.c)
 *     PopFilterCapabilities @ 0x1404E0F04 (PopFilterCapabilities.c)
 *     PopIdleIsDozeS4Enabled @ 0x1404E41F4 (PopIdleIsDozeS4Enabled.c)
 *     PopTraceSystemIdleTimeoutInitialization @ 0x140581580 (PopTraceSystemIdleTimeoutInitialization.c)
 */

__int64 PopInitSIdle()
{
  char v0; // bl
  int v1; // edi
  __int64 v2; // rdx
  int v3; // r9d
  int v4; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  __int64 v9; // r8
  char v10; // [rsp+28h] [rbp-59h]
  _BYTE v11[92]; // [rsp+38h] [rbp-49h] BYREF
  int v12; // [rsp+94h] [rbp+13h]
  __int64 Source2; // [rsp+9Ch] [rbp+1Bh] BYREF
  int v14; // [rsp+A4h] [rbp+23h]
  int v15; // [rsp+A8h] [rbp+27h]

  v0 = 1;
  Source2 = 0x100000000LL;
  v12 = -1;
  v1 = 5;
  v14 = *((_DWORD *)PopPolicy + 14);
  v15 = 2;
  if ( (PopFullWake & 3) != 0 || !dword_14032E860 || (PopSimulate & 0x1000000) != 0 )
  {
    PopFilterCapabilities((__int64)&PopCapabilities, (__int64)v11);
    if ( *((_DWORD *)PopPolicy + 15) )
    {
      if ( v11[20] )
      {
        LODWORD(Source2) = 2;
        v1 = 1;
        v8 = *((_DWORD *)PopPolicy + 15);
        v15 = 1;
        goto LABEL_34;
      }
      if ( v11[3] || v11[4] || v11[5] )
      {
        LODWORD(Source2) = 2;
        v1 = 2;
        v8 = *((_DWORD *)PopPolicy + 15);
        v15 = 4;
        goto LABEL_34;
      }
    }
    else if ( !*((_DWORD *)PopPolicy + 22) )
    {
      goto LABEL_4;
    }
    if ( !PopIdleIsDozeS4Enabled(v11) )
      goto LABEL_4;
    v1 = 3;
    LODWORD(Source2) = 3;
    v8 = *(_DWORD *)(v9 + 88);
    v15 = 5;
LABEL_34:
    v12 = v8;
    goto LABEL_4;
  }
  v1 = 4;
  if ( (unsigned int)(qword_14032E644 - 2) <= 1 )
  {
    v15 = HIDWORD(qword_14032E644);
    LODWORD(Source2) = qword_14032E644;
  }
  else
  {
    LODWORD(Source2) = 2;
    v15 = 4;
  }
  v14 = 0;
  v12 = dword_14032E860;
  HIDWORD(Source2) = 1;
LABEL_4:
  if ( RtlCompareMemory(&qword_14032E1B4, &Source2, 0xCuLL) == 12
    && (v3 = dword_14032E1C0, dword_14032E1C0 == v15)
    && (v4 = dword_14032E1AC, dword_14032E1AC == v12) )
  {
    v0 = 0;
  }
  else
  {
    if ( (PoDebug & 0x40000000) != 0 )
      DbgPrint("PoSIdle: new idle params set\n");
    PopResetIdleTime(4u, v2);
    v3 = v15;
    v4 = v12;
    dword_14032E1BC = v14;
    qword_14032E1B4 = Source2;
    byte_14032E1C8 = 1;
    dword_14032E1C0 = v15;
    dword_14032E1AC = v12;
    if ( dword_1403163B0 )
      v6 = dword_14032E1C4 | 1;
    else
      v6 = dword_14032E1C4 & 0xFFFFFFFE;
    dword_14032E1C4 = v6;
    if ( !byte_14032E534 )
    {
      if ( dword_1403163D0 )
        v7 = v6 | 2;
      else
        v7 = v6 & 0xFFFFFFFD;
      dword_14032E1C4 = v7;
    }
  }
  v10 = v4;
  LOBYTE(v4) = v0;
  return PopTraceSystemIdleTimeoutInitialization(v4, v1, qword_14032E1B4, v3, v10, SBYTE4(qword_14032E1B4));
}
