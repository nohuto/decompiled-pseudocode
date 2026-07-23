/*
 * XREFs of IoGetPagingIoPriority @ 0x140099D14
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

IO_PAGING_PRIORITY __stdcall IoGetPagingIoPriority(PIRP Irp)
{
  ULONG Flags; // ecx
  IO_PAGING_PRIORITY result; // eax

  Flags = Irp->Flags;
  result = IoPagingPriorityHigh;
  if ( (Flags & 2) == 0 )
    return 0;
  if ( ((Flags >> 17) & 7) != 5 )
    return 1;
  return result;
}
