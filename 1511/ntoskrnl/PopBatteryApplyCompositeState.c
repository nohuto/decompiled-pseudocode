/*
 * XREFs of PopBatteryApplyCompositeState @ 0x1404F9820
 * Callers:
 *     PopBatteryWorker @ 0x1404F9510 (PopBatteryWorker.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1400923CC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140092474 (_TlgWrite.c)
 *     PopSetNotificationWork @ 0x140097574 (PopSetNotificationWork.c)
 *     DbgPrintEx @ 0x1400E6934 (DbgPrintEx.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x14011B4A0 (PopBatteryTraceSystemBatteryStatus.c)
 *     PopInitilizeAcDcSettings @ 0x140136C9C (PopInitilizeAcDcSettings.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     PopTracePowerReconfig @ 0x1401F0D0C (PopTracePowerReconfig.c)
 *     PopAcquirePolicyLock @ 0x14039C560 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x14039CE60 (PopReleasePolicyLock.c)
 *     PopSetPowerSettingValueAcDc @ 0x1404C1D24 (PopSetPowerSettingValueAcDc.c)
 *     PopExecutePowerAction @ 0x1404F6DC0 (PopExecutePowerAction.c)
 *     PopBatteryCheckTrigger @ 0x1404F99E8 (PopBatteryCheckTrigger.c)
 *     PopRecalculateCBTriggerLevels @ 0x1404F9A14 (PopRecalculateCBTriggerLevels.c)
 *     PopInitSIdle @ 0x14050A84C (PopInitSIdle.c)
 *     PopEsWorkItemSchedule @ 0x14050CF68 (PopEsWorkItemSchedule.c)
 *     PopBatteryUpdateAlarms @ 0x14053DF34 (PopBatteryUpdateAlarms.c)
 *     PopBatteryTracePercentageRemaining @ 0x140636FF0 (PopBatteryTracePercentageRemaining.c)
 *     PopDiagTraceAcDcStateChange @ 0x1406387B0 (PopDiagTraceAcDcStateChange.c)
 *     PpmProfileAcDcUpdate @ 0x14063D670 (PpmProfileAcDcUpdate.c)
 *     PopSqmBatteryUpdate @ 0x14063E020 (PopSqmBatteryUpdate.c)
 */

