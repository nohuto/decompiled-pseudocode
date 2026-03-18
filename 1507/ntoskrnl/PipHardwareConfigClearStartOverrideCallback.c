/*
 * XREFs of PipHardwareConfigClearStartOverrideCallback @ 0x14067A2E4
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140019C20 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     _SysCtxRegOpenKey @ 0x140435B90 (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegDeleteValue @ 0x140564078 (_PnpCtxRegDeleteValue.c)
 */

__int64 __fastcall PipHardwareConfigClearStartOverrideCallback(_QWORD *a1, char *a2, __int64 a3, const WCHAR *a4)
{
  __int64 v7; // rcx
  __int64 v8; // rcx
  HANDLE Handle; // [rsp+40h] [rbp-248h] BYREF
  wchar_t pszDest[264]; // [rsp+50h] [rbp-238h] BYREF

  Handle = 0LL;
  if ( RtlStringCchPrintfExW(pszDest, 0x104uLL, 0LL, 0LL, 0x800u, L"%s\\%s", a3, L"StartOverride") >= 0 )
  {
    v7 = a1 ? *a1 : 0LL;
    if ( (int)SysCtxRegOpenKey(v7, a2, pszDest, 0, 2u, &Handle) >= 0 )
      PnpCtxRegDeleteValue(v8, Handle, a4);
  }
  if ( Handle )
    ZwClose(Handle);
  return 0LL;
}
