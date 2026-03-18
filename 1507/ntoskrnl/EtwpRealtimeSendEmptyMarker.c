/*
 * XREFs of EtwpRealtimeSendEmptyMarker @ 0x1404ACD84
 * Callers:
 *     EtwpFlushActiveBuffers @ 0x1404A1BD0 (EtwpFlushActiveBuffers.c)
 * Callees:
 *     EtwpResetBufferHeader @ 0x1400754B4 (EtwpResetBufferHeader.c)
 *     EtwpInitializeBufferHeader @ 0x140075504 (EtwpInitializeBufferHeader.c)
 *     EtwpRealtimeDeliverBuffer @ 0x1404A224C (EtwpRealtimeDeliverBuffer.c)
 */

__int64 __fastcall EtwpRealtimeSendEmptyMarker(__int16 *a1)
{
  _DWORD v3[13]; // [rsp+20h] [rbp-58h] BYREF
  __int16 v4; // [rsp+54h] [rbp-24h]

  EtwpInitializeBufferHeader(a1, v3);
  v4 &= ~0x100u;
  EtwpResetBufferHeader((__int64)v3, 6);
  v3[11] = 3;
  v4 = 1;
  v3[12] = 72;
  return EtwpRealtimeDeliverBuffer((__int64)a1, (__int64)v3);
}
