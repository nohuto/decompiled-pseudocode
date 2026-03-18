/*
 * XREFs of ?DrvIsTemporarySettingChangeDisabled@@YAHXZ @ 0x1C001B38C
 * Callers:
 *     DrvChangeDisplaySettings @ 0x1C001B64C (DrvChangeDisplaySettings.c)
 *     DrvSetDisplayConfigValidateParams @ 0x1C0086040 (DrvSetDisplayConfigValidateParams.c)
 * Callees:
 *     memset @ 0x1C0085E40 (memset.c)
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

  QueryTable.Name = L"DisableAll";
  v6 = 0;
  QueryTable.EntryContext = &v6;
  v7 = 0;
  QueryTable.DefaultType = 4;
  QueryTable.DefaultLength = 4;
  QueryTable.QueryRoutine = 0LL;
  QueryTable.Flags = 32;
  QueryTable.DefaultData = &v7;
  v2 = 0LL;
  v3 = 0;
  v4 = 0LL;
  memset(v5, 0, sizeof(v5));
  RtlQueryRegistryValues(2u, L"GraphicsDrivers\\TemporarySettingChanges", &QueryTable, 0LL, 0LL);
  return v6 != 0;
}
