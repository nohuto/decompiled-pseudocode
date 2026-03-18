/*
 * XREFs of BiGetFirmwareType @ 0x1404FB870
 * Callers:
 *     BiGetSystemStorePath @ 0x1404FAE38 (BiGetSystemStorePath.c)
 *     BiOpenSystemStore @ 0x1404FB6E8 (BiOpenSystemStore.c)
 *     BiExportStoreAlterationsToFirmware @ 0x1404FB850 (BiExportStoreAlterationsToFirmware.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x140150CE0 (ZwQuerySystemInformation.c)
 */

__int64 BiGetFirmwareType()
{
  __int64 result; // rax
  unsigned int v1; // ebx
  _BYTE SystemInformation[16]; // [rsp+20h] [rbp-38h] BYREF
  int v3; // [rsp+30h] [rbp-28h]

  if ( byte_1403069E5 )
    return (unsigned int)dword_1402C985C;
  v1 = 1;
  if ( ZwQuerySystemInformation(SystemBootEnvironmentInformation, SystemInformation, 0x20u, 0LL) >= 0 )
  {
    v1 = 0;
    if ( v3 < 3 )
      v1 = v3;
  }
  dword_1402C985C = v1;
  result = v1;
  byte_1403069E5 = 1;
  return result;
}
