/*
 * XREFs of RIMAbandonHoldingFrame @ 0x1C00C93D4
 * Callers:
 *     RIMFindAndAbandonHoldingFrame @ 0x1C00C946C (RIMFindAndAbandonHoldingFrame.c)
 *     RIMStoreFrameNodes @ 0x1C00C9870 (RIMStoreFrameNodes.c)
 * Callees:
 *     EtwTraceEndPointerFrameCreation @ 0x1C00ABC20 (EtwTraceEndPointerFrameCreation.c)
 */

__int64 __fastcall RIMAbandonHoldingFrame(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx

  EtwTraceEndPointerFrameCreation(0, *(_DWORD *)(a3 + 36), *(_DWORD *)(a3 + 32) - *(_DWORD *)(a3 + 36));
  return RIMReclaimHoldingFrame(v5, v4, a3);
}
