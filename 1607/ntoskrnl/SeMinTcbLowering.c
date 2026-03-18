/*
 * XREFs of SeMinTcbLowering @ 0x1407D1500
 * Callers:
 *     sub_140778D9C @ 0x140778D9C (sub_140778D9C.c)
 * Callees:
 *     <none>
 */

_BOOL8 SeMinTcbLowering()
{
  return (SeCiDebugOptions & 4) != 0 || !KdpBootedNodebug && (SeCiDebugOptions & 2) != 0;
}
