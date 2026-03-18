/*
 * XREFs of VfKeIrqlTransitionReserveLogEntry @ 0x140712D40
 * Callers:
 *     VfKeIrqlLogRaise @ 0x140712D1C (VfKeIrqlLogRaise.c)
 *     ViKeLowerIrqlSanityChecks @ 0x140712FC8 (ViKeLowerIrqlSanityChecks.c)
 *     ViExReleaseFastMutexCommon @ 0x14071A6B0 (ViExReleaseFastMutexCommon.c)
 * Callees:
 *     <none>
 */

char *__fastcall VfKeIrqlTransitionReserveLogEntry(char a1, char a2)
{
  char *v2; // r8

  v2 = 0LL;
  if ( ViTrackIrqlQueue )
  {
    if ( ViKeTrackIrqlDisabled )
    {
      _InterlockedIncrement(&ViKeTrackIrqlSkipped);
    }
    else
    {
      v2 = (char *)ViTrackIrqlQueue
         + 56 * (_InterlockedIncrement(&ViTrackIrqlIndex) & (unsigned int)(ViTrackIrqlQueueLength - 1));
      v2[8] = a1;
      v2[9] = a2;
      *((_WORD *)v2 + 5) = KeGetPcr()->Prcb.Number;
    }
  }
  return v2;
}
