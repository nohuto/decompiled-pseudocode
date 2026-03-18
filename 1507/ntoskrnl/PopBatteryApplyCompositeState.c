/*
 * XREFs of PopBatteryApplyCompositeState @ 0x14056B6B4
 * Callers:
 *     PopBatteryWorker @ 0x14056B280 (PopBatteryWorker.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     PopSetNotificationWork @ 0x1400D0780 (PopSetNotificationWork.c)
 *     _TlgWrite @ 0x1400EFEB0 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400EFFB0 (_TlgKeywordOn.c)
 *     DbgPrintEx @ 0x140131EAC (DbgPrintEx.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x14014F8E0 (PopBatteryTraceSystemBatteryStatus.c)
 *     PopInitilizeAcDcSettings @ 0x14015F24C (PopInitilizeAcDcSettings.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PopTracePowerReconfig @ 0x14023EFB4 (PopTracePowerReconfig.c)
 *     PopReleasePolicyLock @ 0x1403EB86C (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1403EB8DC (PopAcquirePolicyLock.c)
 *     PopSetPowerSettingValueAcDc @ 0x14055E1B0 (PopSetPowerSettingValueAcDc.c)
 *     PopExecutePowerAction @ 0x1405654E8 (PopExecutePowerAction.c)
 *     PopBatteryCheckTrigger @ 0x14056B8B0 (PopBatteryCheckTrigger.c)
 *     PopRecalculateCBTriggerLevels @ 0x14056B8DC (PopRecalculateCBTriggerLevels.c)
 *     PopInitSIdle @ 0x1405813E0 (PopInitSIdle.c)
 *     PopBatteryUpdateAlarms @ 0x1405994E4 (PopBatteryUpdateAlarms.c)
 *     PopBatteryTracePercentageRemaining @ 0x1406B6E50 (PopBatteryTracePercentageRemaining.c)
 *     PopDiagTraceAcDcStateChange @ 0x1406B88C4 (PopDiagTraceAcDcStateChange.c)
 *     PpmProfileAcDcUpdate @ 0x1406BDEAC (PpmProfileAcDcUpdate.c)
 *     PopSqmBatteryUpdate @ 0x1406BE924 (PopSqmBatteryUpdate.c)
 */

