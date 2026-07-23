/*
 * XREFs of PopBatteryApplyCompositeState @ 0x1405443F0
 * Callers:
 *     PopBatteryWorker @ 0x1405440D0 (PopBatteryWorker.c)
 * Callees:
 *     PopSetNotificationWork @ 0x1400085B4 (PopSetNotificationWork.c)
 *     PopGetPolicyWorker @ 0x140008680 (PopGetPolicyWorker.c)
 *     PopCheckForWork @ 0x1400097C4 (PopCheckForWork.c)
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     PopReleaseRwLock @ 0x14000D858 (PopReleaseRwLock.c)
 *     DbgPrintEx @ 0x140084C90 (DbgPrintEx.c)
 *     PopAcquireRwLockExclusive @ 0x1400F9D28 (PopAcquireRwLockExclusive.c)
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x14013036C (PopBatteryTraceSystemBatteryStatus.c)
 *     PopInitilizeAcDcSettings @ 0x14013A0EC (PopInitilizeAcDcSettings.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14015D930 (ZwUpdateWnfStateData.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PopTracePowerReconfig @ 0x14020983C (PopTracePowerReconfig.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 *     PopSetPowerSettingValueAcDc @ 0x1403F4AA8 (PopSetPowerSettingValueAcDc.c)
 *     PopExecutePowerAction @ 0x140530CA8 (PopExecutePowerAction.c)
 *     PopBatteryCheckTrigger @ 0x140544624 (PopBatteryCheckTrigger.c)
 *     PopEsQueueStateEvaluation @ 0x14054464C (PopEsQueueStateEvaluation.c)
 *     PopRecalculateCBTriggerLevels @ 0x1405446A0 (PopRecalculateCBTriggerLevels.c)
 *     PopInitSIdle @ 0x140545034 (PopInitSIdle.c)
 *     PopBatteryUpdateAlarms @ 0x14056E23C (PopBatteryUpdateAlarms.c)
 *     PopBatteryCheckTriggerAllBatteries @ 0x14066ECF4 (PopBatteryCheckTriggerAllBatteries.c)
 *     PopBatteryTracePercentageRemaining @ 0x14066F4F8 (PopBatteryTracePercentageRemaining.c)
 *     PopDiagTraceAcDcStateChange @ 0x140670BC0 (PopDiagTraceAcDcStateChange.c)
 *     PpmProfileAcDcUpdate @ 0x140675EE8 (PpmProfileAcDcUpdate.c)
 *     PopSqmBatteryUpdate @ 0x140676878 (PopSqmBatteryUpdate.c)
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
  void *ExplicitScope; // [rsp+20h] [rbp-49h]
  WNF_CHANGE_STAMP MatchingChangeStamp[2]; // [rsp+28h] [rbp-41h]
  __int64 CheckStamp; // [rsp+30h] [rbp-39h]
  char v26; // [rsp+40h] [rbp-29h]
  char v27; // [rsp+41h] [rbp-28h] BYREF
  unsigned int v28; // [rsp+44h] [rbp-25h] BYREF
  int Buffer; // [rsp+48h] [rbp-21h] BYREF
  int v30; // [rsp+4Ch] [rbp-1Dh]
  int v31; // [rsp+50h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-11h] BYREF
  char *v33; // [rsp+78h] [rbp+Fh]
  __int64 v34; // [rsp+80h] [rbp+17h]

  v2 = ~a1->m128i_i8[0];
  v30 = a2;
  v3 = a2;
  v4 = v2 & 1;
  v26 = 0;
  PopAcquirePolicyLock();
  if ( dword_140303D4C != v4 )
  {
    dword_140303D4C = v4;
    PopDiagTraceAcDcStateChange(v4);
    LOBYTE(v15) = 1;
    PopBatteryUpdateAlarms(v15, 0LL);
    PopSetNotificationWork(4u);
    PopInitSIdle();
    PopInitilizeAcDcSettings();
    PpmProfileAcDcUpdate();
    if ( v4 == 1 )
      PopMaxChargeRate = 0LL;
    v26 = 1;
  }
  if ( byte_1403035B8 )
  {
    PopSetPowerSettingValueAcDc((__int64)&GUID_BATTERY_COUNT, 4u, (__int64)&dword_1403035B4);
    v26 = 1;
  }
  PopReleasePolicyLock();
  if ( dword_1403035B4 )
  {
    v16 = a1->m128i_u32[1];
    v28 = 100;
    if ( HIDWORD(qword_140303600) > v16 )
      v28 = ((HIDWORD(qword_140303600) >> 1) + 100 * v16) / HIDWORD(qword_140303600);
    v17 = MEMORY[0xFFFFF78000000008];
    if ( dword_14030372C == -1 )
    {
      v18 = 0;
      LODWORD(v19) = 0;
    }
    else
    {
      v18 = v28 - dword_14030372C;
      v19 = (MEMORY[0xFFFFF78000000008] - qword_140303730 + 5000) / 0x2710uLL;
    }
    if ( v28 != dword_14030372C )
    {
      PopSetPowerSettingValueAcDc((__int64)&GUID_BATTERY_PERCENTAGE_REMAINING, 4u, (__int64)&v28);
      v20 = v28;
      PopSqmBatteryUpdate(v28, (unsigned int)v18, v4, (unsigned int)v19);
      PopBatteryTracePercentageRemaining(v20, (unsigned int)v18, v4, (unsigned int)v19);
      dword_14030372C = v20;
      v3 = v30;
      qword_140303730 = v17;
    }
    Buffer = dword_140303728;
    v21 = dword_140303728;
    if ( v4 == 1 )
    {
      v21 = 1;
    }
    else if ( v4 == ((unk_1403035E0 & 1) == 0) )
    {
      if ( byte_1403035B8 || !v18 && (_DWORD)v19 )
      {
LABEL_40:
        if ( v21 != dword_140303728 )
        {
          dword_140303728 = v21;
          ZwUpdateWnfStateData(&WNF_PO_BATTERY_DISCHARGING, &Buffer, 4u, 0LL, 0LL, 0, 0);
        }
        goto LABEL_5;
      }
      v21 = v18 < 0;
    }
    else
    {
      v21 = 0;
    }
    Buffer = v21;
    goto LABEL_40;
  }
LABEL_5:
  if ( a1->m128i_i32[0] != unk_1403035E0 || byte_1403035B8 )
  {
    PopSetNotificationWork(8u);
    byte_1403035B8 = 0;
  }
  v6 = *a1;
  HIDWORD(qword_1403035EC) = v3;
  v7 = (unsigned int)_mm_cvtsi128_si32(v6);
  v8 = _mm_srli_si128(v6, 8).m128i_u64[0];
  if ( v3 == -1 )
    v3 = 0;
  LODWORD(CheckStamp) = HIDWORD(v8);
  MatchingChangeStamp[0] = _mm_cvtsi128_si32(_mm_srli_si128(v6, 8));
  LODWORD(ExplicitScope) = v6.m128i_i32[1];
  unk_1403035E0 = v6;
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
    ExplicitScope,
    *(_QWORD *)MatchingChangeStamp,
    CheckStamp,
    v3);
  PopRecalculateCBTriggerLevels();
  PopBatteryTraceSystemBatteryStatus(0);
  if ( qword_140303600
    && (unsigned __int8)PopBatteryCheckTriggerAllBatteries(&unk_1403036C8, 1LL)
    && (dword_1403036CC & 2) == 0 )
  {
    PopGetPolicyWorker(64);
    PopCheckForWork();
  }
  PopAcquirePolicyLock();
  v9 = 0;
  v10 = 0LL;
  v11 = dword_1403035B4 != 0 ? 3 : 0;
  do
  {
    v12 = &PopCB[3 * v9];
    if ( (unsigned __int8)PopBatteryCheckTrigger(v12 + 37) )
    {
      if ( !byte_1403036C0 )
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
  if ( dword_14030361C != v11 )
  {
    v31 = v11;
    ZwUpdateWnfStateData(&WNF_PO_BATTERY_CHARGE_LEVEL, &v31, 4u, 0LL, 0LL, 0, 0);
    if ( (unsigned int)(v11 - 1) <= 1 != (unsigned int)(dword_14030361C - 1) <= 1
      && hProvider.LevelPlus1 > 5
      && TlgKeywordOn(&hProvider, 0x800000000000uLL) )
    {
      v27 = v22;
      v33 = &v27;
      v34 = 1LL;
      TlgWrite(&hProvider, &unk_14027CCAA, 0LL, 0LL, 3u, &pData);
    }
    dword_14030361C = v11;
  }
  if ( v26 )
    PopTracePowerReconfig();
  PopAcquireRwLockExclusive((unsigned __int64 *)&qword_140303748);
  memset(&xmmword_140303758, 0, 0x20uLL);
  BYTE7(xmmword_140303758) = dword_140303618;
  if ( dword_1403035B4 )
  {
    BYTE1(xmmword_140303758) = 1;
    LOBYTE(xmmword_140303758) = unk_1403035E0 & 1;
    BYTE2(xmmword_140303758) = (unk_1403035E0 & 4) != 0;
    DWORD2(xmmword_140303758) = HIDWORD(qword_140303600);
    HIDWORD(xmmword_140303758) = unk_1403035E4;
    *(_QWORD *)&xmmword_140303768 = qword_1403035EC;
    *((_QWORD *)&xmmword_140303768 + 1) = unk_140303608;
    BYTE3(xmmword_140303758) = (unk_1403035E0 & 2) != 0;
  }
  else
  {
    LOBYTE(xmmword_140303758) = dword_140303D4C == 0;
  }
  PopReleaseRwLock(&qword_140303748);
  LOBYTE(v13) = v26;
  PopEsQueueStateEvaluation(v13);
  return PopReleasePolicyLock();
}
