/*
 * XREFs of TpWaitForJobNotification @ 0x18007A620
 * Callers:
 *     <none>
 * Callees:
 *     TppJobpRundownJob @ 0x18007A72C (TppJobpRundownJob.c)
 *     TppJobpValidateJob @ 0x18007DA20 (TppJobpValidateJob.c)
 *     TppBarrierAdjust @ 0x18007DD84 (TppBarrierAdjust.c)
 */

__int64 __fastcall TpWaitForJobNotification(__int64 a1)
{
  __int64 result; // rax

  result = TppJobpValidateJob(a1, 0LL);
  if ( (_DWORD)result )
  {
    TppJobpRundownJob(a1);
    return TppBarrierAdjust(a1 + 128, 0LL);
  }
  return result;
}
