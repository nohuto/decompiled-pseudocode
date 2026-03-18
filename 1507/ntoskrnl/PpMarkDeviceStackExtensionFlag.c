/*
 * XREFs of PpMarkDeviceStackExtensionFlag @ 0x14012B9FC
 * Callers:
 *     PnpStartDeviceNode @ 0x14045E860 (PnpStartDeviceNode.c)
 *     PiProcessNewDeviceNode @ 0x1404D7558 (PiProcessNewDeviceNode.c)
 *     IopDoDeferredSetInterfaceState @ 0x140550270 (IopDoDeferredSetInterfaceState.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 */

void __fastcall PpMarkDeviceStackExtensionFlag(__int64 a1, int a2, char a3)
{
  KIRQL v6; // r9

  v6 = KeAcquireQueuedSpinLock(0xAuLL);
  while ( a1 )
  {
    if ( a3 )
      *(_DWORD *)(*(_QWORD *)(a1 + 312) + 32LL) |= a2;
    else
      *(_DWORD *)(*(_QWORD *)(a1 + 312) + 32LL) &= ~a2;
    a1 = *(_QWORD *)(a1 + 24);
  }
  KeReleaseQueuedSpinLock(0xAuLL, v6);
}
