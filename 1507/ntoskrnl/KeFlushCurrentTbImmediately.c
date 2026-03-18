/*
 * XREFs of KeFlushCurrentTbImmediately @ 0x140203C84
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1400A7C10 (PpmIdleExecuteTransition.c)
 *     HvlpGetEncryptedDataFromHypervisor @ 0x1401EF7AC (HvlpGetEncryptedDataFromHypervisor.c)
 *     KeWakeProcessor @ 0x140203EC8 (KeWakeProcessor.c)
 *     KeThawExecution @ 0x14020657C (KeThawExecution.c)
 *     KiFreezeTargetExecution @ 0x140206774 (KiFreezeTargetExecution.c)
 *     PopHandleNextState @ 0x1403F3750 (PopHandleNextState.c)
 *     KeLoadMTRR @ 0x1403F6174 (KeLoadMTRR.c)
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
