/*
 * XREFs of _ResGetSystemWindowsDirectory @ 0x18005A6BC
 * Callers:
 *     ResCKeGetBaseFolder @ 0x18005A658 (ResCKeGetBaseFolder.c)
 * Callees:
 *     StringCopyWorkerW @ 0x18005A840 (StringCopyWorkerW.c)
 *     RtlExpandEnvironmentStrings_U @ 0x18005A8A0 (RtlExpandEnvironmentStrings_U.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x180096DE0 (__report_rangecheckfailure.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall ResGetSystemWindowsDirectory(STRSAFE_LPWSTR pszDest)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r9
  unsigned int v5; // edi
  size_t *v6; // r8
  size_t v8; // [rsp+20h] [rbp-E0h]
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  wchar_t *v10; // [rsp+38h] [rbp-C8h]
  int v11; // [rsp+40h] [rbp-C0h] BYREF
  const wchar_t *v12; // [rsp+48h] [rbp-B8h]
  wchar_t pszSrc[264]; // [rsp+50h] [rbp-B0h] BYREF

  if ( !pszDest )
    return 0LL;
  *pszDest = 0;
  memset(pszSrc, 0, 0x208uLL);
  v11 = 1703960;
  v12 = L"%SystemRoot%";
  v9 = 34078720;
  v10 = pszSrc;
  if ( (int)RtlExpandEnvironmentStrings_U(0LL, &v11, &v9, 0LL) < 0 )
    return 0LL;
  v5 = (unsigned __int16)v9;
  v6 = (size_t *)((unsigned __int16)v9 >> 1);
  if ( (unsigned __int64)(2LL * (_QWORD)v6) >= 0x208 )
    _report_rangecheckfailure(v3, v2, v6, v4);
  pszSrc[(unsigned __int16)v9 >> 1] = 0;
  if ( (unsigned int)v6 >= 0x104 || StringCopyWorkerW(pszDest, 0x104uLL, v6, pszSrc, v8) >= 0 )
    return v5;
  else
    return 0LL;
}
