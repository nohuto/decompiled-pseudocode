/*
 * XREFs of rimDispatchCompleteFrame @ 0x1C00C7D4C
 * Callers:
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C00854E4 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimProcessCompleteFrame @ 0x1C00C7E80 (rimProcessCompleteFrame.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     HMAssignmentLock @ 0x1C004D0A0 (HMAssignmentLock.c)
 *     rimSignalReadComplete @ 0x1C006EEB4 (rimSignalReadComplete.c)
 *     rimStackAttachAndProcessInput @ 0x1C006F030 (rimStackAttachAndProcessInput.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C0071978 (rimFreeAutoRepeatCompleteFrame.c)
 *     WPP_RECORDER_SF_q @ 0x1C0077B00 (WPP_RECORDER_SF_q.c)
 *     rimFixUpAutoRepeatCompleteFrameUpDowns @ 0x1C00C8C58 (rimFixUpAutoRepeatCompleteFrameUpDowns.c)
 */

__int64 __fastcall rimDispatchCompleteFrame(__int64 a1, __int64 a2, LARGE_INTEGER *a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v10; // [rsp+30h] [rbp-18h] BYREF
  __int64 LowPart; // [rsp+38h] [rbp-10h]

  v10 = 0LL;
  LowPart = a3->LowPart;
  a3[7].HighPart = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  a3[8] = KeQueryPerformanceCounter(0LL);
  rimStackAttachAndProcessInput(a1, a2, (__int64)a3, (__int64)&v10, 1);
  if ( !*(_QWORD *)(a1 + 760) && !*(_BYTE *)(a1 + 728) && *(_QWORD *)(a2 + 24) )
  {
    HMAssignmentLock((_DWORD **)(a1 + 48), (_DWORD *)a2);
    HMAssignmentLock((_DWORD **)(a1 + 56), *(_DWORD **)(a2 + 416));
  }
  rimSignalReadComplete(a1, a2);
  if ( *(_QWORD *)(a1 + 440) == -1LL )
    return Win32FreePool();
  rimFreeAutoRepeatCompleteFrame(a1, v6, v7);
  a3[7].LowPart = 1;
  rimFixUpAutoRepeatCompleteFrameUpDowns(a1, v8, a3);
  *(_QWORD *)(a1 + 472) = a3;
  *(_DWORD *)(a2 + 184) |= 0x2000000u;
  return WPP_RECORDER_SF_q(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           3u,
           5u,
           0x12u,
           (__int64)&WPP_6c94d55ff2a354cdce5d424b790ce363_Traceguids,
           a2,
           v10,
           LowPart);
}
