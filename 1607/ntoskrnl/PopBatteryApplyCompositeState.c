/*
 * XREFs of PopBatteryApplyCompositeState @ 0x140543EB0
 * Callers:
 *     PopBatteryWorker @ 0x140543B90 (PopBatteryWorker.c)
 * Callees:
 *     PopSetNotificationWork @ 0x140008A40 (PopSetNotificationWork.c)
 *     PopGetPolicyWorker @ 0x140008B0C (PopGetPolicyWorker.c)
 *     PopCheckForWork @ 0x140009C44 (PopCheckForWork.c)
 *     _TlgWrite @ 0x14000A598 (_TlgWrite.c)
 *     PopReleaseRwLock @ 0x14000DCD8 (PopReleaseRwLock.c)
 *     DbgPrintEx @ 0x140081B0C (DbgPrintEx.c)
 *     _TlgKeywordOn @ 0x140088D98 (_TlgKeywordOn.c)
 *     PopAcquireRwLockExclusive @ 0x1400FBFA8 (PopAcquireRwLockExclusive.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x14012FDFC (PopBatteryTraceSystemBatteryStatus.c)
 *     PopInitilizeAcDcSettings @ 0x140139B7C (PopInitilizeAcDcSettings.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14015D3C0 (ZwUpdateWnfStateData.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     PopTracePowerReconfig @ 0x140209A10 (PopTracePowerReconfig.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 *     PopSetPowerSettingValueAcDc @ 0x1403F5BE4 (PopSetPowerSettingValueAcDc.c)
 *     PopExecutePowerAction @ 0x140530768 (PopExecutePowerAction.c)
 *     PopBatteryCheckTrigger @ 0x1405440E4 (PopBatteryCheckTrigger.c)
 *     PopEsQueueStateEvaluation @ 0x14054410C (PopEsQueueStateEvaluation.c)
 *     PopRecalculateCBTriggerLevels @ 0x140544160 (PopRecalculateCBTriggerLevels.c)
 *     PopInitSIdle @ 0x140544AF4 (PopInitSIdle.c)
 *     PopBatteryUpdateAlarms @ 0x14056DCFC (PopBatteryUpdateAlarms.c)
 *     PopBatteryCheckTriggerAllBatteries @ 0x14066EC10 (PopBatteryCheckTriggerAllBatteries.c)
 *     PopBatteryTracePercentageRemaining @ 0x14066F414 (PopBatteryTracePercentageRemaining.c)
 *     PopDiagTraceAcDcStateChange @ 0x140670ADC (PopDiagTraceAcDcStateChange.c)
 *     PpmProfileAcDcUpdate @ 0x140675E04 (PpmProfileAcDcUpdate.c)
 *     PopSqmBatteryUpdate @ 0x140676794 (PopSqmBatteryUpdate.c)
 */

