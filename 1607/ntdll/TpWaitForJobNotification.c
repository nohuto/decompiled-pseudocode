/*
 * XREFs of TpWaitForJobNotification @ 0x180084380
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x180063E84 (TppBarrierAdjust.c)
 *     TppJobpRundownJob @ 0x180084428 (TppJobpRundownJob.c)
 *     TppJobpValidateJob @ 0x180084708 (TppJobpValidateJob.c)
 */

__int64 __fastcall TpWaitForJobNotification(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r9

  result = TppJobpValidateJob(a1, 0LL);
  if ( (_DWORD)result )
  {
    TppJobpRundownJob(a1);
    return TppBarrierAdjust((volatile signed __int64 *)(a1 + 128), 0, 1LL, v3);
  }
  return result;
}
