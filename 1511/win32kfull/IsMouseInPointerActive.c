/*
 * XREFs of IsMouseInPointerActive @ 0x1C006440C
 * Callers:
 *     ?IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C000B1DC (-IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z.c)
 *     ?ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z @ 0x1C0053C94 (-ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0061810 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?MiPCheckMsgFilter@@YAHPEAUtagQMSG@@III@Z @ 0x1C0065734 (-MiPCheckMsgFilter@@YAHPEAUtagQMSG@@III@Z.c)
 *     xxxDoHotKeyStuff @ 0x1C0083DBC (xxxDoHotKeyStuff.c)
 * Callees:
 *     IsShellThreadMiPEnabled @ 0x1C0064470 (IsShellThreadMiPEnabled.c)
 */

_BOOL8 __fastcall IsMouseInPointerActive(__int64 a1, __int64 a2)
{
  return a2 != 1
      && !*(_QWORD *)(a1 + 528)
      && ((*(_DWORD *)(*(_QWORD *)(a1 + 376) + 776LL) & 4) != 0 || (unsigned int)IsShellThreadMiPEnabled(a1))
      && (!a2 || (*(_DWORD *)(a2 + 92) & 0x20) == 0);
}
