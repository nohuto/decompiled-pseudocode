/*
 * XREFs of _PostTransformableMessage @ 0x1C0091938
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0061810 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxProcessEventMessage @ 0x1C0063E9C (xxxProcessEventMessage.c)
 *     IdleTimerProc @ 0x1C008C4C8 (IdleTimerProc.c)
 *     _PostTransformableMessageIL @ 0x1C009176C (_PostTransformableMessageIL.c)
 *     xxxSystemTimerProc @ 0x1C00C6990 (xxxSystemTimerProc.c)
 *     xxxMNCancel @ 0x1C01385D8 (xxxMNCancel.c)
 *     ?MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E2000 (-MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     PostMousePointerLeaveAndCleanup @ 0x1C01E2660 (PostMousePointerLeaveAndCleanup.c)
 *     xxxMNStartMenuState @ 0x1C01FD458 (xxxMNStartMenuState.c)
 * Callees:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C005FAE0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 */

__int64 __fastcall PostTransformableMessage(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, int a5)
{
  unsigned int v5; // ebx
  unsigned __int64 v6; // rcx

  v5 = 0;
  v6 = _PostTransformableMessageExtended(a1, a2, a3, a4, 0LL, a5);
  if ( v6 < (unsigned __int64)MmSystemRangeStart )
    return (unsigned int)v6;
  LOBYTE(v5) = v6 != 0;
  return v5;
}
