/*
 * XREFs of ThreadLockExchange @ 0x1C00777C4
 * Callers:
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C005BA70 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C00775CC (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C009C580 (xxxMakeWindowForegroundWithState.c)
 *     xxxMenuDraw @ 0x1C00B6AD8 (xxxMenuDraw.c)
 *     DestroyThreadsTimers @ 0x1C00ECD60 (DestroyThreadsTimers.c)
 *     ?xxxPointerParentNotify@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@@Z @ 0x1C01F2168 (-xxxPointerParentNotify@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@@Z.c)
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01F264C (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     xxxOldNextWindow @ 0x1C01F8E9C (xxxOldNextWindow.c)
 *     xxxMNChar @ 0x1C020F234 (xxxMNChar.c)
 *     xxxMNSetTop @ 0x1C020FF28 (xxxMNSetTop.c)
 *     ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x1C0225034 (-xxxCompositedTraverse@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ThreadLockExchange(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = a1;
  if ( a1 )
    ++*(_DWORD *)(a1 + 8);
  if ( result )
  {
    if ( (*(_DWORD *)(result + 8))-- == 1 )
      return HMUnlockObjectInternal(result);
  }
  return result;
}
