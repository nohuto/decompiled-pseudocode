/*
 * XREFs of RtlCheckPortableOperatingSystem @ 0x1400B19B8
 * Callers:
 *     ExpCheckPortableOperatingSystem @ 0x1404CF8F8 (ExpCheckPortableOperatingSystem.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     RtlCheckRegistryKey @ 0x1404CF978 (RtlCheckRegistryKey.c)
 *     RtlQueryRegistryValuesEx @ 0x1404D9E08 (RtlQueryRegistryValuesEx.c)
 */

NTSTATUS __cdecl RtlCheckPortableOperatingSystem(PBOOLEAN IsPortable)
{
  int RegistryValues; // edi
  _RTL_QUERY_REGISTRY_TABLE QueryTable[2]; // [rsp+30h] [rbp-78h] BYREF
  int v5; // [rsp+B8h] [rbp+10h] BYREF

  v5 = 0;
  RegistryValues = 0;
  if ( RtlCheckRegistryKey(2u, (PWSTR)L"MiniNT") >= 0 )
    goto LABEL_6;
  memset(QueryTable, 0, sizeof(QueryTable));
  QueryTable[0].Flags = 292;
  QueryTable[0].Name = (PWSTR)L"PortableOperatingSystem";
  QueryTable[0].DefaultType = 0x4000000;
  QueryTable[0].EntryContext = &v5;
  RegistryValues = RtlQueryRegistryValuesEx(2u, 0LL, QueryTable, 0LL, 0LL);
  if ( RegistryValues == -1073741772 )
    RegistryValues = -1073741275;
  if ( RegistryValues >= 0 )
LABEL_6:
    *IsPortable = v5 != 0;
  return RegistryValues;
}
