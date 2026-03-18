/*
 * XREFs of EtwpEnqueueOverflowBuffer @ 0x1400F2E7C
 * Callers:
 *     EtwpSwitchBuffer @ 0x14009D01C (EtwpSwitchBuffer.c)
 *     EtwpDequeueFreeBuffer @ 0x14009D240 (EtwpDequeueFreeBuffer.c)
 * Callees:
 *     EtwpUnlockBufferList @ 0x14009D414 (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x14009D480 (EtwpLockBufferList.c)
 */

void __fastcall EtwpEnqueueOverflowBuffer(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 44), 0, 1);
  EtwpLockBufferList(a1, &v4);
  **(_QWORD **)(a1 + 96) = a2 + 32;
  *(_QWORD *)(a1 + 96) = a2 + 32;
  EtwpUnlockBufferList(a1, &v4);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 244));
}
