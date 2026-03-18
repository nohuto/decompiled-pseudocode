/*
 * XREFs of ?OutputDuplIsAllowedByMdmPolicy@@YA_NXZ @ 0x1C017D7E4
 * Callers:
 *     DxgkCreateOutputDupl @ 0x1C017E790 (DxgkCreateOutputDupl.c)
 * Callees:
 *     memset @ 0x1C00127C0 (memset.c)
 */

bool OutputDuplIsAllowedByMdmPolicy(void)
{
  __int64 v1; // [rsp+30h] [rbp-19h] BYREF
  int v2; // [rsp+38h] [rbp-11h]
  const wchar_t *v3; // [rsp+40h] [rbp-9h]
  int *v4; // [rsp+48h] [rbp-1h]
  int v5; // [rsp+50h] [rbp+7h]
  int *v6; // [rsp+58h] [rbp+Fh]
  int v7; // [rsp+60h] [rbp+17h]
  __int64 v8; // [rsp+68h] [rbp+1Fh]
  int v9; // [rsp+70h] [rbp+27h]
  _BYTE v10[40]; // [rsp+78h] [rbp+2Fh] BYREF
  int v11; // [rsp+B0h] [rbp+67h] BYREF
  int v12; // [rsp+B8h] [rbp+6Fh] BYREF

  v2 = 288;
  v1 = 0LL;
  v12 = 1;
  v11 = 1;
  v5 = 67108868;
  v3 = L"AllowScreenCapture";
  v7 = 4;
  v4 = &v11;
  v6 = &v12;
  v8 = 0LL;
  v9 = 0;
  memset(v10, 0, sizeof(v10));
  RtlQueryRegistryValuesEx(
    0LL,
    L"\\Registry\\Machine\\Software\\Microsoft\\PolicyManager\\current\\Experience",
    &v1,
    0LL,
    0LL);
  return v11 != 0;
}
