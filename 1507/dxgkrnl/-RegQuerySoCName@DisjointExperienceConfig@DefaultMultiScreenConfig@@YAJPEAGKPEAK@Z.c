/*
 * XREFs of ?RegQuerySoCName@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAGKPEAK@Z @ 0x1C002057C
 * Callers:
 *     ?ValidateStaticRequirements@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEA_N@Z @ 0x1C0020744 (-ValidateStaticRequirements@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEA_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     RtlStringCchCopyNExW @ 0x1C0020844 (RtlStringCchCopyNExW.c)
 */

NTSTATUS __fastcall DefaultMultiScreenConfig::DisjointExperienceConfig::RegQuerySoCName(
        NTSTRSAFE_PWSTR pszDest,
        unsigned __int16 *a2,
        _DWORD *a3,
        unsigned int *a4)
{
  NTSTATUS result; // eax
  size_t v7; // rdx
  size_t *v8; // [rsp+28h] [rbp-D8h]
  ULONG v9; // [rsp+30h] [rbp-D0h]
  int v10; // [rsp+40h] [rbp-C0h] BYREF
  STRSAFE_PCNZWCH pszSrc; // [rsp+48h] [rbp-B8h]
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v13; // [rsp+60h] [rbp-A0h] BYREF
  int v14; // [rsp+68h] [rbp-98h]
  const wchar_t *v15; // [rsp+70h] [rbp-90h]
  int *v16; // [rsp+78h] [rbp-88h]
  int v17; // [rsp+80h] [rbp-80h]
  __int64 v18; // [rsp+88h] [rbp-78h]
  int v19; // [rsp+90h] [rbp-70h]
  __int64 v20; // [rsp+98h] [rbp-68h]
  int v21; // [rsp+A0h] [rbp-60h]
  __int64 v22; // [rsp+A8h] [rbp-58h]
  _BYTE v23[32]; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v24[6]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v25; // [rsp+130h] [rbp+30h]
  int v26; // [rsp+138h] [rbp+38h]
  char v27; // [rsp+140h] [rbp+40h] BYREF

  v10 = 34078720;
  *pszDest = 0;
  *a3 = 0;
  v24[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\Platform\\DeviceTargetingInfo";
  v26 = *(_DWORD *)L"o";
  v24[2] = *(_OWORD *)L"e\\System\\Platform\\DeviceTargetingInfo";
  v24[1] = *(_OWORD *)L"y\\Machine\\System\\Platform\\DeviceTargetingInfo";
  pszSrc = (STRSAFE_PCNZWCH)&v27;
  v24[4] = *(_OWORD *)L"m\\DeviceTargetingInfo";
  v24[3] = *(_OWORD *)L"\\Platform\\DeviceTargetingInfo";
  v15 = L"PhoneSOCVersion";
  v25 = *(_QWORD *)L"gInfo";
  v24[5] = *(_OWORD *)L"TargetingInfo";
  v13 = 0LL;
  v14 = 292;
  v16 = &v10;
  v17 = 0x1000000;
  v18 = 0LL;
  v19 = 0;
  v20 = 0LL;
  v21 = 0;
  v22 = 0LL;
  memset(v23, 0, sizeof(v23));
  result = RtlQueryRegistryValuesEx(0LL, v24, &v13, 0LL, 0LL);
  if ( result < 0 )
  {
    if ( result == -1073741772 )
      return 0;
  }
  else
  {
    result = RtlStringCchCopyNExW(
               pszDest,
               v7,
               pszSrc,
               (unsigned __int64)(unsigned __int16)v10 >> 1,
               &ppszDestEnd,
               v8,
               v9);
    if ( result >= 0 )
      *a3 = ppszDestEnd - pszDest;
  }
  return result;
}
