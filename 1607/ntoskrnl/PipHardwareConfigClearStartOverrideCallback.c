/*
 * XREFs of PipHardwareConfigClearStartOverrideCallback @ 0x140629824
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfExW @ 0x1400C1890 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     _PnpCtxRegDeleteValue @ 0x1404D2EA8 (_PnpCtxRegDeleteValue.c)
 *     _SysCtxRegOpenKey @ 0x1404E0B1C (_SysCtxRegOpenKey.c)
 */

__int64 __fastcall PipHardwareConfigClearStartOverrideCallback(_QWORD *a1, __int64 a2, __int64 a3, const WCHAR *a4)
{
  __int64 v7; // rcx
  __int64 v8; // rcx
  HANDLE Handle[2]; // [rsp+40h] [rbp-248h] BYREF
  wchar_t pszDest[264]; // [rsp+50h] [rbp-238h] BYREF

  Handle[0] = 0LL;
  if ( RtlStringCchPrintfExW(pszDest, 0x104uLL, 0LL, 0LL, 0x800u, L"%s\\%s", a3, L"StartOverride") >= 0 )
  {
    v7 = a1 ? *a1 : 0LL;
    if ( (int)SysCtxRegOpenKey(v7, a2, (__int64)pszDest, 0, 2u, (__int64)Handle) >= 0 )
      PnpCtxRegDeleteValue(v8, Handle[0], a4);
  }
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return 0LL;
}
