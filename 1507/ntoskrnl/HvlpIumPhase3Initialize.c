/*
 * XREFs of HvlpIumPhase3Initialize @ 0x1401EE378
 * Callers:
 *     HvlPhase2Initialize @ 0x140170560 (HvlPhase2Initialize.c)
 * Callees:
 *     IumApiInit_0 @ 0x1400012C0 (IumApiInit_0.c)
 *     HvlpEnterIumSecureMode @ 0x1401289D4 (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 HvlpIumPhase3Initialize()
{
  NTSTATUS v0; // ebx
  unsigned __int8 v2[112]; // [rsp+30h] [rbp-88h] BYREF

  v0 = 0;
  if ( (HvlpFlags & 0x2000) != 0 )
  {
    v0 = HvlpEnterIumSecureMode(1u, 1, 0, v2);
    if ( v0 < 0 )
      HvlpFlags &= ~0x2000u;
  }
  IumApiInit_0();
  return (unsigned int)v0;
}
