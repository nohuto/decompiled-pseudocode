/*
 * XREFs of ?DrvIsTemporarySettingChangeDisabled@@YAHXZ @ 0x1C0052B10
 * Callers:
 *     DrvChangeDisplaySettings @ 0x1C0050464 (DrvChangeDisplaySettings.c)
 *     DrvSetDisplayConfigValidateParams @ 0x1C00892C0 (DrvSetDisplayConfigValidateParams.c)
 * Callees:
 *     memset @ 0x1C00890C0 (memset.c)
 */

_BOOL8 DrvIsTemporarySettingChangeDisabled(void)
{
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+30h] [rbp-19h] BYREF
  __int64 v2; // [rsp+68h] [rbp+1Fh]
  int v3; // [rsp+70h] [rbp+27h]
  __int64 v4; // [rsp+78h] [rbp+2Fh]
  _BYTE v5[32]; // [rsp+80h] [rbp+37h] BYREF
  int v6; // [rsp+B0h] [rbp+67h] BYREF
  int v7; // [rsp+B8h] [rbp+6Fh] BYREF

  QueryTable.Flags = 288;
  v6 = 0;
  QueryTable.Name = L"DisableAll";
  v7 = 0;
  QueryTable.EntryContext = &v6;
  QueryTable.QueryRoutine = 0LL;
  QueryTable.DefaultData = &v7;
  QueryTable.DefaultType = 67108868;
  QueryTable.DefaultLength = 4;
  v2 = 0LL;
  v3 = 0;
  v4 = 0LL;
  memset(v5, 0, sizeof(v5));
  RtlQueryRegistryValues(2u, L"GraphicsDrivers\\TemporarySettingChanges", &QueryTable, 0LL, 0LL);
  return v6 != 0;
}
