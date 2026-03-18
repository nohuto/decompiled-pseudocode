/*
 * XREFs of PipHardwareConfigClearStartOverrides @ 0x14067A3BC
 * Callers:
 *     PipHardwareConfigInit @ 0x1407B6A40 (PipHardwareConfigInit.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140019C20 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14043D1B0 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x1405A9620 (_PnpCtxRegEnumKeyWithCallback.c)
 */

int __fastcall PipHardwareConfigClearStartOverrides(int a1)
{
  int result; // eax
  int v3; // [rsp+30h] [rbp-B8h]
  void *v4; // [rsp+40h] [rbp-A8h] BYREF
  wchar_t pszDest[64]; // [rsp+50h] [rbp-98h] BYREF

  result = PnpCtxGetCachedContextBaseKey(*(_QWORD **)&PiPnpRtlCtx, 6, &v4);
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
