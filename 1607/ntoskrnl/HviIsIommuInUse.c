/*
 * XREFs of HviIsIommuInUse @ 0x140231E2C
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     HviGetHardwareFeatures @ 0x140231D08 (HviGetHardwareFeatures.c)
 */

bool __fastcall HviIsIommuInUse(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF

  HviGetHardwareFeatures((__int64)v5, a2, a3, a4);
  return (v5[0] & 0x30) == 48;
}
