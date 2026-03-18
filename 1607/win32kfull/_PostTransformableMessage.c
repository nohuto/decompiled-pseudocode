/*
 * XREFs of _PostTransformableMessage @ 0x1C009CF34
 * Callers:
 *     ?MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C000AE70 (-MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     IdleTimerProc @ 0x1C00597E4 (IdleTimerProc.c)
 *     xxxProcessEventMessage @ 0x1C00889B8 (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxSystemTimerProc @ 0x1C0096EA0 (xxxSystemTimerProc.c)
 *     _PostTransformableMessageIL @ 0x1C009CD54 (_PostTransformableMessageIL.c)
 *     xxxMNCancel @ 0x1C013C7D8 (xxxMNCancel.c)
 *     PostMousePointerLeaveAndCleanup @ 0x1C01D87C0 (PostMousePointerLeaveAndCleanup.c)
 *     xxxMNStartMenuState @ 0x1C01F4A64 (xxxMNStartMenuState.c)
 * Callees:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00805A0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 */

__int64 __fastcall PostTransformableMessage(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
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
