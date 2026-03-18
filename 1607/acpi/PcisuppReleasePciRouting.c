/*
 * XREFs of PcisuppReleasePciRouting @ 0x1C00A18C8
 * Callers:
 *     PcisuppAcquirePciInterfaces @ 0x1C00905F8 (PcisuppAcquirePciInterfaces.c)
 *     PcisuppReleasePciInterfaces @ 0x1C00A17EC (PcisuppReleasePciInterfaces.c)
 * Callees:
 *     <none>
 */

void PcisuppReleasePciRouting()
{
  if ( InterruptRouting )
  {
    ExFreePoolWithTag(InterruptRouting, 0);
    InterruptRouting = 0LL;
  }
}
