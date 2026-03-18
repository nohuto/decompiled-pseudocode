/*
 * XREFs of DpiMiracastGetForcedMode @ 0x1C00C9754
 * Callers:
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C00C94C4 (DxgkMiracastQueryMiracastSupportInternal.c)
 * Callees:
 *     memset @ 0x1C0012400 (memset.c)
 */

__int64 DpiMiracastGetForcedMode()
{
  __int64 v1; // [rsp+30h] [rbp-19h] BYREF
  int v2; // [rsp+38h] [rbp-11h]
  const wchar_t *v3; // [rsp+40h] [rbp-9h]
  int *v4; // [rsp+48h] [rbp-1h]
  int v5; // [rsp+50h] [rbp+7h]
  __int64 v6; // [rsp+58h] [rbp+Fh]
  int v7; // [rsp+60h] [rbp+17h]
  __int64 v8; // [rsp+68h] [rbp+1Fh]
  int v9; // [rsp+70h] [rbp+27h]
  __int64 v10; // [rsp+78h] [rbp+2Fh]
  _BYTE v11[32]; // [rsp+80h] [rbp+37h] BYREF
  int v12; // [rsp+B0h] [rbp+67h] BYREF

  v1 = 0LL;
  v6 = 0LL;
  v7 = 0;
  v8 = 0LL;
  v9 = 0;
  v10 = 0LL;
  v3 = L"MiracastUseIhvDriver";
  v12 = 1;
  v2 = 292;
  v4 = &v12;
  v5 = 0x4000000;
  memset(v11, 0, sizeof(v11));
  if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v1, 0LL, 0LL) >= 0 )
    return 2 - (unsigned int)(v12 != 0);
  else
    return 0LL;
}
