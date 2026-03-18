/*
 * XREFs of PnpStopDeviceSubtree @ 0x14060642C
 * Callers:
 *     PnpRebalance @ 0x140606198 (PnpRebalance.c)
 *     PnpStopDeviceSubtree @ 0x14060642C (PnpStopDeviceSubtree.c)
 * Callees:
 *     PipSetDevNodeState @ 0x140099720 (PipSetDevNodeState.c)
 *     PnpStopDeviceSubtree @ 0x14060642C (PnpStopDeviceSubtree.c)
 *     IopQueryReconfiguration @ 0x1406155C8 (IopQueryReconfiguration.c)
 */

void __fastcall PnpStopDeviceSubtree(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rdi

  v1 = *(_QWORD **)(a1 + 8);
  v2 = a1;
  while ( v1 )
  {
    PnpStopDeviceSubtree(v1);
    v1 = (_QWORD *)*v1;
  }
  if ( *(_DWORD *)(v2 + 300) == 777 )
  {
    LOBYTE(a1) = 4;
    IopQueryReconfiguration(a1, *(_QWORD *)(v2 + 32));
    PipSetDevNodeState(v2, 778);
  }
}
