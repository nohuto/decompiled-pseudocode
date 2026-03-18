/*
 * XREFs of HvlPrepareForRootCrashdump @ 0x1401E9B20
 * Callers:
 *     KeBugCheck2 @ 0x140201994 (KeBugCheck2.c)
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1401289D4 (HvlpEnterIumSecureMode.c)
 *     PopPoCoalescinCallback @ 0x140139F40 (PopPoCoalescinCallback.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyRootCrashdump @ 0x1401E992C (HvlNotifyRootCrashdump.c)
 *     AlpcMessageDeleteProcedure @ 0x14055E308 (AlpcMessageDeleteProcedure.c)
 */

void HvlPrepareForRootCrashdump()
{
  POPLOCK v0; // rcx
  unsigned __int8 v1[112]; // [rsp+20h] [rbp-88h] BYREF

  if ( (HvlpFlags & 4) != 0 )
  {
    HvlNotifyRootCrashdump(0);
    KeStallExecutionProcessor(0xC350u);
    if ( (HvlpFlags & 0x2000) != 0 )
      HvlpEnterIumSecureMode(1u, 235, 0, v1);
    HvlNotifyRootCrashdump(1);
    off_140321960(v0);
    off_140321858();
  }
}
