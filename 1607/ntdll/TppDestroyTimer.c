/*
 * XREFs of TppDestroyTimer @ 0x18003B568
 * Callers:
 *     TppTimerpFree @ 0x18003A530 (TppTimerpFree.c)
 *     TppFreeWait @ 0x180064DF0 (TppFreeWait.c)
 * Callees:
 *     TpAdjustBindingCount @ 0x18003D2F8 (TpAdjustBindingCount.c)
 */

__int64 __fastcall TppDestroyTimer(__int64 a1)
{
  TpAdjustBindingCount(*(_QWORD *)(a1 + 144), 0xFFFFFFFFLL);
  return TppCleanupGroupMemberDestroy(a1);
}
