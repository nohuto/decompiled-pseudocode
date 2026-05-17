/*
 * XREFs of TppDestroyTimer @ 0x18003D7A4
 * Callers:
 *     TppTimerpFree @ 0x18003ED20 (TppTimerpFree.c)
 *     TppFreeWait @ 0x18007D390 (TppFreeWait.c)
 * Callees:
 *     TpAdjustBindingCount @ 0x18003DB58 (TpAdjustBindingCount.c)
 */

__int64 __fastcall TppDestroyTimer(__int64 a1)
{
  TpAdjustBindingCount(*(_QWORD *)(a1 + 136), 0xFFFFFFFFLL);
  return TppCleanupGroupMemberDestroy(a1);
}
