/*
 * XREFs of PnpStopDeviceSubtree @ 0x1406307DC
 * Callers:
 *     PnpRebalance @ 0x140630484 (PnpRebalance.c)
 *     PnpStopDeviceSubtree @ 0x1406307DC (PnpStopDeviceSubtree.c)
 * Callees:
 *     PipSetDevNodeState @ 0x1400091A0 (PipSetDevNodeState.c)
 *     PnpStopDeviceSubtree @ 0x1406307DC (PnpStopDeviceSubtree.c)
 *     IopQueryReconfiguration @ 0x14064A100 (IopQueryReconfiguration.c)
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
