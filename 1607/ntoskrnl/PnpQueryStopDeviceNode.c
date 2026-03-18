/*
 * XREFs of PnpQueryStopDeviceNode @ 0x140630334
 * Callers:
 *     PnpQueryRebalanceWorker @ 0x140630198 (PnpQueryRebalanceWorker.c)
 * Callees:
 *     PoFxActivateDevice @ 0x140008080 (PoFxActivateDevice.c)
 *     PipSetDevNodeState @ 0x14000962C (PipSetDevNodeState.c)
 *     PnpFindMountableDevice @ 0x14009EC90 (PnpFindMountableDevice.c)
 *     PnpLockMountableDevice @ 0x1401CDD6C (PnpLockMountableDevice.c)
 *     PiRebalanceOptOut @ 0x1401CE480 (PiRebalanceOptOut.c)
 *     PipSetDevNodeFlags @ 0x1403F33A0 (PipSetDevNodeFlags.c)
 *     PnpTraceQueryStopFailure @ 0x140649214 (PnpTraceQueryStopFailure.c)
 *     IopQueryReconfiguration @ 0x14064A01C (IopQueryReconfiguration.c)
 */

__int64 __fastcall PnpQueryStopDeviceNode(__int64 a1, char a2)
{
  unsigned int Reconfiguration; // edi
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx

  Reconfiguration = -1073741823;
  if ( *(_DWORD *)(a1 + 300) == 776 )
  {
    if ( a2 && PiRebalanceOptOut(a1) )
    {
      LOBYTE(v4) = 1;
LABEL_9:
      PnpTraceQueryStopFailure(a1, Reconfiguration, v4);
      return Reconfiguration;
    }
    if ( PnpFindMountableDevice(*(_QWORD *)(a1 + 32)) )
    {
      PnpLockMountableDevice(*(_QWORD **)(a1 + 32));
      PipSetDevNodeFlags(a1, 0x1000000);
    }
    PoFxActivateDevice(*(_QWORD *)(a1 + 32));
    v5 = *(_QWORD *)(a1 + 32);
    LOBYTE(v6) = 5;
    *(_DWORD *)(a1 + 704) |= 0x20u;
    Reconfiguration = IopQueryReconfiguration(v6, v5);
    PipSetDevNodeState(a1, 777);
    if ( (Reconfiguration & 0x80000000) != 0 )
    {
      v4 = 0LL;
      goto LABEL_9;
    }
  }
  return Reconfiguration;
}
