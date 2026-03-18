/*
 * XREFs of ?RegQuerySoCName@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAGKPEAK@Z @ 0x1C0026F68
 * Callers:
 *     ?ValidateStaticRequirements@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEA_N@Z @ 0x1C0027150 (-ValidateStaticRequirements@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEA_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     RtlStringCchCopyNExW @ 0x1C0027258 (RtlStringCchCopyNExW.c)
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
  _BYTE v22[40]; // [rsp+A8h] [rbp-58h] BYREF
  _OWORD v23[6]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v24; // [rsp+130h] [rbp+30h]
  int v25; // [rsp+138h] [rbp+38h]
  char v26; // [rsp+140h] [rbp+40h] BYREF

  v10 = 34078720;
  *pszDest = 0;
  *a3 = 0;
  v23[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\Platform\\DeviceTargetingInfo";
  v25 = *(_DWORD *)L"o";
  v23[2] = *(_OWORD *)L"e\\System\\Platform\\DeviceTargetingInfo";
  v23[1] = *(_OWORD *)L"y\\Machine\\System\\Platform\\DeviceTargetingInfo";
  pszSrc = (STRSAFE_PCNZWCH)&v26;
  v23[4] = *(_OWORD *)L"m\\DeviceTargetingInfo";
  v23[3] = *(_OWORD *)L"\\Platform\\DeviceTargetingInfo";
  v15 = L"PhoneSOCVersion";
  v24 = *(_QWORD *)L"gInfo";
  v23[5] = *(_OWORD *)L"TargetingInfo";
  v13 = 0LL;
  v14 = 292;
  v16 = &v10;
  v17 = 0x1000000;
  v18 = 0LL;
  v19 = 0;
  v20 = 0LL;
  v21 = 0;
  memset(v22, 0, sizeof(v22));
  result = RtlQueryRegistryValuesEx(0LL, v23, &v13, 0LL, 0LL);
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
