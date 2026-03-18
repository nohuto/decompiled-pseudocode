/*
 * XREFs of rimFreeAutoRepeatCompleteFrame @ 0x1C007DE6C
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C00103C4 (rimProcessDeviceBufferAndStartRead.c)
 *     RIMUnregisterForInput @ 0x1C007DAD0 (RIMUnregisterForInput.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C0081960 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimDispatchCompleteFrame @ 0x1C00D831C (rimDispatchCompleteFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0010310 (WPP_RECORDER_SF_q.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

__int64 __fastcall rimFreeAutoRepeatCompleteFrame(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 408) )
  {
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      5u,
      0x12u,
      (__int64)&WPP_cd8468652fd634243bf5ebcdf265be96_Traceguids,
      a1);
    *(_DWORD *)(a1 + 184) &= ~0x2000000u;
    result = Win32FreePool();
    *(_QWORD *)(a1 + 408) = 0LL;
  }
  return result;
}
