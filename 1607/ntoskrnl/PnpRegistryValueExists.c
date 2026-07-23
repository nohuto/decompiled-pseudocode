/*
 * XREFs of PnpRegistryValueExists @ 0x1401CF2C0
 * Callers:
 *     PiDevCfgCopyDeviceKey @ 0x14063634C (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgMigrateRootDevice @ 0x14063AE00 (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgQueryDriverNode @ 0x14063C2F0 (PiDevCfgQueryDriverNode.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x14015A4D0 (ZwQueryValueKey.c)
 */

_BOOL8 __fastcall PnpRegistryValueExists(void *a1, UNICODE_STRING *a2)
{
  NTSTATUS v2; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-28h] BYREF
  _BYTE KeyValueInformation[16]; // [rsp+38h] [rbp-20h] BYREF

  v2 = ZwQueryValueKey(a1, a2, KeyValueBasicInformation, KeyValueInformation, 0x10u, &ResultLength);
  return (int)(v2 + 0x80000000) < 0 || v2 == -2147483643;
}
