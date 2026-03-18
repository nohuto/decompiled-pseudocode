/*
 * XREFs of ?IsMiPMouseMessage@@YAHI@Z @ 0x1C006C090
 * Callers:
 *     ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1C0006310 (-GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z.c)
 *     ?_LogQMsgMiP@@YAXIPEBUtagMSG@@K@Z @ 0x1C006BFD0 (-_LogQMsgMiP@@YAXIPEBUtagMSG@@K@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00724A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     PostInputMessage @ 0x1C008C718 (PostInputMessage.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01E1B7C (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsMiPMouseMessage(int a1)
{
  return (unsigned int)(a1 - 512) <= 0xE || (unsigned int)(a1 - 160) <= 0xD;
}
