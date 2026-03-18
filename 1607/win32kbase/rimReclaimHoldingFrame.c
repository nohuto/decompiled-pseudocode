/*
 * XREFs of rimReclaimHoldingFrame @ 0x1C00DA25C
 * Callers:
 *     RIMRemoveHoldingFrame @ 0x1C0009D38 (RIMRemoveHoldingFrame.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C000F448 (RIMAbandonPointerDeviceFrame.c)
 *     rimFindAndReclaimHoldingFrame @ 0x1C00DA008 (rimFindAndReclaimHoldingFrame.c)
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C00DA060 (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     rimFreePointerRawDataListWorker @ 0x1C00DA024 (rimFreePointerRawDataListWorker.c)
 */

__int64 __fastcall rimReclaimHoldingFrame(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a3 + 72) )
  {
    Win32FreePool();
    *(_QWORD *)(a3 + 72) = 0LL;
  }
  result = rimFreePointerRawDataListWorker(*(_QWORD *)(a3 + 56));
  *(_DWORD *)(a3 + 16) = 0;
  *(_QWORD *)(a3 + 32) = 0LL;
  *(_DWORD *)(a3 + 40) = 0;
  *(_DWORD *)(a3 + 44) = 0;
  *(_DWORD *)(a3 + 48) = 0;
  *(_QWORD *)(a3 + 56) = 0LL;
  *(_QWORD *)(a3 + 64) = 0LL;
  *(_QWORD *)(a3 + 80) = 0LL;
  return result;
}
