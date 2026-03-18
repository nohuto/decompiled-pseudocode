/*
 * XREFs of MiObtainFreePages @ 0x14021AB2C
 * Callers:
 *     MiUnlinkPageFromList @ 0x1400C6FD0 (MiUnlinkPageFromList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1400C7B60 (MiUnlinkFreeOrZeroedPage.c)
 *     MiReplenishPageSlist @ 0x1401009F0 (MiReplenishPageSlist.c)
 *     MiDecreaseAvailablePages @ 0x1401026DC (MiDecreaseAvailablePages.c)
 *     MiWaitForFreePage @ 0x14022ECFC (MiWaitForFreePage.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     CcNotifyWriteBehind @ 0x1401284AC (CcNotifyWriteBehind.c)
 *     MiWakeModifiedPageWriter @ 0x14014D788 (MiWakeModifiedPageWriter.c)
 */

LONG __fastcall MiObtainFreePages(__int64 a1)
{
  __int64 v1; // rdi
  LONG result; // eax

  v1 = *(_QWORD *)(a1 + 5256);
  if ( v1 && *(_BYTE *)(v1 + 52) != 1 )
  {
    result = CcNotifyWriteBehind(1);
    if ( *(_QWORD *)(a1 + 5632) - *(_QWORD *)(a1 + 5744) >= 0x10uLL )
      result = KeSetEvent((PRKEVENT)(a1 + 704), 0, 0);
    if ( *(_QWORD *)(a1 + 5744) >= 0x10uLL )
      result = MiWakeModifiedPageWriter(a1, -1LL);
    if ( *(_BYTE *)(v1 + 106) )
      return KeSetEvent((PRKEVENT)(v1 + 104), 0, 0);
  }
  return result;
}
