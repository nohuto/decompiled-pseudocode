/*
 * XREFs of HvlPrepareForRootCrashdump @ 0x1401B0D54
 * Callers:
 *     KeBugCheck2 @ 0x1401C4F98 (KeBugCheck2.c)
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 *     PopPoCoalescinCallback @ 0x1401264C0 (PopPoCoalescinCallback.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     HvlNotifyRootCrashdump @ 0x1401B0CAC (HvlNotifyRootCrashdump.c)
 *     AlpcMessageDeleteProcedure @ 0x1404E2C00 (AlpcMessageDeleteProcedure.c)
 */

void __fastcall HvlPrepareForRootCrashdump(PVOID *a1)
{
  __int16 v1; // ax
  unsigned __int8 v2[112]; // [rsp+20h] [rbp-88h] BYREF

  v1 = HvlpFlags;
  if ( (HvlpFlags & 4) != 0 )
  {
    HvlNotifyRootCrashdump(0);
    KeStallExecutionProcessor(0xC350u);
    v1 = HvlpFlags;
  }
  if ( (v1 & 0x2000) != 0 )
  {
    HvlpEnterIumSecureMode(1u, 235, 0, v2);
    LOBYTE(v1) = HvlpFlags;
  }
  if ( (v1 & 4) != 0 )
    HvlNotifyRootCrashdump(1);
  off_1402D2810(a1);
  off_1402D2708();
}
