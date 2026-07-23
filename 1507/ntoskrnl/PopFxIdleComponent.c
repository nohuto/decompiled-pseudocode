/*
 * XREFs of PopFxIdleComponent @ 0x1400274D0
 * Callers:
 *     PoFxIdleDevice @ 0x140026DEC (PoFxIdleDevice.c)
 *     PopFxCompleteComponentActivation @ 0x140027434 (PopFxCompleteComponentActivation.c)
 *     PoFxIdleComponent @ 0x1400274BC (PoFxIdleComponent.c)
 *     PopFxResidentTimeoutRoutine @ 0x14012A5F8 (PopFxResidentTimeoutRoutine.c)
 *     PoFxReportDevicePoweredOn @ 0x140136498 (PoFxReportDevicePoweredOn.c)
 *     PoFxStartDevicePowerManagement @ 0x140169748 (PoFxStartDevicePowerManagement.c)
 * Callees:
 *     PopFxIdleWorker @ 0x140027888 (PopFxIdleWorker.c)
 *     PopFxQueueWorkOrder @ 0x140029174 (PopFxQueueWorkOrder.c)
 *     RtlGetInterruptTimePrecise @ 0x1400EA820 (RtlGetInterruptTimePrecise.c)
 *     PopFxArmResidentTimer @ 0x14012A750 (PopFxArmResidentTimer.c)
 *     PopFxBugCheck @ 0x1402373B8 (PopFxBugCheck.c)
 */

__int64 __fastcall PopFxIdleComponent(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, char a3)
{
  unsigned __int64 QuadPart; // r8
  ULONG_PTR v6; // rbx
  unsigned __int64 v7; // rax
  __int64 result; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  LARGE_INTEGER PerformanceCounter; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v13; // [rsp+50h] [rbp+8h]

  if ( (a3 & 3) == 3 )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 1uLL);
  if ( (unsigned int)BugCheckParameter3 >= *(_DWORD *)(BugCheckParameter2 + 620) )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 2uLL);
  _mm_lfence();
  QuadPart = 0LL;
  v6 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 624) + 8LL * (unsigned int)BugCheckParameter3);
  if ( PopFxActiveIdleLevel == 2 )
  {
    QuadPart = RtlGetInterruptTimePrecise(&PerformanceCounter).QuadPart;
    v7 = *(_QWORD *)(v6 + 144);
    while ( v7 < QuadPart )
    {
      v11 = v7;
      v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 144), QuadPart, v7);
      if ( v11 == v7 )
        break;
      _mm_pause();
    }
  }
  else
  {
    v7 = *(_QWORD *)(v6 + 144);
  }
  v13 = v7;
  if ( (*(_DWORD *)(v6 + 88) & 0x3FFFFFFF) == 0 )
    PopFxBugCheck(0x608uLL, v6, *(int *)(v6 + 88), 0LL);
  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 88));
  if ( (_DWORD)result == 0x80000000 )
  {
    if ( !QuadPart )
      QuadPart = RtlGetInterruptTimePrecise(&PerformanceCounter).QuadPart;
    if ( (*(_DWORD *)(v6 + 92) & 2) == 0
      && !PopFxLowPowerEpoch
      && QuadPart - v13 < (unsigned int)PopFxActiveIdleThreshold )
    {
      result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v6 + 88), -2147483647, 0x80000000);
      if ( (_DWORD)result != 0x80000000 )
        return result;
      if ( _InterlockedIncrement((volatile signed __int32 *)(v6 + 96)) == 1 )
      {
        result = (unsigned int)_InterlockedIncrement(&PopFxResidentComponentCount);
        if ( (_DWORD)result == 1 )
          return PopFxArmResidentTimer(0LL);
        return result;
      }
      _InterlockedDecrement((volatile signed __int32 *)(v6 + 96));
      _InterlockedDecrement((volatile signed __int32 *)(v6 + 88));
    }
    if ( PopFxActiveIdleLevel == 1 )
    {
      v9 = *(_QWORD *)(v6 + 144);
      while ( v9 < QuadPart )
      {
        v10 = v9;
        v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 144), QuadPart, v9);
        if ( v10 == v9 )
          break;
        _mm_pause();
      }
    }
    if ( (a3 & 2) != 0 )
      return PopFxQueueWorkOrder(&PopFxSystemWorkQueue, v6 + 24, BugCheckParameter2, 0LL);
    else
      return PopFxIdleWorker(BugCheckParameter2);
  }
  return result;
}
