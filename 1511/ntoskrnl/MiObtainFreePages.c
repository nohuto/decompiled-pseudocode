/*
 * XREFs of MiObtainFreePages @ 0x1401D7D4C
 * Callers:
 *     MiReplenishPageSlist @ 0x140012870 (MiReplenishPageSlist.c)
 *     MiDecreaseAvailablePages @ 0x1400197DC (MiDecreaseAvailablePages.c)
 *     MiUnlinkPageFromList @ 0x14003E230 (MiUnlinkPageFromList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14003ECA0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiWaitForFreePage @ 0x1401E4C20 (MiWaitForFreePage.c)
 * Callees:
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     CcNotifyWriteBehind @ 0x1400EB5C0 (CcNotifyWriteBehind.c)
 *     MiWakeModifiedPageWriter @ 0x140118C84 (MiWakeModifiedPageWriter.c)
 */

LONG __fastcall MiObtainFreePages(__int64 a1)
{
  __int64 v1; // rdi
  LONG result; // eax

  v1 = *(_QWORD *)(a1 + 5616);
  if ( v1 && *(_BYTE *)(v1 + 52) != 1 )
  {
    result = CcNotifyWriteBehind(1);
    if ( *(_QWORD *)(a1 + 6016) - *(_QWORD *)(a1 + 6128) >= 0x10uLL )
      result = KeSetEvent((PRKEVENT)(a1 + 712), 0, 0);
    if ( *(_QWORD *)(a1 + 6128) >= 0x10uLL )
      result = MiWakeModifiedPageWriter(a1, -1LL);
    if ( *(_BYTE *)(v1 + 106) )
      return KeSetEvent((PRKEVENT)(v1 + 104), 0, 0);
  }
  return result;
}
