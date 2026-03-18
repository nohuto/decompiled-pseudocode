/*
 * XREFs of ??_GCTDR_DUMP_BUFFER@@QEAAPEAXI@Z @ 0x1C013C898
 * Callers:
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C013D930 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrDeleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C013DD58 (-TdrDeleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?ShrinkLastSegment@CTDR_DUMP_BUFFER@@AEAAXXZ @ 0x1C013CB74 (-ShrinkLastSegment@CTDR_DUMP_BUFFER@@AEAAXXZ.c)
 *     ?TdrFreePool@@YAXPEAX@Z @ 0x1C013DE70 (-TdrFreePool@@YAXPEAX@Z.c)
 */

CTDR_DUMP_BUFFER *__fastcall CTDR_DUMP_BUFFER::`scalar deleting destructor'(CTDR_DUMP_BUFFER *this)
{
  CTDR_DUMP_BUFFER::ShrinkLastSegment(this);
  TdrFreePool(this);
  return this;
}
