/*
 * XREFs of RtlCheckPortableOperatingSystem @ 0x18000CED0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCheckRegistryKey @ 0x18000D540 (RtlCheckRegistryKey.c)
 *     RtlpQueryRegistryValues @ 0x18000D754 (RtlpQueryRegistryValues.c)
 *     memset @ 0x180098540 (memset.c)
 */

NTSTATUS __cdecl RtlCheckPortableOperatingSystem(PBOOLEAN IsPortable)
{
  NTSTATUS RegistryValues; // edi
  _QWORD v4[14]; // [rsp+30h] [rbp-78h] BYREF
  int v5; // [rsp+B8h] [rbp+10h] BYREF

  v5 = 0;
  RegistryValues = 0;
  if ( RtlCheckRegistryKey(2u, (PWSTR)L"MiniNT") >= 0 )
    goto LABEL_6;
  memset(v4, 0, sizeof(v4));
  v4[2] = L"PortableOperatingSystem";
  LODWORD(v4[1]) = 36;
  v4[3] = &v5;
  RegistryValues = RtlpQueryRegistryValues(2LL, 0LL, v4, 0LL, 0LL, 1);
  if ( RegistryValues == -1073741772 )
    RegistryValues = -1073741275;
  if ( RegistryValues >= 0 )
LABEL_6:
    *IsPortable = v5 != 0;
  return RegistryValues;
}
