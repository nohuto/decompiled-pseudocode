/*
 * XREFs of IsWheelTargetDesktopApp @ 0x1C01DA448
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0061810 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z @ 0x1C00874E8 (-xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z.c)
 * Callees:
 *     IsShellProcess @ 0x1C00738DC (IsShellProcess.c)
 *     MouseWheelRoutingFocus @ 0x1C01DA4B4 (MouseWheelRoutingFocus.c)
 */

__int64 __fastcall IsWheelTargetDesktopApp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx

  v5 = 0;
  if ( (unsigned int)MouseWheelRoutingFocus(a1, a2, a3, a4) || !a1 )
    return 1LL;
  if ( *(_DWORD *)UPDWORDPointer(8220LL) != 1 )
    return 0LL;
  if ( (unsigned int)IsDesktopApp(*(_QWORD *)(a1 + 376)) || (unsigned int)IsShellProcess(*(_QWORD *)(a1 + 376)) )
    return 1;
  return v5;
}
