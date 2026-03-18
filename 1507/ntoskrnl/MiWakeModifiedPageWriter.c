/*
 * XREFs of MiWakeModifiedPageWriter @ 0x14014D788
 * Callers:
 *     MiAdjustModifiedPageLoad @ 0x140012840 (MiAdjustModifiedPageLoad.c)
 *     MiInsertPageInList @ 0x1400C6750 (MiInsertPageInList.c)
 *     MiFlushAllPages @ 0x14014D6A0 (MiFlushAllPages.c)
 *     MiObtainFreePages @ 0x14021AB2C (MiObtainFreePages.c)
 *     MiFlushAllHintedStorePages @ 0x14022179C (MiFlushAllHintedStorePages.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x140009C20 (KeSetActualBasePriorityThread.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 */

LONG __fastcall MiWakeModifiedPageWriter(__int64 a1, __int64 a2)
{
  if ( a2 == -1 )
  {
    if ( *(_DWORD *)(a1 + 628) )
      KeSetEvent((PRKEVENT)(a1 + 632), 0, 0);
    if ( *(_DWORD *)(a1 + 656) != 18 )
      KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 856), 0x12u);
  }
  else
  {
    *(_QWORD *)(a1 + 664) = a2;
  }
  return KeSetEvent((PRKEVENT)(a1 + 672), 0, 0);
}
