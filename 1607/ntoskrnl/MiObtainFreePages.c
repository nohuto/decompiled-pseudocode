/*
 * XREFs of MiObtainFreePages @ 0x1401E9B08
 * Callers:
 *     MiUnlinkPageFromList @ 0x140065A40 (MiUnlinkPageFromList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140066D00 (MiUnlinkFreeOrZeroedPage.c)
 *     MiDecreaseAvailablePages @ 0x14008AD20 (MiDecreaseAvailablePages.c)
 *     MiWaitForFreePage @ 0x1401F41DC (MiWaitForFreePage.c)
 * Callees:
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     CcNotifyWriteBehind @ 0x1400AB9E0 (CcNotifyWriteBehind.c)
 *     MiWakeModifiedPageWriter @ 0x140113248 (MiWakeModifiedPageWriter.c)
 */

LONG __fastcall MiObtainFreePages(__int64 a1)
{
  __int64 v1; // rdi
  LONG result; // eax

  v1 = *(_QWORD *)(a1 + 6248);
  if ( v1 && *(_BYTE *)(v1 + 52) != 1 )
  {
    result = CcNotifyWriteBehind(1);
    if ( *(_QWORD *)(a1 + 7232) - *(_QWORD *)(a1 + 7344) >= 0x10uLL )
      result = KeSetEvent((PRKEVENT)(a1 + 704), 0, 0);
    if ( *(_QWORD *)(a1 + 7344) >= 0x10uLL )
      result = MiWakeModifiedPageWriter(a1, -1LL);
    if ( *(_BYTE *)(v1 + 106) )
      return KeSetEvent((PRKEVENT)(v1 + 104), 0, 0);
  }
  return result;
}
