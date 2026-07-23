/*
 * XREFs of MiWakeModifiedPageWriter @ 0x1401137B8
 * Callers:
 *     MiInsertPageInList @ 0x140069150 (MiInsertPageInList.c)
 *     MiAdjustModifiedPageLoad @ 0x1400BC8E0 (MiAdjustModifiedPageLoad.c)
 *     MiFlushAllPages @ 0x1401136F8 (MiFlushAllPages.c)
 *     MiObtainFreePages @ 0x1401E9934 (MiObtainFreePages.c)
 *     MiFlushAllHintedStorePages @ 0x1401EE540 (MiFlushAllHintedStorePages.c)
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeSetActualBasePriorityThread @ 0x1400D06E0 (KeSetActualBasePriorityThread.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
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
