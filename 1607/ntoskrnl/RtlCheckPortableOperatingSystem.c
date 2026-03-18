/*
 * XREFs of RtlCheckPortableOperatingSystem @ 0x1400B3B38
 * Callers:
 *     ExpCheckPortableOperatingSystem @ 0x1404ED840 (ExpCheckPortableOperatingSystem.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
 *     RtlCheckRegistryKey @ 0x1404ED8C0 (RtlCheckRegistryKey.c)
 *     RtlQueryRegistryValuesEx @ 0x1404F6E7C (RtlQueryRegistryValuesEx.c)
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
  LODWORD(v4[1]) = 292;
  v4[2] = L"PortableOperatingSystem";
  LODWORD(v4[4]) = 0x4000000;
  v4[3] = &v5;
  RegistryValues = RtlQueryRegistryValuesEx(2LL, 0LL, v4, 0LL, 0LL);
  if ( RegistryValues == -1073741772 )
    RegistryValues = -1073741275;
  if ( RegistryValues >= 0 )
LABEL_6:
    *a1 = v5 != 0;
  return (unsigned int)RegistryValues;
}
