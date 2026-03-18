/*
 * XREFs of RIMStoreRawDataInPointerDeviceFrame @ 0x1C00D9E08
 * Callers:
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C00DB4B0 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C00DC190 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C00DC28C (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     rimFindHoldingFrame @ 0x1C000D380 (rimFindHoldingFrame.c)
 *     rimStoreRawDataBlock @ 0x1C00DA560 (rimStoreRawDataBlock.c)
 */

_QWORD *__fastcall RIMStoreRawDataInPointerDeviceFrame(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  _QWORD *result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r11

  *a5 = 0;
  result = rimFindHoldingFrame(a1, a2);
  if ( result )
    return (_QWORD *)rimStoreRawDataBlock(v7, v6, v8);
  return result;
}
