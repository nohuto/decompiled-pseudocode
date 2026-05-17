/*
 * XREFs of RtlCheckPortableOperatingSystem @ 0x18000CED0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCheckRegistryKey @ 0x18000D540 (RtlCheckRegistryKey.c)
 *     RtlpQueryRegistryValues @ 0x18000D754 (RtlpQueryRegistryValues.c)
 *     memset @ 0x180098540 (memset.c)
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
  LODWORD(v4[1]) = 36;
  v4[3] = &v5;
  RegistryValues = RtlpQueryRegistryValues(2, 0, (unsigned int)v4, 0, 0LL, 1);
  if ( RegistryValues == -1073741772 )
    RegistryValues = -1073741275;
  if ( RegistryValues >= 0 )
LABEL_6:
    *a1 = v5 != 0;
  return (unsigned int)RegistryValues;
}
