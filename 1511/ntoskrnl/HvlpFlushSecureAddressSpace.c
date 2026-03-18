/*
 * XREFs of HvlpFlushSecureAddressSpace @ 0x1401B3718
 * Callers:
 *     HvlFlushAddressSpaceTb @ 0x140221430 (HvlFlushAddressSpaceTb.c)
 *     HvlpSlowFlushListTb @ 0x140221B58 (HvlpSlowFlushListTb.c)
 *     HvlpSlowFlushListTbEx @ 0x140221CA8 (HvlpSlowFlushListTbEx.c)
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

NTSTATUS HvlpFlushSecureAddressSpace()
{
  unsigned __int8 v1[8]; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 SecurePid; // [rsp+28h] [rbp-80h]

  SecurePid = KeGetCurrentThread()->ApcState.Process->SecurePid;
  return HvlpEnterIumSecureMode(1u, 224, 0, v1);
}
