/*
 * XREFs of MiWakeModifiedPageWriter @ 0x140113248
 * Callers:
 *     MiInsertPageInList @ 0x1400695D0 (MiInsertPageInList.c)
 *     MiAdjustModifiedPageLoad @ 0x1400BEA50 (MiAdjustModifiedPageLoad.c)
 *     MiFlushAllPages @ 0x140113188 (MiFlushAllPages.c)
 *     MiObtainFreePages @ 0x1401E9B08 (MiObtainFreePages.c)
 *     MiFlushAllHintedStorePages @ 0x1401EE714 (MiFlushAllHintedStorePages.c)
 * Callees:
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     KeSetActualBasePriorityThread @ 0x1400D2840 (KeSetActualBasePriorityThread.c)
 *     ExAcquireRundownProtection @ 0x1400D3ED0 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 */

LONG __fastcall MiWakeModifiedPageWriter(__int64 a1, __int64 a2)
{
  if ( a2 == -1 )
  {
    if ( *(_DWORD *)(a1 + 604) )
      KeSetEvent((PRKEVENT)(a1 + 608), 0, 0);
    if ( *(_DWORD *)(a1 + 632) != 18 && ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 864)) )
    {
      KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 856), 0x12u);
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 864));
    }
  }
  else
  {
    *(_QWORD *)(a1 + 640) = a2;
  }
  return KeSetEvent((PRKEVENT)(a1 + 648), 0, 0);
}
