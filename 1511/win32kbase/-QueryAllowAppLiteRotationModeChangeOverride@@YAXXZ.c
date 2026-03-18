/*
 * XREFs of ?QueryAllowAppLiteRotationModeChangeOverride@@YAXXZ @ 0x1C00BBFB0
 * Callers:
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C006EB58 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 * Callees:
 *     memset @ 0x1C00890C0 (memset.c)
 */

void QueryAllowAppLiteRotationModeChangeOverride(void)
{
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+30h] [rbp-19h] BYREF
  __int64 v1; // [rsp+68h] [rbp+1Fh]
  int v2; // [rsp+70h] [rbp+27h]
  __int64 v3; // [rsp+78h] [rbp+2Fh]
  _BYTE v4[32]; // [rsp+80h] [rbp+37h] BYREF
  int v5; // [rsp+B0h] [rbp+67h] BYREF

  v5 = 0;
  QueryTable.QueryRoutine = 0LL;
  v1 = 0LL;
  v2 = 0;
  v3 = 0LL;
  QueryTable.Name = L"AllowAppLiteRotationModeChangeOverride";
  QueryTable.EntryContext = &gAllowAppLiteRotationModeChange;
  QueryTable.Flags = 288;
  QueryTable.DefaultData = &v5;
  QueryTable.DefaultType = 67108868;
  QueryTable.DefaultLength = 4;
  memset(v4, 0, sizeof(v4));
  RtlQueryRegistryValues(2u, L"GraphicsDrivers", &QueryTable, 0LL, 0LL);
}
