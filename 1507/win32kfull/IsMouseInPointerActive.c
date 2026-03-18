/*
 * XREFs of IsMouseInPointerActive @ 0x1C00E1D04
 * Callers:
 *     ?IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C0007FB4 (-IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z.c)
 *     xxxDoHotKeyStuff @ 0x1C0049418 (xxxDoHotKeyStuff.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00724A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     WakeSomeone @ 0x1C0090208 (WakeSomeone.c)
 *     ?MiPCheckMsgFilter@@YAHPEAUtagQMSG@@III@Z @ 0x1C00E1C4C (-MiPCheckMsgFilter@@YAHPEAUtagQMSG@@III@Z.c)
 *     ?ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z @ 0x1C00E1CD0 (-ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z.c)
 * Callees:
 *     IsShellThreadMiPEnabled @ 0x1C00E1D60 (IsShellThreadMiPEnabled.c)
 */

_BOOL8 __fastcall IsMouseInPointerActive(__int64 a1, __int64 a2)
{
  return a2 != 1
      && !*(_QWORD *)(a1 + 536)
      && ((*(_DWORD *)(*(_QWORD *)(a1 + 384) + 776LL) & 4) != 0 || (unsigned int)IsShellThreadMiPEnabled(a1))
      && (!a2 || (*(_DWORD *)(a2 + 92) & 0x20) == 0);
}
