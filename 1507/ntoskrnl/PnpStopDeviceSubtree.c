/*
 * XREFs of PnpStopDeviceSubtree @ 0x1406811D4
 * Callers:
 *     PnpRebalance @ 0x140680EDC (PnpRebalance.c)
 *     PnpStopDeviceSubtree @ 0x1406811D4 (PnpStopDeviceSubtree.c)
 * Callees:
 *     PipSetDevNodeState @ 0x1400CFB9C (PipSetDevNodeState.c)
 *     PnpStopDeviceSubtree @ 0x1406811D4 (PnpStopDeviceSubtree.c)
 *     IopQueryReconfiguration @ 0x140694340 (IopQueryReconfiguration.c)
 */

__int64 __fastcall PnpStopDeviceSubtree(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rdi
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 8);
  v2 = a1;
  while ( v1 )
  {
    result = PnpStopDeviceSubtree(v1);
    v1 = (_QWORD *)*v1;
  }
  if ( *(_DWORD *)(v2 + 300) == 777 )
  {
    LOBYTE(a1) = 4;
    IopQueryReconfiguration(a1, *(_QWORD *)(v2 + 32));
    return PipSetDevNodeState(v2, 778);
  }
  return result;
}
