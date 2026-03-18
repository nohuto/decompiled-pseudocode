/*
 * XREFs of RtlCheckPortableOperatingSystem @ 0x140074C54
 * Callers:
 *     sub_1404A8518 @ 0x1404A8518 (sub_1404A8518.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     RtlCheckRegistryKey @ 0x1404A9128 (RtlCheckRegistryKey.c)
 *     RtlQueryRegistryValuesEx @ 0x1404AA414 (RtlQueryRegistryValuesEx.c)
 */

__int64 __fastcall RtlCheckPortableOperatingSystem(bool *a1)
{
  int RegistryValues; // edi
  _QWORD v4[14]; // [rsp+30h] [rbp-78h] BYREF
  int v5; // [rsp+B8h] [rbp+10h] BYREF

  v5 = 0;
  RegistryValues = 0;
  if ( RtlCheckRegistryKey(2u, (PWSTR)L"MiniNT") >= 0 )
    goto LABEL_6;
  memset(v4, 0, sizeof(v4));
  LODWORD(v4[1]) = 36;
  v4[2] = L"PortableOperatingSystem";
  v4[3] = &v5;
  RegistryValues = RtlQueryRegistryValuesEx(2LL, 0LL, v4, 0LL, 0LL);
  if ( RegistryValues == -1073741772 )
    RegistryValues = -1073741275;
  if ( RegistryValues >= 0 )
LABEL_6:
    *a1 = v5 != 0;
  return (unsigned int)RegistryValues;
}
