/*
 * XREFs of KeFlushCurrentTbImmediately @ 0x1401D60A0
 * Callers:
 *     KeThawExecution @ 0x1400825DC (KeThawExecution.c)
 *     KiFreezeTargetExecution @ 0x1400828E0 (KiFreezeTargetExecution.c)
 *     KeWakeProcessor @ 0x1400B1D48 (KeWakeProcessor.c)
 *     PpmIdleExecuteTransition @ 0x1400DA540 (PpmIdleExecuteTransition.c)
 *     HvlpGetEncryptedDataFromHypervisor @ 0x1401C0618 (HvlpGetEncryptedDataFromHypervisor.c)
 *     PopHandleNextState @ 0x1403CC8F0 (PopHandleNextState.c)
 *     KeLoadMTRR @ 0x1403D2568 (KeLoadMTRR.c)
 *     KiSetPageAttributesTable @ 0x1403D2A1C (KiSetPageAttributesTable.c)
 * Callees:
 *     <none>
 */

unsigned __int64 KeFlushCurrentTbImmediately()
{
  unsigned __int64 v0; // rcx
  unsigned __int64 result; // rax

  v0 = __readcr4();
  if ( (v0 & 0x20080) != 0 )
  {
    result = v0 ^ 0x80;
    __writecr4(v0 ^ 0x80);
    __writecr4(v0);
  }
  else
  {
    result = __readcr3();
    __writecr3(result);
  }
  return result;
}
