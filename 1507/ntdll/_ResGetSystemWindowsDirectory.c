/*
 * XREFs of _ResGetSystemWindowsDirectory @ 0x18000F2A0
 * Callers:
 *     ResCKeGetBaseFolder @ 0x18000F23C (ResCKeGetBaseFolder.c)
 * Callees:
 *     StringCopyWorkerW @ 0x18000F42C (StringCopyWorkerW.c)
 *     RtlExpandEnvironmentStrings_U @ 0x18000F480 (RtlExpandEnvironmentStrings_U.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x180084230 (__report_rangecheckfailure.c)
 *     memset @ 0x180098540 (memset.c)
 */

__int64 __fastcall ResGetSystemWindowsDirectory(STRSAFE_LPWSTR pszDest)
{
  unsigned int Length; // edi
  size_t *v3; // r8
  size_t v5; // [rsp+20h] [rbp-E0h]
  _UNICODE_STRING Destination; // [rsp+30h] [rbp-D0h] BYREF
  _UNICODE_STRING Source; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t pszSrc[264]; // [rsp+50h] [rbp-B0h] BYREF

  if ( !pszDest )
    return 0LL;
  *pszDest = 0;
  memset(pszSrc, 0, 520);
  *(_DWORD *)&Source.Length = 1703960;
  Source.Buffer = L"%SystemRoot%";
  *(_DWORD *)&Destination.Length = 34078720;
  Destination.Buffer = pszSrc;
  if ( RtlExpandEnvironmentStrings_U(0LL, &Source, &Destination, 0LL) < 0 )
    return 0LL;
  Length = Destination.Length;
  v3 = (size_t *)(Destination.Length >> 1);
  if ( (unsigned __int64)(2LL * (_QWORD)v3) >= 0x208 )
    _report_rangecheckfailure();
  pszSrc[Destination.Length >> 1] = 0;
  if ( (unsigned int)v3 >= 0x104 || StringCopyWorkerW(pszDest, 0x104uLL, v3, pszSrc, v5) >= 0 )
    return Length;
  else
    return 0LL;
}
