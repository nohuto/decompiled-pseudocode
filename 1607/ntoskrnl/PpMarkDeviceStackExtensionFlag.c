/*
 * XREFs of PpMarkDeviceStackExtensionFlag @ 0x1400B0660
 * Callers:
 *     PnpStartDeviceNode @ 0x1403F10D4 (PnpStartDeviceNode.c)
 *     PiProcessNewDeviceNode @ 0x140487BC4 (PiProcessNewDeviceNode.c)
 *     IopDoDeferredSetInterfaceState @ 0x1404E7110 (IopDoDeferredSetInterfaceState.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400E8D30 (KeAcquireQueuedSpinLock.c)
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
