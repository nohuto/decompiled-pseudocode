/*
 * XREFs of RIMReclaimHoldingFrame @ 0x1C00C97A8
 * Callers:
 *     RIMFindAndRemoveHoldingFrame @ 0x1C007B7DC (RIMFindAndRemoveHoldingFrame.c)
 *     RIMAbandonHoldingFrame @ 0x1C00C93D4 (RIMAbandonHoldingFrame.c)
 *     RIMGetCompleteFrameAndReleaseHoldingFrame @ 0x1C00C9488 (RIMGetCompleteFrameAndReleaseHoldingFrame.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     sub_1C00C8FC8 @ 0x1C00C8FC8 (sub_1C00C8FC8.c)
 */

__int64 __fastcall RIMReclaimHoldingFrame(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a3 + 64) )
    Win32FreePool();
  result = sub_1C00C8FC8(*(_QWORD *)(a3 + 48));
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
