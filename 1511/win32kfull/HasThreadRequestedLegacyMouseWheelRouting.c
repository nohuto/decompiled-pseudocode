/*
 * XREFs of HasThreadRequestedLegacyMouseWheelRouting @ 0x1C01DA2F8
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0061810 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z @ 0x1C00874E8 (-xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z.c)
 * Callees:
 *     GetAppCompatFlags2QuadWord @ 0x1C00C9EF0 (GetAppCompatFlags2QuadWord.c)
 */

__int64 __fastcall HasThreadRequestedLegacyMouseWheelRouting(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( a1
    && ((*(_DWORD *)(*(_QWORD *)(a1 + 376) + 776LL) & 0x20000) != 0
     || (GetAppCompatFlags2QuadWord(a1) & 0x10000000000000LL) != 0) )
  {
    return 1;
  }
  return v1;
}
