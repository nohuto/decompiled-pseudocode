/*
 * XREFs of ?SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z @ 0x1C000C914
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0061810 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     PostMousePointerLeaveAndCleanup @ 0x1C01E2660 (PostMousePointerLeaveAndCleanup.c)
 * Callees:
 *     InternalSetProp @ 0x1C0079054 (InternalSetProp.c)
 */

void __fastcall SetMiPWindowFlags(struct tagWND *a1, __int64 a2)
{
  if ( a1 )
    InternalSetProp(a1, (unsigned __int16)gatomMiPFlags, a2, 5LL);
}
