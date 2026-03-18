/*
 * XREFs of SeMinTcbLowering @ 0x1407E9100
 * Callers:
 *     sub_14079BAE4 @ 0x14079BAE4 (sub_14079BAE4.c)
 * Callees:
 *     <none>
 */

_BOOL8 SeMinTcbLowering()
{
  return (SeCiDebugOptions & 4) != 0 || !KdpBootedNodebug && (SeCiDebugOptions & 2) != 0;
}
