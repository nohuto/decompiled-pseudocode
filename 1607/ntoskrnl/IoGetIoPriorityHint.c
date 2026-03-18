/*
 * XREFs of IoGetIoPriorityHint @ 0x1400EBCB0
 * Callers:
 *     IoRetrievePriorityInfo @ 0x1400EB870 (IoRetrievePriorityInfo.c)
 *     IopCallDriverReference @ 0x1400EBA7C (IopCallDriverReference.c)
 *     IopSynchronousServiceTail @ 0x1404457B0 (IopSynchronousServiceTail.c)
 * Callees:
 *     <none>
 */

IO_PRIORITY_HINT __stdcall IoGetIoPriorityHint(PIRP Irp)
{
  IO_PRIORITY_HINT result; // eax
  PETHREAD Thread; // rdx

  if ( ((Irp->Flags >> 17) & 7) == 0 )
    return 2;
  result = ((Irp->Flags >> 17) & 7) - 1;
  if ( result < IoPriorityNormal )
  {
    Thread = Irp->Tail.Overlay.Thread;
    if ( Thread )
    {
      if ( Thread[1].Timer.DueTime.LowPart )
        return 2;
    }
  }
  return result;
}
