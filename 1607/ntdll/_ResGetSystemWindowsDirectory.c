/*
 * XREFs of _ResGetSystemWindowsDirectory @ 0x18005A6AC
 * Callers:
 *     ResCKeGetBaseFolder @ 0x18005A648 (ResCKeGetBaseFolder.c)
 * Callees:
 *     StringCopyWorkerW @ 0x18005A830 (StringCopyWorkerW.c)
 *     RtlExpandEnvironmentStrings_U @ 0x18005A890 (RtlExpandEnvironmentStrings_U.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x180096DD0 (__report_rangecheckfailure.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall ResGetSystemWindowsDirectory(STRSAFE_LPWSTR pszDest)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r9
  unsigned int Length; // edi
  size_t *v6; // r8
  size_t v8; // [rsp+20h] [rbp-E0h]
  _UNICODE_STRING Destination; // [rsp+30h] [rbp-D0h] BYREF
  _UNICODE_STRING Source; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t pszSrc[264]; // [rsp+50h] [rbp-B0h] BYREF

  if ( !pszDest )
    return 0LL;
  *pszDest = 0;
  memset(pszSrc, 0, 0x208uLL);
  *(_DWORD *)&Source.Length = 1703960;
  Source.Buffer = L"%SystemRoot%";
  *(_DWORD *)&Destination.Length = 34078720;
  Destination.Buffer = pszSrc;
  if ( RtlExpandEnvironmentStrings_U(0LL, &Source, &Destination, 0LL) < 0 )
    return 0LL;
  Length = Destination.Length;
  v6 = (size_t *)(Destination.Length >> 1);
  if ( (unsigned __int64)(2LL * (_QWORD)v6) >= 0x208 )
    _report_rangecheckfailure(v3, v2, v6, v4);
  pszSrc[Destination.Length >> 1] = 0;
  if ( (unsigned int)v6 >= 0x104 || StringCopyWorkerW(pszDest, 0x104uLL, v6, pszSrc, v8) >= 0 )
    return Length;
  else
    return 0LL;
}
