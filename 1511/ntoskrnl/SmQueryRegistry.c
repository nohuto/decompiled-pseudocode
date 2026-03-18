/*
 * XREFs of SmQueryRegistry @ 0x14076A9E4
 * Callers:
 *     SmInitSystem @ 0x14076A984 (SmInitSystem.c)
 * Callees:
 *     RtlQueryRegistryValuesEx @ 0x1404C8798 (RtlQueryRegistryValuesEx.c)
 */

__int64 __fastcall SmQueryRegistry(__int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp-19h] BYREF
  int v3; // [rsp+38h] [rbp-11h]
  const wchar_t *v4; // [rsp+40h] [rbp-9h]
  __int64 v5; // [rsp+48h] [rbp-1h]
  int v6; // [rsp+50h] [rbp+7h]
  __int64 v7; // [rsp+58h] [rbp+Fh]
  int v8; // [rsp+60h] [rbp+17h]
  __int64 v9; // [rsp+68h] [rbp+1Fh]
  int v10; // [rsp+70h] [rbp+27h]
  __int64 v11; // [rsp+78h] [rbp+2Fh]
  __int64 v12; // [rsp+80h] [rbp+37h]
  int v13; // [rsp+88h] [rbp+3Fh]
  __int64 v14; // [rsp+90h] [rbp+47h]
  int v15; // [rsp+98h] [rbp+4Fh]

  v3 = 288;
  v2 = 0LL;
  v4 = L"EnableDirtyStores";
  v7 = 0LL;
  v8 = 0;
  v9 = 0LL;
  v10 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0;
  v14 = 0LL;
  v15 = 0;
  v5 = a1 + 10232;
  v6 = 0x4000000;
  RtlQueryRegistryValuesEx(
    0LL,
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\StoreParameters",
    (__int64)&v2,
    0LL);
  return 0LL;
}
