/*
 * XREFs of PpMarkDeviceStackExtensionFlag @ 0x140107730
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1404ED460 (PiProcessNewDeviceNode.c)
 *     IopDoDeferredSetInterfaceState @ 0x1404F16E8 (IopDoDeferredSetInterfaceState.c)
 *     PnpStartDeviceNode @ 0x1404F2A48 (PnpStartDeviceNode.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
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
