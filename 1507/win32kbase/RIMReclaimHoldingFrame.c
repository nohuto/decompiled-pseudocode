/*
 * XREFs of RIMReclaimHoldingFrame @ 0x1C00C88A8
 * Callers:
 *     RIMFindAndRemoveHoldingFrame @ 0x1C0078018 (RIMFindAndRemoveHoldingFrame.c)
 *     RIMAbandonHoldingFrame @ 0x1C00C84D4 (RIMAbandonHoldingFrame.c)
 *     RIMGetCompleteFrameAndReleaseHoldingFrame @ 0x1C00C8588 (RIMGetCompleteFrameAndReleaseHoldingFrame.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     rimFreePointerRawDataListWorker @ 0x1C00C80C8 (rimFreePointerRawDataListWorker.c)
 */

__int64 __fastcall RIMReclaimHoldingFrame(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a3 + 64) )
    Win32FreePool();
  result = rimFreePointerRawDataListWorker(*(_QWORD *)(a3 + 48));
  *(_QWORD *)(a3 + 24) = 0LL;
  *(_DWORD *)(a3 + 32) = 0;
  *(_DWORD *)(a3 + 36) = 0;
  *(_DWORD *)(a3 + 40) = 0;
  *(_QWORD *)(a3 + 48) = 0LL;
  *(_QWORD *)(a3 + 56) = 0LL;
  *(_QWORD *)(a3 + 64) = 0LL;
  *(_QWORD *)(a3 + 72) = 0LL;
  return result;
}
