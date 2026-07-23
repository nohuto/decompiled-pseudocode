/*
 * XREFs of KeInitializeClock @ 0x14076DF9C
 * Callers:
 *     Phase1InitializationIoReady @ 0x140763CC8 (Phase1InitializationIoReady.c)
 *     InitBootProcessor @ 0x140763EA0 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x1407645E8 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x140034FA0 (RtlRbInsertNodeEx.c)
 *     KiSetPendingTick @ 0x1400355D8 (KiSetPendingTick.c)
 *     PopPoCoalescinCallback @ 0x1401264C0 (PopPoCoalescinCallback.c)
 *     KiSetupTimeIncrement @ 0x14014023C (KiSetupTimeIncrement.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     xHalUnmaskInterrupt @ 0x140143830 (xHalUnmaskInterrupt.c)
 *     strstr @ 0x140143918 (strstr.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     PoTraceDynamicTickDisabled @ 0x1401EEA1C (PoTraceDynamicTickDisabled.c)
 *     EmClientQueryRuleState @ 0x14039C5A8 (EmClientQueryRuleState.c)
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
    qword_1402E8C88 = -1LL;
    qword_1402E8CA8 = -1LL;
    if ( v6 && strstr(v6, "DISABLEDYNAMICTICK") )
      KiDynamicTickDisableReason = 1;
    off_1402D28E0();
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
  off_1402D28F8();
  KiSetPendingTick(0);
  off_1402D28F0();
  off_1402D28E8();
  off_1402D2900();
  KiSetPendingTick(1);
  Root = KiClockIntervalRequests.Root;
  KeTimeIncrement = v10;
  KiLastRequestedTimeIncrement = KeMaximumIncrement;
  dword_1402E8CFC = KeMaximumIncrement;
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
  byte_1402E8CF8 = 1;
  __writecr8(CurrentIrql);
  dword_1402E8C90 = KeTimeIncrement;
  dword_1402E8C94 = KeTimeIncrement;
  result = KiLastRequestedTimeIncrement;
  dword_1402E8C98 = KiLastRequestedTimeIncrement;
  dword_1402E8C9C = KiLastRequestedTimeIncrement;
  return result;
}
