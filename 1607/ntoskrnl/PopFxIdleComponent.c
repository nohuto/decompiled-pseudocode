/*
 * XREFs of PopFxIdleComponent @ 0x1400BF9A0
 * Callers:
 *     PoFxIdleDevice @ 0x140007FA0 (PoFxIdleDevice.c)
 *     PopFxResidentTimeoutRoutine @ 0x1400BEE2C (PopFxResidentTimeoutRoutine.c)
 *     PopFxCompleteComponentActivation @ 0x1400BF8F4 (PopFxCompleteComponentActivation.c)
 *     PoFxIdleComponent @ 0x1400BF988 (PoFxIdleComponent.c)
 *     PoFxReportDevicePoweredOn @ 0x140124C40 (PoFxReportDevicePoweredOn.c)
 *     PoFxStartDevicePowerManagement @ 0x1401420A0 (PoFxStartDevicePowerManagement.c)
 * Callees:
 *     PopFxIdleWorker @ 0x1400BF61C (PopFxIdleWorker.c)
 *     PpmInterlockedUpdateTimeNoFence @ 0x1400BFB20 (PpmInterlockedUpdateTimeNoFence.c)
 *     PopFxArmResidentTimer @ 0x1400C0E24 (PopFxArmResidentTimer.c)
 *     PopFxQueueWorkOrder @ 0x1400C0F04 (PopFxQueueWorkOrder.c)
 *     RtlGetInterruptTimePrecise @ 0x1400D5040 (RtlGetInterruptTimePrecise.c)
 *     PopFxBugCheck @ 0x140202120 (PopFxBugCheck.c)
 */

void __fastcall PopFxIdleComponent(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, char a3)
{
  unsigned int v3; // esi
  LARGE_INTEGER v6; // r11
  ULONG_PTR v7; // rbx
  ULONG_PTR v8; // r14
  LARGE_INTEGER InterruptTimePrecise; // rax
  LARGE_INTEGER PerformanceCounter; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v3 = BugCheckParameter3;
  if ( (a3 & 3) == 3 )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 1uLL);
  if ( (unsigned int)BugCheckParameter3 >= *(_DWORD *)(BugCheckParameter2 + 620) )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 2uLL);
  _mm_lfence();
  v6.QuadPart = 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 624) + 8LL * (unsigned int)BugCheckParameter3);
  if ( PopFxActiveIdleLevel == 2 )
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    v8 = v7 + 144;
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))PpmInterlockedUpdateTimeNoFence)(
      v7 + 144,
      (LARGE_INTEGER)InterruptTimePrecise.QuadPart,
      &v11);
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
    if ( !v6.QuadPart )
      v6 = RtlGetInterruptTimePrecise(&PerformanceCounter);
    if ( (*(_DWORD *)(v7 + 92) & 2) == 0
      && !PopFxLowPowerEpoch
      && v6.QuadPart - v11 < (unsigned __int64)(unsigned int)PopFxActiveIdleThreshold )
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
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))PpmInterlockedUpdateTimeNoFence)(
        v8,
        (LARGE_INTEGER)v6.QuadPart,
        0LL);
    if ( (a3 & 2) != 0 )
      PopFxQueueWorkOrder(&PopFxSystemWorkQueue, (PLIST_ENTRY)(v7 + 24), BugCheckParameter2);
    else
      PopFxIdleWorker((_QWORD *)BugCheckParameter2, v3);
  }
}
