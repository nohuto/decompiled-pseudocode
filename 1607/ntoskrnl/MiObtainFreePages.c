/*
 * XREFs of MiObtainFreePages @ 0x1401E9934
 * Callers:
 *     MiUnlinkPageFromList @ 0x1400655C0 (MiUnlinkPageFromList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140066880 (MiUnlinkFreeOrZeroedPage.c)
 *     MiDecreaseAvailablePages @ 0x14008A420 (MiDecreaseAvailablePages.c)
 *     MiWaitForFreePage @ 0x1401F4008 (MiWaitForFreePage.c)
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     CcNotifyWriteBehind @ 0x1400A9F48 (CcNotifyWriteBehind.c)
 *     MiWakeModifiedPageWriter @ 0x1401137B8 (MiWakeModifiedPageWriter.c)
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
