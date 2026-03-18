/*
 * XREFs of KeInitializeClock @ 0x1407B87A4
 * Callers:
 *     Phase1InitializationIoReady @ 0x1407934EC (Phase1InitializationIoReady.c)
 *     InitBootProcessor @ 0x1407937C4 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 * Callees:
 *     KiSetPendingTick @ 0x14009E0F8 (KiSetPendingTick.c)
 *     RtlRbInsertNodeEx @ 0x1400ECEC0 (RtlRbInsertNodeEx.c)
 *     xHalFreeMessageTarget @ 0x140130D64 (xHalFreeMessageTarget.c)
 *     KiSetupTimeIncrement @ 0x140149F88 (KiSetupTimeIncrement.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     xHalUnmaskInterrupt @ 0x14014CC60 (xHalUnmaskInterrupt.c)
 *     strstr @ 0x14014CF38 (strstr.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     PoTraceDynamicTickDisabled @ 0x140207528 (PoTraceDynamicTickDisabled.c)
 *     EmClientQueryRuleState @ 0x1403C84A8 (EmClientQueryRuleState.c)
 */

BOOLEAN __fastcall KeInitializeClock(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  bool v2; // bl
  BOOLEAN result; // al
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 v5; // rdx
  const char *v6; // rcx
  unsigned __int64 v7; // rax
  int v8; // [rsp+30h] [rbp-48h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp-40h] BYREF
  __int64 v10; // [rsp+40h] [rbp-38h]
  char v11; // [rsp+48h] [rbp-30h]
  unsigned __int64 v12; // [rsp+58h] [rbp-20h]
  unsigned int v13; // [rsp+60h] [rbp-18h]

  v2 = 0;
  if ( !(_DWORD)BugCheckParameter2 )
  {
    v6 = *(const char **)(a2 + 216);
    qword_14030DDA8 = -1LL;
    qword_14030DDC8 = -1LL;
    if ( v6 && strstr(v6, "DISABLEDYNAMICTICK") )
      KiDynamicTickDisableReason = 1;
    off_1402F2580();
    if ( (v11 & 4) != 0 )
      KiClockTimerPerCpu = 1;
    if ( (v11 & 2) != 0 )
      KiClockTimerHighLatency = 1;
    if ( (v11 & 1) != 0 )
      KiClockTimerAlwaysOnPresent = 1;
    if ( !(_BYTE)KiDynamicTickDisableReason && (v11 & 8) == 0 )
      KiDynamicTickDisableReason = 2;
    return KiSetupTimeIncrement(v12, v13);
  }
  if ( (_DWORD)BugCheckParameter2 != 1 )
  {
    if ( (_DWORD)BugCheckParameter2 != 2 )
      KeBugCheckEx(0x33u, 1uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
    if ( (_BYTE)KiDynamicTickDisableReason )
      return PoTraceDynamicTickDisabled();
    if ( !HvlHypervisorConnected || (result = HvlpFlags, (HvlpFlags & 2) != 0) )
    {
      v8 = 1;
      EmClientQueryRuleState(&GUID_EM_CPU_TYPE_INTEL_DTT_DISABLE, &v8);
      if ( v8 == 2 )
      {
        result = 3;
        KiDynamicTickDisableReason = 3;
      }
      else
      {
        result = KiDynamicTickDisableReason;
      }
      if ( result )
        return PoTraceDynamicTickDisabled();
    }
    return result;
  }
  KeQueryPerformanceCounter(&PerformanceFrequency);
  KiClockStateUpdateTimeout = 5 * PerformanceFrequency.QuadPart;
  *(_BYTE *)(KiProcessorBlock[KiClockTimerOwner] + 33) = 1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xDuLL);
  KiClockState = 0;
  off_1402F2598();
  KiSetPendingTick(0);
  off_1402F2590();
  off_1402F2588();
  off_1402F25A0();
  KiSetPendingTick(1);
  v5 = KiClockIntervalRequests;
  KeTimeIncrement = v10;
  KiLastRequestedTimeIncrement = KeMaximumIncrement;
  KeNonHrTimeIncrement = v10;
  dword_14030DE1C = KeMaximumIncrement;
  if ( !KiClockIntervalRequests )
    goto LABEL_11;
  while ( KeMaximumIncrement < *(_DWORD *)(v5 + 28) )
  {
    v7 = *(_QWORD *)v5;
    if ( !*(_QWORD *)v5 )
      goto LABEL_11;
LABEL_34:
    v5 = v7;
  }
  v7 = *(_QWORD *)(v5 + 8);
  if ( v7 )
    goto LABEL_34;
  v2 = 1;
LABEL_11:
  RtlRbInsertNodeEx(
    (unsigned __int64 *)&KiClockIntervalRequests,
    v5,
    v2,
    (unsigned __int64)&KiDefaultClockIntervalRequest);
  byte_14030DE18 = 1;
  __writecr8(CurrentIrql);
  dword_14030DDB0 = KeTimeIncrement;
  dword_14030DDB4 = KeTimeIncrement;
  result = KiLastRequestedTimeIncrement;
  dword_14030DDB8 = KiLastRequestedTimeIncrement;
  dword_14030DDBC = KiLastRequestedTimeIncrement;
  return result;
}
