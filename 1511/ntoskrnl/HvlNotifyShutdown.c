/*
 * XREFs of HvlNotifyShutdown @ 0x1401B3200
 * Callers:
 *     PopSaveHiberContext @ 0x1403A13B0 (PopSaveHiberContext.c)
 *     PopShutdownSystem @ 0x1403B2D54 (PopShutdownSystem.c)
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

NTSTATUS __fastcall HvlNotifyShutdown(unsigned __int8 a1)
{
  unsigned __int8 v2[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v3; // [rsp+28h] [rbp-80h]

  v3 = a1;
  return HvlpEnterIumSecureMode(1u, 237, 0, v2);
}
