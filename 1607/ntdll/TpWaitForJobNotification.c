/*
 * XREFs of TpWaitForJobNotification @ 0x180084370
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x180063E74 (TppBarrierAdjust.c)
 *     TppJobpRundownJob @ 0x180084418 (TppJobpRundownJob.c)
 *     TppJobpValidateJob @ 0x1800846F8 (TppJobpValidateJob.c)
 */

int __fastcall TpWaitForJobNotification(_RTL_SRWLOCK *a1)
{
  int result; // eax

  result = TppJobpValidateJob(a1, 0LL);
  if ( result )
  {
    TppJobpRundownJob(a1);
    return TppBarrierAdjust(a1 + 16, 0, 1);
  }
  return result;
}
