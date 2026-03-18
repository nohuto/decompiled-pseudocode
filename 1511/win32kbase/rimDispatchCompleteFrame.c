/*
 * XREFs of rimDispatchCompleteFrame @ 0x1C00C8C44
 * Callers:
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C007DF30 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimProcessCompleteFrame @ 0x1C00C8D84 (rimProcessCompleteFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000FA94 (WPP_RECORDER_SF_q.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     HMAssignmentLock @ 0x1C0041430 (HMAssignmentLock.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C007F7DC (rimFreeAutoRepeatCompleteFrame.c)
 *     rimSignalReadComplete @ 0x1C0086B48 (rimSignalReadComplete.c)
 *     rimStackAttachAndProcessInput @ 0x1C0086D80 (rimStackAttachAndProcessInput.c)
 *     rimFixUpAutoRepeatCompleteFrameUpDowns @ 0x1C00C9B58 (rimFixUpAutoRepeatCompleteFrameUpDowns.c)
 */

__int64 __fastcall rimDispatchCompleteFrame(__int64 a1, __int64 a2, LARGE_INTEGER *a3)
{
  __int64 LowPart; // rax
  __int64 v7; // rdx
  __int64 v9; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10; // [rsp+38h] [rbp-10h]

  LowPart = a3->LowPart;
  LODWORD(v9) = 0;
  v10 = LowPart;
  a3[7].HighPart = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  a3[8] = KeQueryPerformanceCounter(0LL);
  rimStackAttachAndProcessInput(a1, a2, (__int64)a3, (__int64)&v9, 1);
  if ( !*(_QWORD *)(a1 + 808) && !*(_BYTE *)(a1 + 760) && *(_QWORD *)(a2 + 24) )
  {
    HMAssignmentLock((_QWORD *)(a1 + 48), (_DWORD *)a2);
    HMAssignmentLock((_QWORD *)(a1 + 56), *(_DWORD **)(a2 + 416));
  }
  rimSignalReadComplete(a1, a2);
  if ( *(_QWORD *)(a1 + 480) == -1LL )
    return Win32FreePool();
  rimFreeAutoRepeatCompleteFrame(a2);
  rimFixUpAutoRepeatCompleteFrameUpDowns(a1, v7, a3);
  if ( a3[3].LowPart )
  {
    a3[7].LowPart = 1;
    *(_DWORD *)(a2 + 176) |= 0x2000000u;
    *(_QWORD *)(a2 + 392) = a3;
  }
  else
  {
    Win32FreePool();
  }
  return WPP_RECORDER_SF_q(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           3u,
           5u,
           0x12u,
           (__int64)&WPP_764b95e916dcfe1972f518bef10ad2df_Traceguids,
           a2,
           v9,
           v10);
}
