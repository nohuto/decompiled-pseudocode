/*
 * XREFs of BiGetFirmwareType @ 0x14053C62C
 * Callers:
 *     BiExportStoreAlterationsToFirmware @ 0x1405342F0 (BiExportStoreAlterationsToFirmware.c)
 *     BiGetSystemStorePath @ 0x14053BCA4 (BiGetSystemStorePath.c)
 *     BiOpenSystemStore @ 0x14053C49C (BiOpenSystemStore.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14015A8B0 (ZwQuerySystemInformation.c)
 */

__int64 BiGetFirmwareType()
{
  __int64 result; // rax
  unsigned int v1; // ebx
  _BYTE SystemInformation[16]; // [rsp+20h] [rbp-38h] BYREF
  int v3; // [rsp+30h] [rbp-28h]

  if ( byte_140328C3C )
    return (unsigned int)dword_1402F4E5C;
  v1 = 1;
  if ( ZwQuerySystemInformation(SystemBootEnvironmentInformation, SystemInformation, 0x20u, 0LL) >= 0 )
  {
    v1 = 0;
    if ( v3 < 3 )
      v1 = v3;
  }
  dword_1402F4E5C = v1;
  result = v1;
  byte_140328C3C = 1;
  return result;
}
