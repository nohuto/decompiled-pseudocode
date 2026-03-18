/*
 * XREFs of PiSwFindChildren @ 0x140538A2C
 * Callers:
 *     PipEnumerateCompleted @ 0x1404E09B8 (PipEnumerateCompleted.c)
 *     PiSwProcessParentRemoveIrp @ 0x1405386E4 (PiSwProcessParentRemoveIrp.c)
 *     PiSwStopDestroy @ 0x1405388DC (PiSwStopDestroy.c)
 *     PiSwProcessParentStartIrp @ 0x140538988 (PiSwProcessParentStartIrp.c)
 * Callees:
 *     PiSwFindBusRelations @ 0x140538A4C (PiSwFindBusRelations.c)
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
