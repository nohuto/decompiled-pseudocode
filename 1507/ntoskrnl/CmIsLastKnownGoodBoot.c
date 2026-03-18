/*
 * XREFs of CmIsLastKnownGoodBoot @ 0x1407E452C
 * Callers:
 *     PpLastGoodDoBootProcessing @ 0x1407E431C (PpLastGoodDoBootProcessing.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlQueryRegistryValuesEx @ 0x1404AA414 (RtlQueryRegistryValuesEx.c)
 */

bool CmIsLastKnownGoodBoot()
{
  int v1; // [rsp+30h] [rbp-D0h] BYREF
  int v2; // [rsp+34h] [rbp-CCh] BYREF
  int v3; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v4; // [rsp+40h] [rbp-C0h] BYREF
  int v5; // [rsp+48h] [rbp-B8h]
  const WCHAR *v6; // [rsp+50h] [rbp-B0h]
  int *v7; // [rsp+58h] [rbp-A8h]
  int v8; // [rsp+60h] [rbp-A0h]
  int *v9; // [rsp+68h] [rbp-98h]
  int v10; // [rsp+70h] [rbp-90h]
  __int64 v11; // [rsp+78h] [rbp-88h]
  int v12; // [rsp+80h] [rbp-80h]
  const wchar_t *v13; // [rsp+88h] [rbp-78h]
  int *v14; // [rsp+90h] [rbp-70h]
  int v15; // [rsp+98h] [rbp-68h]
  int *v16; // [rsp+A0h] [rbp-60h]
  int v17; // [rsp+A8h] [rbp-58h]
  __int64 v18; // [rsp+B0h] [rbp-50h]
  int v19; // [rsp+B8h] [rbp-48h]
  const wchar_t *v20; // [rsp+C0h] [rbp-40h]
  int *v21; // [rsp+C8h] [rbp-38h]
  int v22; // [rsp+D0h] [rbp-30h]
  int *v23; // [rsp+D8h] [rbp-28h]
  int v24; // [rsp+E0h] [rbp-20h]
  __int64 v25; // [rsp+E8h] [rbp-18h]
  int v26; // [rsp+F0h] [rbp-10h]
  __int64 v27; // [rsp+F8h] [rbp-8h]
  __int64 v28; // [rsp+100h] [rbp+0h]
  int v29; // [rsp+108h] [rbp+8h]
  __int64 v30; // [rsp+110h] [rbp+10h]
  int v31; // [rsp+118h] [rbp+18h]

  v6 = L"Current";
  v2 = 0;
  v7 = &v3;
  v3 = 0;
  v8 = 4;
  v5 = 32;
  v9 = &v3;
  v13 = L"LastKnownGood";
  v14 = &v1;
  v16 = &v1;
  v20 = L"Default";
  v21 = &v2;
  v12 = 32;
  v15 = 4;
  v19 = 32;
  v22 = 4;
  v23 = &v2;
  v1 = 0;
  v4 = 0LL;
  v10 = 0;
  v11 = 0LL;
  v17 = 0;
  v18 = 0LL;
  v24 = 0;
  v25 = 0LL;
  v26 = 0;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0;
  v30 = 0LL;
  v31 = 0;
  return (int)RtlQueryRegistryValuesEx(0LL, (__int64)L"\\Registry\\Machine\\System\\Select", (__int64)&v4, 0LL) >= 0
      && v1 == v3
      && v3 != v2;
}