__int64 __fastcall PopBatteryApplyCompositeState(__m128i *a1, int a2)
{
  unsigned __int64 v2; // r15
  char v3; // al
  int v4; // ebx
  unsigned int v5; // esi
  int v7; // edi
  __m128i v8; // xmm1
  __int64 v9; // r9
  unsigned __int64 v10; // xmm0_8
  unsigned int v11; // ebx
  __int64 v12; // rsi
  ULONG_PTR *v13; // r13
  char v14; // r14
  __int64 v16; // rcx
  unsigned int v17; // ecx
  unsigned int v18; // eax
  unsigned int v19; // r14d
  unsigned int v20; // ebx
  char v21; // [rsp+40h] [rbp-29h]
  char v22; // [rsp+41h] [rbp-28h] BYREF
  unsigned int v23; // [rsp+44h] [rbp-25h] BYREF
  int v24; // [rsp+48h] [rbp-21h]
  __int64 v25; // [rsp+50h] [rbp-19h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-11h] BYREF
  char *v27; // [rsp+78h] [rbp+Fh]
  int v28; // [rsp+80h] [rbp+17h]
  int v29; // [rsp+84h] [rbp+1Bh]

  LODWORD(v2) = 0;
  v3 = ~a1->m128i_i8[0];
  v24 = a2;
  v4 = a2;
  v5 = v3 & 1;
  v21 = 0;
  PopAcquirePolicyLock();
  v7 = 4;
  if ( dword_14032E84C != v5 )
  {
    dword_14032E84C = v5;
    PopDiagTraceAcDcStateChange(v5);
    LOBYTE(v16) = 1;
    PopBatteryUpdateAlarms(v16, 0LL);
    PopSetNotificationWork(4u);
    PopInitSIdle();
    PopInitilizeAcDcSettings();
    PpmProfileAcDcUpdate();
    v21 = 1;
  }
  if ( byte_14032E998 )
  {
    PopSetPowerSettingValueAcDc(&GUID_BATTERY_COUNT, 4u, &dword_14032E994);
    v21 = 1;
  }
  PopReleasePolicyLock();
  if ( a1->m128i_i32[0] != (_DWORD)xmmword_14032E9C0 || byte_14032E998 )
  {
    PopSetNotificationWork(8u);
    byte_14032E998 = 0;
  }
  if ( dword_14032E994 )
  {
    v17 = a1->m128i_u32[1];
    if ( v17 != DWORD1(xmmword_14032E9C0) )
    {
      v18 = 100;
      v23 = 100;
      if ( (unsigned int)xmmword_14032E9E4 > v17 )
      {
        v18 = (100 * v17 + ((unsigned int)xmmword_14032E9E4 >> 1)) / (unsigned int)xmmword_14032E9E4;
        v23 = v18;
      }
      if ( v18 != dword_14032EB08 )
      {
        v25 = MEMORY[0xFFFFF78000000008];
        if ( dword_14032EB08 == -1 )
        {
          v19 = 0;
        }
        else
        {
          v19 = v23 - dword_14032EB08;
          v2 = (MEMORY[0xFFFFF78000000008] - qword_14032EB10 + 5000) / 0x2710uLL;
        }
        PopSetPowerSettingValueAcDc(&GUID_BATTERY_PERCENTAGE_REMAINING, 4u, &v23);
        v20 = v23;
        PopSqmBatteryUpdate(v23, v19, v5, (unsigned int)v2);
        PopBatteryTracePercentageRemaining(v20, v19, v5, (unsigned int)v2);
        dword_14032EB08 = v20;
        v4 = v24;
        qword_14032EB10 = v25;
      }
    }
  }
  v8 = *a1;
  dword_14032E9D0 = v4;
  v9 = (unsigned int)_mm_cvtsi128_si32(v8);
  v10 = _mm_srli_si128(v8, 8).m128i_u64[0];
  if ( v4 == -1 )
    v4 = 0;
  xmmword_14032E9C0 = (__int128)v8;
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
    v9,
    v8.m128i_i32[1],
    _mm_cvtsi128_si32(_mm_srli_si128(v8, 8)),
    HIDWORD(v10),
    v4);
  PopRecalculateCBTriggerLevels();
  PopBatteryTraceSystemBatteryStatus(0);
  PopAcquirePolicyLock();
  v11 = 0;
  v12 = 0LL;
  do
  {
    v13 = &PopCB + 3 * v11;
    v14 = PopBatteryCheckTrigger(v13 + 37);
    if ( v14 )
    {
      if ( !byte_14032EAA0 )
        PopExecutePowerAction(
          (__int64)(v13 + 37),
          8u,
          (__int64 *)PopPolicy + 3 * v11 + 13,
          *(_DWORD *)((char *)PopPolicy + v12 + 116),
          1u);
    }
    else
    {
      *(_DWORD *)((char *)&PopCB + v12 + 300) &= 0xFFFFFFFC;
    }
    if ( v11 == 1 && v14 != PopBatteryLowLastState )
    {
      if ( pCallbackContext.LevelPlus1 > 5 && TlgKeywordOn(&pCallbackContext, 0x800000000000uLL) )
      {
        v29 = 0;
        v27 = &v22;
        v22 = v14;
        v28 = 1;
        TlgWrite(&pCallbackContext, &unk_1402A4875, 0LL, 0LL, 3u, &pData);
      }
      PopBatteryLowLastState = v14;
    }
    ++v11;
    v12 += 24LL;
  }
  while ( v11 < 4 );
  if ( v21 )
  {
    PopTracePowerReconfig();
    v7 = 12;
  }
  _m_prefetchw(&PopEsWorkItemDue);
  if ( _InterlockedOr(&PopEsWorkItemDue, v7 | 0x80000000) >= 0 )
    ExQueueWorkItem(&PopEsWorkItem, DelayedWorkQueue);
  return PopReleasePolicyLock();
}
