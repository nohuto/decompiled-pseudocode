/*
 * XREFs of RtlCheckPortableOperatingSystem @ 0x180059090
 * Callers:
 *     <none>
 * Callees:
 *     RtlCheckRegistryKey @ 0x180057440 (RtlCheckRegistryKey.c)
 *     RtlpQueryRegistryValues @ 0x1800579E4 (RtlpQueryRegistryValues.c)
 *     memset @ 0x1800ACCC0 (memset.c)
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
  LODWORD(v4[1]) = 292;
  v4[3] = &v5;
  LODWORD(v4[4]) = 0x4000000;
  RegistryValues = RtlpQueryRegistryValues(2LL, 0LL, (__int64)v4, 0LL, 0LL, 1);
  if ( RegistryValues == -1073741772 )
    RegistryValues = -1073741275;
  if ( RegistryValues >= 0 )
LABEL_6:
    *IsPortable = v5 != 0;
  return RegistryValues;
}
