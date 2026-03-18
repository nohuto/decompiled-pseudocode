/*
 * XREFs of HasThreadRequestedLegacyMouseWheelRouting @ 0x1C01D20AC
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z @ 0x1C00DD764 (-xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z.c)
 * Callees:
 *     GetAppCompatFlags2QuadWord @ 0x1C010FCE0 (GetAppCompatFlags2QuadWord.c)
 */

__int64 __fastcall HasThreadRequestedLegacyMouseWheelRouting(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( a1
    && ((*(_DWORD *)(*(_QWORD *)(a1 + 376) + 768LL) & 0x8000) != 0
     || (GetAppCompatFlags2QuadWord(a1, a2, a3, a4) & 0x10000000000000LL) != 0) )
  {
    return 1;
  }
  return v4;
}
