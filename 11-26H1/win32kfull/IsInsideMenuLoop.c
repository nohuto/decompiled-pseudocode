/*
 * XREFs of IsInsideMenuLoop @ 0x1401CB018
 * Callers:
 *     ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x1401CA7DC (-zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxCancelTrackingForThread @ 0x1402C88E0 (xxxCancelTrackingForThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsInsideMenuLoop(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ecx

  v1 = *(_QWORD *)(a1 + 640);
  v2 = 0;
  if ( v1 )
    return (*(_DWORD *)(v1 + 8) & 4) != 0;
  return v2;
}
