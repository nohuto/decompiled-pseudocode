/*
 * XREFs of DpiHybridInternalPanelOverride @ 0x1C000DEC4
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C00D1400 (DpiFdoStartAdapter.c)
 * Callees:
 *     memset @ 0x1C0012400 (memset.c)
 */

bool DpiHybridInternalPanelOverride()
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
  __int64 v10; // [rsp+78h] [rbp+2Fh]
  _BYTE v11[32]; // [rsp+80h] [rbp+37h] BYREF
  int v12; // [rsp+B0h] [rbp+67h] BYREF

  if ( !g_OSTestSigningEnabled )
    return 0;
  v12 = 0;
  v1 = 0LL;
  v8 = 0LL;
  v9 = 0;
  v10 = 0LL;
  v3 = L"HybridInternalPanelOverrideEnable";
  v4 = &v12;
  v2 = 288;
  v6 = &v12;
  v5 = 67108868;
  v7 = 4;
  memset(v11, 0, sizeof(v11));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v1, 0LL, 0LL);
  return v12 != 0;
}
