/*
 * XREFs of TppDestroyTimer @ 0x18003B578
 * Callers:
 *     TppTimerpFree @ 0x18003A540 (TppTimerpFree.c)
 *     TppFreeWait @ 0x180064E00 (TppFreeWait.c)
 * Callees:
 *     TpAdjustBindingCount @ 0x18003D308 (TpAdjustBindingCount.c)
 */

__int64 __fastcall TppDestroyTimer(__int64 a1)
{
  TpAdjustBindingCount(*(_QWORD *)(a1 + 144), 0xFFFFFFFFLL);
  return TppCleanupGroupMemberDestroy(a1);
}
