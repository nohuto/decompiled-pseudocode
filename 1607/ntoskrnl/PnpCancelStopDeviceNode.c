/*
 * XREFs of PnpCancelStopDeviceNode @ 0x14062FF20
 * Callers:
 *     PnpCancelStopDeviceSubtree @ 0x14062FFAC (PnpCancelStopDeviceSubtree.c)
 *     PnpQueryRebalanceWorker @ 0x140630198 (PnpQueryRebalanceWorker.c)
 * Callees:
 *     PoFxIdleDevice @ 0x14000842C (PoFxIdleDevice.c)
 *     PipRestoreDevNodeState @ 0x14009E68C (PipRestoreDevNodeState.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     PnpUnlockMountableDevice @ 0x1401CDE9C (PnpUnlockMountableDevice.c)
 *     PipClearDevNodeFlags @ 0x1403F3414 (PipClearDevNodeFlags.c)
 *     IopQueryReconfiguration @ 0x14064A01C (IopQueryReconfiguration.c)
 */

void __fastcall PnpCancelStopDeviceNode(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  if ( *(_DWORD *)(BugCheckParameter2 + 300) == 777 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 704) & 0x20) == 0 )
      KeBugCheckEx(0xCAu, 0xDuLL, BugCheckParameter2, 0x20uLL, 0LL);
    PoFxIdleDevice(*(_QWORD *)(BugCheckParameter2 + 32));
    v2 = *(_QWORD *)(BugCheckParameter2 + 32);
    LOBYTE(v3) = 6;
    *(_DWORD *)(BugCheckParameter2 + 704) &= ~0x20u;
    IopQueryReconfiguration(v3, v2);
    PipRestoreDevNodeState(BugCheckParameter2);
    if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x1000000) != 0 )
    {
      PnpUnlockMountableDevice(*(_QWORD *)(BugCheckParameter2 + 32));
      PipClearDevNodeFlags(BugCheckParameter2, 0x1000000);
    }
  }
}
