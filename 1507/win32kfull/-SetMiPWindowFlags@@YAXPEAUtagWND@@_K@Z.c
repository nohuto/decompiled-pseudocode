/*
 * XREFs of ?SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z @ 0x1C0009180
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00724A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     PostMousePointerLeaveAndCleanup @ 0x1C01E2140 (PostMousePointerLeaveAndCleanup.c)
 * Callees:
 *     InternalSetProp @ 0x1C0081908 (InternalSetProp.c)
 */

void __fastcall SetMiPWindowFlags(struct tagWND *a1, __int64 a2)
{
  if ( a1 )
    InternalSetProp(a1, (unsigned __int16)gatomMiPFlags, a2, 5LL);
}
