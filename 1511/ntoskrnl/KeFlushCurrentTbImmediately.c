/*
 * XREFs of KeFlushCurrentTbImmediately @ 0x1401C6F30
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1400474D0 (PpmIdleExecuteTransition.c)
 *     HvlpGetEncryptedDataFromHypervisor @ 0x1401B48AC (HvlpGetEncryptedDataFromHypervisor.c)
 *     KeWakeProcessor @ 0x1401C71C8 (KeWakeProcessor.c)
 *     KeThawExecution @ 0x1401C8F5C (KeThawExecution.c)
 *     KiFreezeTargetExecution @ 0x1401C9144 (KiFreezeTargetExecution.c)
 *     PopHandleNextState @ 0x1403A0B10 (PopHandleNextState.c)
 *     KeLoadMTRR @ 0x1403A5F74 (KeLoadMTRR.c)
 *     KiSetPageAttributesTable @ 0x1403A6428 (KiSetPageAttributesTable.c)
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
