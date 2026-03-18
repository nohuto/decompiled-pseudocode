/*
 * XREFs of PcisuppReleasePciRouting @ 0x1C007FBA0
 * Callers:
 *     PcisuppAcquirePciInterfaces @ 0x1C0072FA4 (PcisuppAcquirePciInterfaces.c)
 *     PcisuppReleasePciInterfaces @ 0x1C007FB38 (PcisuppReleasePciInterfaces.c)
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
