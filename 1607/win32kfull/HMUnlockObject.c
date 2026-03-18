/*
 * XREFs of HMUnlockObject @ 0x1C005EAEC
 * Callers:
 *     ?xxxSendChildNCPaint@@YAXPEAUtagWND@@@Z @ 0x1C0055550 (-xxxSendChildNCPaint@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C005E76C (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     ThreadLockExchangeAlways @ 0x1C005E968 (ThreadLockExchangeAlways.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxScrollWindowEx @ 0x1C00ADA68 (xxxScrollWindowEx.c)
 *     Win32kRIMDevChangeCallback @ 0x1C00E2AC0 (Win32kRIMDevChangeCallback.c)
 *     xxxWindowHitTest @ 0x1C0117FD0 (xxxWindowHitTest.c)
 *     ?UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z @ 0x1C0124110 (-UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C01E1AB8 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     HMUnlockDestroyObject @ 0x1C01E670C (HMUnlockDestroyObject.c)
 *     ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0202448 (-xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     xxxUpdateThreadsWindows @ 0x1C02053DC (xxxUpdateThreadsWindows.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C0222F9C (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HMUnlockObject(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 8))-- == 1 )
    return HMUnlockObjectInternal(a1);
  return a1;
}
