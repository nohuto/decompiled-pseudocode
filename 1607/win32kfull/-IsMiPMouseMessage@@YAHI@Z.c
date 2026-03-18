/*
 * XREFs of ?IsMiPMouseMessage@@YAHI@Z @ 0x1C005814C
 * Callers:
 *     ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1C000AF9C (-GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z.c)
 *     PostInputMessage @ 0x1C005816C (PostInputMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01D82EC (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsMiPMouseMessage(int a1)
{
  return (unsigned int)(a1 - 512) <= 0xE || (unsigned int)(a1 - 160) <= 0xD;
}
