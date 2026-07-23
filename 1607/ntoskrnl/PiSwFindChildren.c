/*
 * XREFs of PiSwFindChildren @ 0x1403F0958
 * Callers:
 *     PipEnumerateCompleted @ 0x1403F1FB0 (PipEnumerateCompleted.c)
 *     PiSwStopDestroy @ 0x140484A6C (PiSwStopDestroy.c)
 *     PiSwProcessParentRemoveIrp @ 0x140484AEC (PiSwProcessParentRemoveIrp.c)
 *     PiSwProcessParentStartIrp @ 0x1404CFB84 (PiSwProcessParentStartIrp.c)
 * Callees:
 *     PiSwFindBusRelations @ 0x1403F0978 (PiSwFindBusRelations.c)
 */

__int64 PiSwFindChildren()
{
  __int64 BusRelations; // rcx
  __int64 result; // rax

  BusRelations = PiSwFindBusRelations();
  result = 0LL;
  if ( BusRelations )
    return BusRelations + 16;
  return result;
}
