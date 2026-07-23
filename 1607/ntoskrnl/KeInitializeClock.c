/*
 * XREFs of KeInitializeClock @ 0x1407B87A4
 * Callers:
 *     Phase1InitializationIoReady @ 0x1407934EC (Phase1InitializationIoReady.c)
 *     InitBootProcessor @ 0x1407937C4 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 * Callees:
 *     KiSetPendingTick @ 0x14009D8F8 (KiSetPendingTick.c)
 *     RtlRbInsertNodeEx @ 0x1400EAD30 (RtlRbInsertNodeEx.c)
 *     xHalFreeMessageTarget @ 0x1401312D4 (xHalFreeMessageTarget.c)
 *     KiSetupTimeIncrement @ 0x14014A4F8 (KiSetupTimeIncrement.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     xHalUnmaskInterrupt @ 0x14014D1D0 (xHalUnmaskInterrupt.c)
 *     strstr @ 0x14014D4A8 (strstr.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     PoTraceDynamicTickDisabled @ 0x140207354 (PoTraceDynamicTickDisabled.c)
 *     EmClientQueryRuleState @ 0x1403C84A8 (EmClientQueryRuleState.c)
 */

BOOLEAN __fastcall KeInitializeClock(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  BOOLEAN v2; // bl
  BOOLEAN result; // al
  unsigned __int8 CurrentIrql; // di
  _RTL_BALANCED_NODE *Root; // rdx
  const char *v6; // rcx
  _RTL_BALANCED_NODE *v7; // rax
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
    qword_14030DDE8 = -1LL;
    qword_14030DE08 = -1LL;
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
  Root = KiClockIntervalRequests.Root;
  KeTimeIncrement = v10;
  KiLastRequestedTimeIncrement = KeMaximumIncrement;
  KeNonHrTimeIncrement = v10;
  dword_14030DE5C = KeMaximumIncrement;
  if ( !KiClockIntervalRequests.Root )
    goto LABEL_11;
  while ( KeMaximumIncrement < HIDWORD(Root[1].Left) )
  {
    v7 = Root->Children[0];
    if ( !Root->Children[0] )
      goto LABEL_11;
LABEL_34:
    Root = v7;
  }
  v7 = Root->Children[1];
  if ( v7 )
    goto LABEL_34;
  v2 = 1;
LABEL_11:
  RtlRbInsertNodeEx(&KiClockIntervalRequests, Root, v2, &KiDefaultClockIntervalRequest);
  byte_14030DE58 = 1;
  __writecr8(CurrentIrql);
  dword_14030DDF0 = KeTimeIncrement;
  dword_14030DDF4 = KeTimeIncrement;
  result = KiLastRequestedTimeIncrement;
  dword_14030DDF8 = KiLastRequestedTimeIncrement;
  dword_14030DDFC = KiLastRequestedTimeIncrement;
  return result;
}
