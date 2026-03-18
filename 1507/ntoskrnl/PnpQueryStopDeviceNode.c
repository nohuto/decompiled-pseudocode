/*
 * XREFs of PnpQueryStopDeviceNode @ 0x140680E54
 * Callers:
 *     PnpQueryRebalanceWorker @ 0x140680CF0 (PnpQueryRebalanceWorker.c)
 * Callees:
 *     PoFxActivateDevice @ 0x140026F90 (PoFxActivateDevice.c)
 *     PipSetDevNodeState @ 0x1400CFB9C (PipSetDevNodeState.c)
 *     PnpFindMountableDevice @ 0x14011BEE8 (PnpFindMountableDevice.c)
 *     PnpLockMountableDevice @ 0x1401FB32C (PnpLockMountableDevice.c)
 *     PiRebalanceOptOut @ 0x1401FB924 (PiRebalanceOptOut.c)
 *     PipSetDevNodeFlags @ 0x1404E3454 (PipSetDevNodeFlags.c)
 *     IopQueryReconfiguration @ 0x140694340 (IopQueryReconfiguration.c)
 */

__int64 __fastcall PnpQueryStopDeviceNode(__int64 a1, char a2)
{
  unsigned int Reconfiguration; // edi
  __int64 v4; // rdx
  __int64 v5; // rcx

  Reconfiguration = -1073741823;
  if ( *(_DWORD *)(a1 + 300) == 776 && (!a2 || !PiRebalanceOptOut(a1)) )
  {
    if ( PnpFindMountableDevice(*(_QWORD *)(a1 + 32)) )
    {
      PnpLockMountableDevice(*(_QWORD **)(a1 + 32));
      PipSetDevNodeFlags(a1, 0x1000000);
    }
    PoFxActivateDevice(*(_QWORD *)(a1 + 32));
    v4 = *(_QWORD *)(a1 + 32);
    LOBYTE(v5) = 5;
    *(_DWORD *)(a1 + 704) |= 0x20u;
    Reconfiguration = IopQueryReconfiguration(v5, v4);
    PipSetDevNodeState(a1, 777);
  }
  return Reconfiguration;
}