__int64 __fastcall PopBatteryApplyCompositeState(__m128i *a1, int a2)
{
  unsigned __int64 v2; // r15
  char v3; // al
  int v4; // ebx
  unsigned int v5; // esi
  unsigned int v7; // edi
  __int64 v8; // rdx
  __m128i v9; // xmm1
  __int64 v10; // r9
  unsigned __int64 v11; // xmm0_8
  unsigned int v12; // ebx
  __int64 v13; // rsi
  ULONG_PTR *v14; // r13
  char v15; // r14
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned int v19; // ecx
  unsigned int v20; // eax
  unsigned int v21; // r14d
  unsigned int v22; // ebx
  char v23; // [rsp+40h] [rbp-29h]
  char v24; // [rsp+41h] [rbp-28h] BYREF
  unsigned int v25; // [rsp+44h] [rbp-25h] BYREF
  int v26; // [rsp+48h] [rbp-21h]
  __int64 v27; // [rsp+50h] [rbp-19h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-11h] BYREF
  char *v29; // [rsp+78h] [rbp+Fh]
  int v30; // [rsp+80h] [rbp+17h]
  int v31; // [rsp+84h] [rbp+1Bh]

  LODWORD(v2) = 0;
  v3 = ~a1->m128i_i8[0];
  v26 = a2;
  v4 = a2;
  v5 = v3 & 1;
  v23 = 0;
  PopAcquirePolicyLock();
  v7 = 4;
  if ( dword_1402DE28C != v5 )
  {
    dword_1402DE28C = v5;
    PopDiagTraceAcDcStateChange(v5);
    LOBYTE(v17) = 1;
    PopBatteryUpdateAlarms(v17, 0LL);
    PopSetNotificationWork(4u, v18);
    PopInitSIdle();
    PopInitilizeAcDcSettings();
    PpmProfileAcDcUpdate();
    v23 = 1;
  }
  if ( byte_1402DE3D8 )
  {
    PopSetPowerSettingValueAcDc(&GUID_BATTERY_COUNT, 4u, &dword_1402DE3D4);
    v23 = 1;
  }
  PopReleasePolicyLock();
  if ( a1->m128i_i32[0] != (_DWORD)xmmword_1402DE400 || byte_1402DE3D8 )
  {
    PopSetNotificationWork(8u, v8);
    byte_1402DE3D8 = 0;
  }
  if ( dword_1402DE3D4 )
  {
    v19 = a1->m128i_u32[1];
    if ( v19 != DWORD1(xmmword_1402DE400) )
    {
      v20 = 100;
      v25 = 100;
      if ( (unsigned int)xmmword_1402DE424 > v19 )
      {
        v20 = (100 * v19 + ((unsigned int)xmmword_1402DE424 >> 1)) / (unsigned int)xmmword_1402DE424;
        v25 = v20;
      }
      if ( v20 != dword_1402DE548 )
      {
        v27 = MEMORY[0xFFFFF78000000008];
        if ( dword_1402DE548 == -1 )
        {
          v21 = 0;
        }
        else
        {
          v21 = v25 - dword_1402DE548;
          v2 = (MEMORY[0xFFFFF78000000008] - qword_1402DE550 + 5000) / 0x2710uLL;
        }
        PopSetPowerSettingValueAcDc(&GUID_BATTERY_PERCENTAGE_REMAINING, 4u, &v25);
        v22 = v25;
        PopSqmBatteryUpdate(v25, v21, v5, (unsigned int)v2);
        PopBatteryTracePercentageRemaining(v22, v21, v5, (unsigned int)v2);
        dword_1402DE548 = v22;
        v4 = v26;
        qword_1402DE550 = v27;
      }
    }
  }
  v9 = *a1;
  dword_1402DE410 = v4;
  v10 = (unsigned int)_mm_cvtsi128_si32(v9);
  v11 = _mm_srli_si128(v9, 8).m128i_u64[0];
  if ( v4 == -1 )
    v4 = 0;
  xmmword_1402DE400 = (__int128)v9;
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
    v10,
    v9.m128i_i32[1],
    _mm_cvtsi128_si32(_mm_srli_si128(v9, 8)),
    HIDWORD(v11),
    v4);
  PopRecalculateCBTriggerLevels();
  PopBatteryTraceSystemBatteryStatus(0);
  PopAcquirePolicyLock();
  v12 = 0;
  v13 = 0LL;
  do
  {
    v14 = &PopCB + 3 * v12;
    v15 = PopBatteryCheckTrigger(v14 + 37);
    if ( v15 )
    {
      if ( !byte_1402DE4E0 )
        PopExecutePowerAction(
          (__int64)(v14 + 37),
          8u,
          (__int64 *)PopPolicy + 3 * v12 + 13,
          *(_DWORD *)((char *)PopPolicy + v13 + 116),
          1u);
    }
    else
    {
      *(_DWORD *)((char *)&PopCB + v13 + 300) &= 0xFFFFFFFC;
    }
    if ( v12 == 1 && v15 != PopBatteryLowLastState )
    {
      if ( pCallbackContext.LevelPlus1 > 5 && TlgKeywordOn(&pCallbackContext, 0x800000000000uLL) )
      {
        v31 = 0;
        v29 = &v24;
        v24 = v15;
        v30 = 1;
        TlgWrite(&pCallbackContext, &unk_1402548CE, 0LL, 0LL, 3u, &pData);
      }
      PopBatteryLowLastState = v15;
    }
    ++v12;
    v13 += 24LL;
  }
  while ( v12 < 4 );
  if ( v23 )
  {
    PopTracePowerReconfig();
    v7 = 12;
  }
  PopEsWorkItemSchedule(v7);
  return PopReleasePolicyLock();
}
