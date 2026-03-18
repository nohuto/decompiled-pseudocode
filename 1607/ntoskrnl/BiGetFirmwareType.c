/*
 * XREFs of BiGetFirmwareType @ 0x14053C0EC
 * Callers:
 *     BiExportStoreAlterationsToFirmware @ 0x140533DB0 (BiExportStoreAlterationsToFirmware.c)
 *     BiGetSystemStorePath @ 0x14053B764 (BiGetSystemStorePath.c)
 *     BiOpenSystemStore @ 0x14053BF5C (BiOpenSystemStore.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14015A340 (ZwQuerySystemInformation.c)
 */

__int64 BiGetFirmwareType()
{
  __int64 result; // rax
  unsigned int v1; // ebx
  _BYTE SystemInformation[16]; // [rsp+20h] [rbp-38h] BYREF
  int v3; // [rsp+30h] [rbp-28h]

  if ( byte_140328BFC )
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
  byte_140328BFC = 1;
  return result;
}
