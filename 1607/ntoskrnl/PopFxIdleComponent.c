/*
 * XREFs of PopFxIdleComponent @ 0x1400C1B10
 * Callers:
 *     PoFxIdleDevice @ 0x14000842C (PoFxIdleDevice.c)
 *     PopFxResidentTimeoutRoutine @ 0x1400C0F9C (PopFxResidentTimeoutRoutine.c)
 *     PopFxCompleteComponentActivation @ 0x1400C1A64 (PopFxCompleteComponentActivation.c)
 *     PoFxIdleComponent @ 0x1400C1AF8 (PoFxIdleComponent.c)
 *     PoFxReportDevicePoweredOn @ 0x1401246D0 (PoFxReportDevicePoweredOn.c)
 *     PoFxStartDevicePowerManagement @ 0x140141B30 (PoFxStartDevicePowerManagement.c)
 * Callees:
 *     PopFxIdleWorker @ 0x1400C178C (PopFxIdleWorker.c)
 *     PpmInterlockedUpdateTimeNoFence @ 0x1400C1C90 (PpmInterlockedUpdateTimeNoFence.c)
 *     PopFxArmResidentTimer @ 0x1400C2F94 (PopFxArmResidentTimer.c)
 *     PopFxQueueWorkOrder @ 0x1400C3074 (PopFxQueueWorkOrder.c)
 *     RtlGetInterruptTimePrecise @ 0x1400D71A0 (RtlGetInterruptTimePrecise.c)
 *     PopFxBugCheck @ 0x1402022F4 (PopFxBugCheck.c)
 */

void __fastcall PopFxIdleComponent(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, char a3)
{
  unsigned int v3; // esi
  __int64 v6; // r11
  ULONG_PTR v7; // rbx
  ULONG_PTR v8; // r14
  __int64 InterruptTimePrecise; // rax
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v3 = BugCheckParameter3;
  if ( (a3 & 3) == 3 )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 1uLL);
  if ( (unsigned int)BugCheckParameter3 >= *(_DWORD *)(BugCheckParameter2 + 620) )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 2uLL);
  _mm_lfence();
  v6 = 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 624) + 8LL * (unsigned int)BugCheckParameter3);
  if ( PopFxActiveIdleLevel == 2 )
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(v10);
    v8 = v7 + 144;
    PpmInterlockedUpdateTimeNoFence(v7 + 144, InterruptTimePrecise, &v11);
  }
  else
  {
    v8 = v7 + 144;
    v11 = *(_QWORD *)(v7 + 144);
  }
  if ( (*(_DWORD *)(v7 + 88) & 0x3FFFFFFF) == 0 )
    PopFxBugCheck(0x608uLL, v7, *(int *)(v7 + 88), 0LL);
  if ( _InterlockedDecrement((volatile signed __int32 *)(v7 + 88)) == 0x80000000 )
  {
    if ( !v6 )
      v6 = RtlGetInterruptTimePrecise(v10);
    if ( (*(_DWORD *)(v7 + 92) & 2) == 0
      && !PopFxLowPowerEpoch
      && v6 - v11 < (unsigned __int64)(unsigned int)PopFxActiveIdleThreshold )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 88), -2147483647, 0x80000000) != 0x80000000 )
        return;
      if ( _InterlockedIncrement((volatile signed __int32 *)(v7 + 96)) == 1 )
      {
        if ( _InterlockedIncrement(&PopFxResidentComponentCount) == 1 )
          PopFxArmResidentTimer(0LL);
        return;
      }
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 96));
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 88));
    }
    if ( PopFxActiveIdleLevel == 1 )
      PpmInterlockedUpdateTimeNoFence(v8, v6, 0LL);
    if ( (a3 & 2) != 0 )
      PopFxQueueWorkOrder(&PopFxSystemWorkQueue, (PLIST_ENTRY)(v7 + 24), BugCheckParameter2);
    else
      PopFxIdleWorker((_QWORD *)BugCheckParameter2, v3);
  }
}
