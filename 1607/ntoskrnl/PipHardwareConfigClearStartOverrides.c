/*
 * XREFs of PipHardwareConfigClearStartOverrides @ 0x1406298FC
 * Callers:
 *     PipHardwareConfigInit @ 0x14079930C (PipHardwareConfigInit.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x1400C1890 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1404E0C54 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x1405634B4 (_PnpCtxRegEnumKeyWithCallback.c)
 */

int __fastcall PipHardwareConfigClearStartOverrides(int a1)
{
  int result; // eax
  int v3; // [rsp+30h] [rbp-B8h]
  void *v4; // [rsp+40h] [rbp-A8h] BYREF
  wchar_t pszDest[64]; // [rsp+50h] [rbp-98h] BYREF

  result = PnpCtxGetCachedContextBaseKey(*(__int64 **)&PiPnpRtlCtx, 6, (__int64 *)&v4);
  if ( result >= 0 )
  {
    v3 = a1;
    result = RtlStringCchPrintfExW(pszDest, 0x40uLL, 0LL, 0LL, 0x800u, L"%d", v3);
    if ( result >= 0 )
      return PnpCtxRegEnumKeyWithCallback(
               *(__int64 **)&PiPnpRtlCtx,
               v4,
               (__int64)PipHardwareConfigClearStartOverrideCallback,
               (__int64)pszDest);
  }
  return result;
}
