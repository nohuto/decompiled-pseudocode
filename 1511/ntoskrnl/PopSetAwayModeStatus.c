/*
 * XREFs of PopSetAwayModeStatus @ 0x14063668C
 * Callers:
 *     PopSetSystemAwayMode @ 0x1406366F8 (PopSetSystemAwayMode.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     PopSetPowerSettingValueAcDc @ 0x1404C1D24 (PopSetPowerSettingValueAcDc.c)
 *     PopBroadcastSessionInfo @ 0x140547F2C (PopBroadcastSessionInfo.c)
 */

__int64 __fastcall PopSetAwayModeStatus(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 result; // rax
  BOOL v4; // [rsp+20h] [rbp-38h] BYREF
  GUID v5; // [rsp+28h] [rbp-30h] BYREF
  BOOL v6; // [rsp+38h] [rbp-20h]

  v2 = a1;
  v5 = GUID_SYSTEM_AWAYMODE;
  v4 = (_BYTE)a1 != 0;
  v6 = v4;
  PopBroadcastSessionInfo(a1, a2, (__int64)&v5);
  result = PopSetPowerSettingValueAcDc(&GUID_SYSTEM_AWAYMODE, 4u, &v4);
  byte_1402DE291 = v2;
  return result;
}
