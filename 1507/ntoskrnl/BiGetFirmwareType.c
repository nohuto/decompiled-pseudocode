/*
 * XREFs of BiGetFirmwareType @ 0x14056DE08
 * Callers:
 *     BiGetSystemStorePath @ 0x14056D3D0 (BiGetSystemStorePath.c)
 *     BiOpenSystemStore @ 0x14056DC80 (BiOpenSystemStore.c)
 *     BiExportStoreAlterationsToFirmware @ 0x14056DDE8 (BiExportStoreAlterationsToFirmware.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14017F6B0 (ZwQuerySystemInformation.c)
 */

__int64 BiGetFirmwareType()
{
  __int64 result; // rax
  unsigned int v1; // ebx
  _BYTE SystemInformation[16]; // [rsp+20h] [rbp-38h] BYREF
  int v3; // [rsp+30h] [rbp-28h]

  if ( byte_140356CF5 )
    return (unsigned int)dword_1403188BC;
  v1 = 1;
  if ( ZwQuerySystemInformation(SystemBootEnvironmentInformation, SystemInformation, 0x20u, 0LL) >= 0 )
  {
    v1 = 0;
    if ( v3 < 3 )
      v1 = v3;
  }
  dword_1403188BC = v1;
  result = v1;
  byte_140356CF5 = 1;
  return result;
}
