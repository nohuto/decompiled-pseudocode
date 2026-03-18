/*
 * XREFs of PnpCancelStopDeviceSubtree @ 0x14062FFAC
 * Callers:
 *     PnpCancelStopDeviceSubtree @ 0x14062FFAC (PnpCancelStopDeviceSubtree.c)
 *     PnpRebalance @ 0x1406303D0 (PnpRebalance.c)
 * Callees:
 *     PnpCancelStopDeviceNode @ 0x14062FF20 (PnpCancelStopDeviceNode.c)
 *     PnpCancelStopDeviceSubtree @ 0x14062FFAC (PnpCancelStopDeviceSubtree.c)
 */

void __fastcall PnpCancelStopDeviceSubtree(ULONG_PTR a1)
{
  _QWORD *i; // rbx

  PnpCancelStopDeviceNode(a1);
  for ( i = *(_QWORD **)(a1 + 8); i; i = (_QWORD *)*i )
    PnpCancelStopDeviceSubtree(i);
}
