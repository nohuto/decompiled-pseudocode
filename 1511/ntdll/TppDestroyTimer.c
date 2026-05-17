/*
 * XREFs of TppDestroyTimer @ 0x18000CA80
 * Callers:
 *     TppFreeWait @ 0x180006640 (TppFreeWait.c)
 *     TppTimerpFree @ 0x18000A570 (TppTimerpFree.c)
 * Callees:
 *     TpAdjustBindingCount @ 0x18000CFA0 (TpAdjustBindingCount.c)
 */

__int64 __fastcall TppDestroyTimer(__int64 a1)
{
  TpAdjustBindingCount(*(_QWORD *)(a1 + 136), 0xFFFFFFFFLL);
  return TppCleanupGroupMemberDestroy(a1);
}
