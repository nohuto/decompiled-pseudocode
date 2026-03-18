/*
 * XREFs of PcisuppReleasePciRouting @ 0x1C007FD80
 * Callers:
 *     PcisuppAcquirePciInterfaces @ 0x1C00731BC (PcisuppAcquirePciInterfaces.c)
 *     PcisuppReleasePciInterfaces @ 0x1C007FD18 (PcisuppReleasePciInterfaces.c)
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
