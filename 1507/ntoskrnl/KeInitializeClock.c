/*
 * XREFs of KeInitializeClock @ 0x1407CFC78
 * Callers:
 *     Phase1InitializationIoReady @ 0x1407D05E0 (Phase1InitializationIoReady.c)
 *     InitBootProcessor @ 0x1407D089C (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 * Callees:
 *     KiSetPendingTick @ 0x1400E6C5C (KiSetPendingTick.c)
 *     RtlRbInsertNodeEx @ 0x1400F70F0 (RtlRbInsertNodeEx.c)
 *     PopPoCoalescinCallback @ 0x140139F40 (PopPoCoalescinCallback.c)
 *     KiSetupTimeIncrement @ 0x140162604 (KiSetupTimeIncrement.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     strstr @ 0x140171998 (strstr.c)
 *     xHalUnmaskInterrupt @ 0x14017DF24 (xHalUnmaskInterrupt.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     PoTraceDynamicTickDisabled @ 0x14023D0D4 (PoTraceDynamicTickDisabled.c)
 *     EmClientQueryRuleState @ 0x1403EB51C (EmClientQueryRuleState.c)
 */

BOOLEAN __fastcall KeInitializeClock(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  BOOLEAN v2; // bl
  unsigned __int8 CurrentIrql; // di
  _RTL_BALANCED_NODE *Root; // rdx
  BOOLEAN result; // al
  const char *v6; // rcx
  _RTL_BALANCED_NODE *v7; // rax
  int v8; // [rsp+30h] [rbp-48h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp-40h] BYREF
  int v10; // [rsp+40h] [rbp-38h]
  char v11; // [rsp+48h] [rbp-30h]
  unsigned __int64 v12; // [rsp+58h] [rbp-20h]
  unsigned int v13; // [rsp+60h] [rbp-18h]

  v2 = 0;
  if ( !(_DWORD)BugCheckParameter2 )
  {
    v6 = *(const char **)(a2 + 216);
    qword_140339108 = -1LL;
    qword_140339128 = -1LL;
    if ( v6 && strstr(v6, "DISABLEDYNAMICTICK") )
      KiDynamicTickDisableReason = 1;
    off_140321A30();
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
    result = HvlpFlags;
    if ( (HvlpFlags & 1) == 0 || (HvlpFlags & 4) != 0 )
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
  KiClockActive = 1;
  KiClockState = 0;
  off_140321A48();
  KiSetPendingTick(0);
  off_140321A40();
  off_140321A38();
  off_140321A50();
  KiSetPendingTick(1);
  Root = KiClockIntervalRequests.Root;
  KeTimeIncrement = v10;
  KiLastRequestedTimeIncrement = KeMaximumIncrement;
  dword_14033917C = KeMaximumIncrement;
  if ( !KiClockIntervalRequests.Root )
    goto LABEL_4;
  while ( KeMaximumIncrement < HIDWORD(Root[1].Left) )
  {
    v7 = Root->Children[0];
    if ( !Root->Children[0] )
      goto LABEL_4;
LABEL_35:
    Root = v7;
  }
  v7 = Root->Children[1];
  if ( v7 )
    goto LABEL_35;
  v2 = 1;
LABEL_4:
  RtlRbInsertNodeEx(&KiClockIntervalRequests, Root, v2, &KiDefaultClockIntervalRequest);
  byte_140339178 = 1;
  __writecr8(CurrentIrql);
  dword_140339110 = KeTimeIncrement;
  dword_140339114 = KeTimeIncrement;
  result = KiLastRequestedTimeIncrement;
  dword_140339118 = KiLastRequestedTimeIncrement;
  dword_14033911C = KiLastRequestedTimeIncrement;
  return result;
}