__int64 __fastcall PopBatteryApplyCompositeState(__m128i *a1, int a2)
{
  char v2; // al
  int v3; // ebx
  unsigned int v4; // edi
  __m128i v6; // xmm1
  __int64 v7; // r9
  unsigned __int64 v8; // xmm0_8
  unsigned int v9; // edi
  __int64 v10; // rsi
  int v11; // ebx
  __int64 *v12; // r12
  __int64 v13; // rcx
  __int64 v15; // rcx
  unsigned int v16; // eax
  __int64 v17; // r13
  int v18; // esi
  unsigned __int64 v19; // r14
  unsigned int v20; // ebx
  int v21; // ecx
  char v22; // r9
  UINT32 cData[2]; // [rsp+20h] [rbp-49h]
  char v24; // [rsp+40h] [rbp-29h]
  char v25; // [rsp+41h] [rbp-28h] BYREF
  unsigned int v26; // [rsp+44h] [rbp-25h] BYREF
  int v27; // [rsp+48h] [rbp-21h] BYREF
  int v28; // [rsp+4Ch] [rbp-1Dh]
  int v29; // [rsp+50h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-11h] BYREF
  char *v31; // [rsp+78h] [rbp+Fh]
  __int64 v32; // [rsp+80h] [rbp+17h]

  v2 = ~a1->m128i_i8[0];
  v28 = a2;
  v3 = a2;
  v4 = v2 & 1;
  v24 = 0;
  PopAcquirePolicyLock();
  if ( dword_140303E0C != v4 )
  {
    dword_140303E0C = v4;
    PopDiagTraceAcDcStateChange(v4);
    LOBYTE(v15) = 1;
    PopBatteryUpdateAlarms(v15, 0LL);
    PopSetNotificationWork(4u);
    PopInitSIdle();
    PopInitilizeAcDcSettings();
    PpmProfileAcDcUpdate();
    if ( v4 == 1 )
      PopMaxChargeRate = 0LL;
    v24 = 1;
  }
  if ( byte_140303678 )
  {
    PopSetPowerSettingValueAcDc((__int64)&GUID_BATTERY_COUNT, 4u, (__int64)&dword_140303674);
    v24 = 1;
  }
  PopReleasePolicyLock();
  if ( dword_140303674 )
  {
    v16 = a1->m128i_u32[1];
    v26 = 100;
    if ( HIDWORD(qword_1403036C0) > v16 )
      v26 = ((HIDWORD(qword_1403036C0) >> 1) + 100 * v16) / HIDWORD(qword_1403036C0);
    v17 = MEMORY[0xFFFFF78000000008];
    if ( dword_1403037EC == -1 )
    {
      v18 = 0;
      LODWORD(v19) = 0;
    }
    else
    {
      v18 = v26 - dword_1403037EC;
      v19 = (MEMORY[0xFFFFF78000000008] - qword_1403037F0 + 5000) / 0x2710uLL;
    }
    if ( v26 != dword_1403037EC )
    {
      PopSetPowerSettingValueAcDc((__int64)&GUID_BATTERY_PERCENTAGE_REMAINING, 4u, (__int64)&v26);
      v20 = v26;
      PopSqmBatteryUpdate(v26, (unsigned int)v18, v4, (unsigned int)v19);
      PopBatteryTracePercentageRemaining(v20, (unsigned int)v18, v4, (unsigned int)v19);
      dword_1403037EC = v20;
      v3 = v28;
      qword_1403037F0 = v17;
    }
    v27 = dword_1403037E8;
    v21 = dword_1403037E8;
    if ( v4 == 1 )
    {
      v21 = 1;
    }
    else if ( v4 == ((unk_1403036A0 & 1) == 0) )
    {
      if ( byte_140303678 || !v18 && (_DWORD)v19 )
      {
LABEL_40:
        if ( v21 != dword_1403037E8 )
        {
          dword_1403037E8 = v21;
          cData[1] = 0;
          ZwUpdateWnfStateData((__int64)&WNF_PO_BATTERY_DISCHARGING, (__int64)&v27, 4LL);
        }
        goto LABEL_5;
      }
      v21 = v18 < 0;
    }
    else
    {
      v21 = 0;
    }
    v27 = v21;
    goto LABEL_40;
  }
LABEL_5:
  if ( a1->m128i_i32[0] != unk_1403036A0 || byte_140303678 )
  {
    PopSetNotificationWork(8u);
    byte_140303678 = 0;
  }
  v6 = *a1;
  HIDWORD(qword_1403036AC) = v3;
  v7 = (unsigned int)_mm_cvtsi128_si32(v6);
  v8 = _mm_srli_si128(v6, 8).m128i_u64[0];
  if ( v3 == -1 )
    v3 = 0;
  cData[0] = v6.m128i_u32[1];
  unk_1403036A0 = v6;
  DbgPrintEx(
    0x92u,
    3u,
    "\n"
    "Composite Status\n"
    "|-- PowerState = 0x%08x\n"
    "|-- Capacity   = %u\n"
    "|-- Voltage    = %u\n"
    "|-- Rate       = %d\n"
    "|-- Est Time   = %u\n",
    v7,
    *(_QWORD *)cData,
    _mm_cvtsi128_si32(_mm_srli_si128(v6, 8)),
    HIDWORD(v8),
    v3);
  PopRecalculateCBTriggerLevels();
  PopBatteryTraceSystemBatteryStatus(0);
  if ( qword_1403036C0
    && (unsigned __int8)PopBatteryCheckTriggerAllBatteries(&unk_140303788, 1LL)
    && (dword_14030378C & 2) == 0 )
  {
    PopGetPolicyWorker(64);
    PopCheckForWork();
  }
  PopAcquirePolicyLock();
  v9 = 0;
  v10 = 0LL;
  v11 = dword_140303674 != 0 ? 3 : 0;
  do
  {
    v12 = &PopCB[3 * v9];
    if ( (unsigned __int8)PopBatteryCheckTrigger(v12 + 37) )
    {
      if ( !byte_140303780 )
        PopExecutePowerAction(
          (__int64)(v12 + 37),
          8u,
          (__int64 *)PopPolicy + 3 * v9 + 13,
          *(_DWORD *)((char *)PopPolicy + v10 * 8 + 116),
          1u);
      if ( v11 == 3 )
      {
        if ( v9 )
        {
          if ( v9 == 1 )
            v11 = 2;
        }
        else
        {
          v11 = 1;
        }
      }
    }
    else
    {
      HIDWORD(PopCB[v10 + 37]) &= 0xFFFFFFFC;
    }
    v10 += 3LL;
    ++v9;
  }
  while ( v9 < 4 );
  if ( dword_1403036DC != v11 )
  {
    v29 = v11;
    ZwUpdateWnfStateData((__int64)&WNF_PO_BATTERY_CHARGE_LEVEL, (__int64)&v29, 4LL);
    if ( (unsigned int)(v11 - 1) <= 1 != (unsigned int)(dword_1403036DC - 1) <= 1
      && pCallbackContext.LevelPlus1 > 5
      && TlgKeywordOn(&pCallbackContext, 0x800000000000uLL) )
    {
      v25 = v22;
      v31 = &v25;
      v32 = 1LL;
      TlgWrite(&pCallbackContext, &unk_14027CBAA, 0LL, 0LL, 3u, &pData);
    }
    dword_1403036DC = v11;
  }
  if ( v24 )
    PopTracePowerReconfig();
  PopAcquireRwLockExclusive((unsigned __int64 *)&qword_140303808);
  memset(&xmmword_140303818, 0, 0x20uLL);
  BYTE7(xmmword_140303818) = dword_1403036D8;
  if ( dword_140303674 )
  {
    BYTE1(xmmword_140303818) = 1;
    LOBYTE(xmmword_140303818) = unk_1403036A0 & 1;
    BYTE2(xmmword_140303818) = (unk_1403036A0 & 4) != 0;
    DWORD2(xmmword_140303818) = HIDWORD(qword_1403036C0);
    HIDWORD(xmmword_140303818) = unk_1403036A4;
    *(_QWORD *)&xmmword_140303828 = qword_1403036AC;
    *((_QWORD *)&xmmword_140303828 + 1) = unk_1403036C8;
    BYTE3(xmmword_140303818) = (unk_1403036A0 & 2) != 0;
  }
  else
  {
    LOBYTE(xmmword_140303818) = dword_140303E0C == 0;
  }
  PopReleaseRwLock(&qword_140303808);
  LOBYTE(v13) = v24;
  PopEsQueueStateEvaluation(v13);
  return PopReleasePolicyLock();
}
