/*
 * XREFs of MiWakeModifiedPageWriter @ 0x140118C84
 * Callers:
 *     MiAdjustModifiedPageLoad @ 0x14001373C (MiAdjustModifiedPageLoad.c)
 *     MiInsertPageInList @ 0x14003DC20 (MiInsertPageInList.c)
 *     MiFlushAllPages @ 0x140118BC4 (MiFlushAllPages.c)
 *     MiObtainFreePages @ 0x1401D7D4C (MiObtainFreePages.c)
 *     MiFlushAllHintedStorePages @ 0x1401DCA38 (MiFlushAllHintedStorePages.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KeSetActualBasePriorityThread @ 0x14007D1E0 (KeSetActualBasePriorityThread.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 */

LONG __fastcall MiWakeModifiedPageWriter(__int64 a1, __int64 a2)
{
  __int64 v4; // r8

  if ( a2 == -1 )
  {
    if ( *(_DWORD *)(a1 + 612) )
      KeSetEvent((PRKEVENT)(a1 + 616), 0, 0);
    if ( *(_DWORD *)(a1 + 640) != 18 && ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 872)) )
    {
      KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 864), 18LL, v4);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 872));
    }
  }
  else
  {
    *(_QWORD *)(a1 + 648) = a2;
  }
  return KeSetEvent((PRKEVENT)(a1 + 656), 0, 0);
}
