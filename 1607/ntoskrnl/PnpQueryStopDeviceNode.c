/*
 * XREFs of PnpQueryStopDeviceNode @ 0x1406303E8
 * Callers:
 *     PnpQueryRebalanceWorker @ 0x14063024C (PnpQueryRebalanceWorker.c)
 * Callees:
 *     PoFxActivateDevice @ 0x140007BF4 (PoFxActivateDevice.c)
 *     PipSetDevNodeState @ 0x1400091A0 (PipSetDevNodeState.c)
 *     PnpFindMountableDevice @ 0x140085DF0 (PnpFindMountableDevice.c)
 *     PnpLockMountableDevice @ 0x1401CDBB8 (PnpLockMountableDevice.c)
 *     PiRebalanceOptOut @ 0x1401CE2CC (PiRebalanceOptOut.c)
 *     PipSetDevNodeFlags @ 0x1403F2264 (PipSetDevNodeFlags.c)
 *     PnpTraceQueryStopFailure @ 0x1406492F8 (PnpTraceQueryStopFailure.c)
 *     IopQueryReconfiguration @ 0x14064A100 (IopQueryReconfiguration.c)
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
