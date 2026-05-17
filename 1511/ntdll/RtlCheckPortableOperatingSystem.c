/*
 * XREFs of RtlCheckPortableOperatingSystem @ 0x180045E20
 * Callers:
 *     <none>
 * Callees:
 *     RtlCheckRegistryKey @ 0x180046100 (RtlCheckRegistryKey.c)
 *     RtlpQueryRegistryValues @ 0x1800466A4 (RtlpQueryRegistryValues.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall RtlCheckPortableOperatingSystem(bool *a1)
{
  int RegistryValues; // edi
  _QWORD v4[14]; // [rsp+30h] [rbp-78h] BYREF
  int v5; // [rsp+B8h] [rbp+10h] BYREF

  v5 = 0;
  RegistryValues = 0;
  if ( (int)RtlCheckRegistryKey(2LL, L"MiniNT") >= 0 )
    goto LABEL_6;
  memset(v4, 0, sizeof(v4));
  v4[2] = L"PortableOperatingSystem";
  LODWORD(v4[1]) = 292;
  v4[3] = &v5;
  LODWORD(v4[4]) = 0x4000000;
  RegistryValues = RtlpQueryRegistryValues(2, 0, (unsigned int)v4, 0, 0LL, 1);
  if ( RegistryValues == -1073741772 )
    RegistryValues = -1073741275;
  if ( RegistryValues >= 0 )
LABEL_6:
    *a1 = v5 != 0;
  return (unsigned int)RegistryValues;
}
