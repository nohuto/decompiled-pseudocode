/*
 * XREFs of TpWaitForJobNotification @ 0x1800814C0
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x1800042B4 (TppBarrierAdjust.c)
 *     TppJobpRundownJob @ 0x18008156C (TppJobpRundownJob.c)
 *     TppJobpValidateJob @ 0x180081848 (TppJobpValidateJob.c)
 */

__int64 __fastcall TpWaitForJobNotification(__int64 a1)
{
  __int64 result; // rax

  result = TppJobpValidateJob(a1, 0LL);
  if ( (_DWORD)result )
  {
    TppJobpRundownJob(a1);
    return TppBarrierAdjust((unsigned __int64 *)(a1 + 128), 0, 1);
  }
  return result;
}
