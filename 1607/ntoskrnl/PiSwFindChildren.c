/*
 * XREFs of PiSwFindChildren @ 0x1403F1A94
 * Callers:
 *     PipEnumerateCompleted @ 0x1403F30EC (PipEnumerateCompleted.c)
 *     PiSwStopDestroy @ 0x1404C6264 (PiSwStopDestroy.c)
 *     PiSwProcessParentRemoveIrp @ 0x1404C62E4 (PiSwProcessParentRemoveIrp.c)
 *     PiSwProcessParentStartIrp @ 0x1404C8128 (PiSwProcessParentStartIrp.c)
 * Callees:
 *     PiSwFindBusRelations @ 0x1403F1AB4 (PiSwFindBusRelations.c)
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
