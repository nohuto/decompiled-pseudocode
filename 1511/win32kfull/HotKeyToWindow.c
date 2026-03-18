/*
 * XREFs of HotKeyToWindow @ 0x1C02319E0
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0061810 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     DWP_SetHotKey @ 0x1C0069B20 (DWP_SetHotKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HotKeyToWindow(int a1)
{
  __int64 i; // rcx

  for ( i = gpHotKeyList; ; i = *(_QWORD *)(i + 16) )
  {
    if ( !i )
      return 0LL;
    if ( *(_DWORD *)(i + 8) == a1 )
      break;
  }
  return *(_QWORD *)i & -(__int64)((*(_BYTE *)(*(_QWORD *)i + 55LL) & 0x10) != 0);
}
