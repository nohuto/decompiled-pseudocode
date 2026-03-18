/*
 * XREFs of VfKeIrqlTransitionReserveLogEntry @ 0x1406C6CF0
 * Callers:
 *     VfKeIrqlLogRaise @ 0x1406C6CCC (VfKeIrqlLogRaise.c)
 *     ViKeLowerIrqlSanityChecks @ 0x1406C6F78 (ViKeLowerIrqlSanityChecks.c)
 *     ViExReleaseFastMutexCommon @ 0x1406CE5F8 (ViExReleaseFastMutexCommon.c)
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
