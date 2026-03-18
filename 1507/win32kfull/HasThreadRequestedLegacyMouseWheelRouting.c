/*
 * XREFs of HasThreadRequestedLegacyMouseWheelRouting @ 0x1C01D9CE8
 * Callers:
 *     ?xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z @ 0x1C004CCD8 (-xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00724A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     GetAppCompatFlags2QuadWord @ 0x1C0040280 (GetAppCompatFlags2QuadWord.c)
 */

__int64 __fastcall HasThreadRequestedLegacyMouseWheelRouting(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( a1
    && ((*(_DWORD *)(*(_QWORD *)(a1 + 384) + 776LL) & 0x20000) != 0
     || (GetAppCompatFlags2QuadWord(a1) & 0x10000000000000LL) != 0) )
  {
    return 1;
  }
  return v1;
}
