/*
 * XREFs of IoGetIoPriorityHint @ 0x140077CE0
 * Callers:
 *     IoRetrievePriorityInfo @ 0x140072690 (IoRetrievePriorityInfo.c)
 *     IopCallDriverReference @ 0x140077AB0 (IopCallDriverReference.c)
 *     IopXxxControlFile @ 0x140410C30 (IopXxxControlFile.c)
 *     IopSynchronousServiceTail @ 0x140437580 (IopSynchronousServiceTail.c)
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
      if ( HIDWORD(Thread[1].Timer.TimerListEntry.Flink) )
        return 2;
    }
  }
  return result;
}
