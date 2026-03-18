/*
 * XREFs of rimDispatchCompleteFrame @ 0x1C00D831C
 * Callers:
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C0081960 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimProcessCompleteFrame @ 0x1C00D8460 (rimProcessCompleteFrame.c)
 * Callees:
 *     rimStackAttachAndProcessInput @ 0x1C000FEEC (rimStackAttachAndProcessInput.c)
 *     WPP_RECORDER_SF_q @ 0x1C0010310 (WPP_RECORDER_SF_q.c)
 *     rimSignalReadComplete @ 0x1C00104A4 (rimSignalReadComplete.c)
 *     HMAssignmentLock @ 0x1C0015370 (HMAssignmentLock.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C007DE6C (rimFreeAutoRepeatCompleteFrame.c)
 *     RIMFixUpAutoRepeatCompleteFrameUpDowns @ 0x1C00D9A00 (RIMFixUpAutoRepeatCompleteFrameUpDowns.c)
 */

__int64 __fastcall rimDispatchCompleteFrame(__int64 a1, __int64 a2, LARGE_INTEGER *a3)
{
  __int64 v6; // rdx
  __int64 v8; // [rsp+30h] [rbp-18h] BYREF
  __int64 LowPart; // [rsp+38h] [rbp-10h]

  v8 = 0LL;
  LowPart = a3->LowPart;
  a3[7].HighPart = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  a3[8] = KeQueryPerformanceCounter(0LL);
  rimStackAttachAndProcessInput(a1, a2, (__int64)a3, (__int64)&v8, 1);
  if ( !*(_QWORD *)(a1 + 760) && !*(_BYTE *)(a1 + 712) && *(_QWORD *)(a2 + 24) )
  {
    HMAssignmentLock((_QWORD *)(a1 + 48), (_DWORD *)a2);
    HMAssignmentLock((_QWORD *)(a1 + 56), *(_DWORD **)(a2 + 480));
  }
  rimSignalReadComplete(a1, a2);
  if ( *(_QWORD *)(a1 + 480) == -1LL )
    return Win32FreePool();
  rimFreeAutoRepeatCompleteFrame(a2);
  RIMFixUpAutoRepeatCompleteFrameUpDowns(a1, v6, a3);
  if ( a3[3].LowPart )
  {
    a3[7].LowPart = 1;
    *(_DWORD *)(a2 + 184) |= 0x2000000u;
    *(_QWORD *)(a2 + 408) = a3;
  }
  else
  {
    Win32FreePool();
  }
  return WPP_RECORDER_SF_q(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           3u,
           5u,
           0x14u,
           (__int64)&WPP_cd8468652fd634243bf5ebcdf265be96_Traceguids,
           a2,
           v8,
           LowPart);
}
