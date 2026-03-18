/*
 * XREFs of rimFreeAutoRepeatCompleteFrame @ 0x1C007F7DC
 * Callers:
 *     RIMUnregisterForInput @ 0x1C000A470 (RIMUnregisterForInput.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C007DF30 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimDispatchCompleteFrame @ 0x1C00C8C44 (rimDispatchCompleteFrame.c)
 *     rimProcessFrameBasedHidInput @ 0x1C00C8E14 (rimProcessFrameBasedHidInput.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000FA94 (WPP_RECORDER_SF_q.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 */

__int64 __fastcall rimFreeAutoRepeatCompleteFrame(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 392) )
  {
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      5u,
      0x10u,
      (__int64)&WPP_764b95e916dcfe1972f518bef10ad2df_Traceguids,
      a1);
    *(_DWORD *)(a1 + 176) &= ~0x2000000u;
    result = Win32FreePool();
    *(_QWORD *)(a1 + 392) = 0LL;
  }
  return result;
}
