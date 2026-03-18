/*
 * XREFs of PopPepRequestWork @ 0x140027EF0
 * Callers:
 *     PopPepProcessEvent @ 0x140027CF4 (PopPepProcessEvent.c)
 *     PopPepTryPowerDownDevice @ 0x140029034 (PopPepTryPowerDownDevice.c)
 *     PopPepIdleTimeoutRoutine @ 0x140135FA0 (PopPepIdleTimeoutRoutine.c)
 *     PopPepUpdateConstraints @ 0x140136D3C (PopPepUpdateConstraints.c)
 *     PopPepSurprisePowerOn @ 0x14014BE7C (PopPepSurprisePowerOn.c)
 *     PopPepComponentSetResidency @ 0x14017143C (PopPepComponentSetResidency.c)
 *     PopPepComponentSetLatency @ 0x1401715E4 (PopPepComponentSetLatency.c)
 *     PopPepCompleteComponentIdleState @ 0x14023B284 (PopPepCompleteComponentIdleState.c)
 *     PopPepComponentSetWakeHint @ 0x14023B35C (PopPepComponentSetWakeHint.c)
 * Callees:
 *     PopFxRequestWorker @ 0x140029120 (PopFxRequestWorker.c)
 */

__int64 __fastcall PopPepRequestWork(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // edx
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a2 > a1 )
  {
    v2 = a2 - a1;
    if ( v2 )
    {
      v3 = v2;
      do
      {
        result = PopFxRequestWorker(0LL);
        --v3;
      }
      while ( v3 );
    }
  }
  return result;
}
