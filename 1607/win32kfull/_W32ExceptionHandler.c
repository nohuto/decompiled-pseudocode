/*
 * XREFs of _W32ExceptionHandler @ 0x1C01BF6B8
 * Callers:
 *     SfnINLPCREATESTRUCT @ 0x1C006FE90 (SfnINLPCREATESTRUCT.c)
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserConsoleControl @ 0x1C009A870 (NtUserConsoleControl.c)
 *     SfnDWORDOPTINLPMSG @ 0x1C00FD200 (SfnDWORDOPTINLPMSG.c)
 *     NtUserUnregisterClass @ 0x1C0109FB0 (NtUserUnregisterClass.c)
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall W32ExceptionHandler(NTSTATUS a1)
{
  ULONG v1; // eax

  v1 = RtlNtStatusToDosError(a1);
  UserSetLastError(v1);
  return 1LL;
}
