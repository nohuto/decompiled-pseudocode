/*
 * XREFs of PnpCancelStopDeviceNode @ 0x140680AE4
 * Callers:
 *     PnpCancelStopDeviceSubtree @ 0x140680B70 (PnpCancelStopDeviceSubtree.c)
 *     PnpQueryRebalanceWorker @ 0x140680CF0 (PnpQueryRebalanceWorker.c)
 * Callees:
 *     PoFxIdleDevice @ 0x140026DEC (PoFxIdleDevice.c)
 *     PipRestoreDevNodeState @ 0x14011C394 (PipRestoreDevNodeState.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     PnpUnlockMountableDevice @ 0x1401FB45C (PnpUnlockMountableDevice.c)
 *     PipClearDevNodeFlags @ 0x1404E3CDC (PipClearDevNodeFlags.c)
 *     IopQueryReconfiguration @ 0x140694340 (IopQueryReconfiguration.c)
 */

__int64 __fastcall PnpCancelStopDeviceNode(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 result; // rax

  if ( *(_DWORD *)(BugCheckParameter2 + 300) == 777 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 704) & 0x20) == 0 )
      KeBugCheckEx(0xCAu, 0xDuLL, BugCheckParameter2, 0x20uLL, 0LL);
    PoFxIdleDevice(*(_QWORD *)(BugCheckParameter2 + 32));
    v2 = *(_QWORD *)(BugCheckParameter2 + 32);
    LOBYTE(v3) = 6;
    *(_DWORD *)(BugCheckParameter2 + 704) &= ~0x20u;
    IopQueryReconfiguration(v3, v2);
    result = PipRestoreDevNodeState(BugCheckParameter2);
    if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x1000000) != 0 )
    {
      PnpUnlockMountableDevice(*(_QWORD *)(BugCheckParameter2 + 32));
      return PipClearDevNodeFlags(BugCheckParameter2, 0x1000000);
    }
  }
  return result;
}
