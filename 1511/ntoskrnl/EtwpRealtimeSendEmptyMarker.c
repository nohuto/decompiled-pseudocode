/*
 * XREFs of EtwpRealtimeSendEmptyMarker @ 0x1404CAC9C
 * Callers:
 *     EtwpFlushActiveBuffers @ 0x140471024 (EtwpFlushActiveBuffers.c)
 * Callees:
 *     EtwpResetBufferHeader @ 0x1400F4998 (EtwpResetBufferHeader.c)
 *     EtwpInitializeBufferHeader @ 0x1400F49B0 (EtwpInitializeBufferHeader.c)
 *     EtwpRealtimeDeliverBuffer @ 0x1404CAE80 (EtwpRealtimeDeliverBuffer.c)
 */

__int64 __fastcall EtwpRealtimeSendEmptyMarker(unsigned __int16 *a1)
{
  __int16 v2; // dx
  _DWORD v4[13]; // [rsp+20h] [rbp-58h] BYREF
  __int16 v5; // [rsp+54h] [rbp-24h]

  EtwpInitializeBufferHeader(a1, v4);
  EtwpResetBufferHeader((__int64)v4, 6);
  v4[11] = 3;
  v5 = v2 - 5;
  v4[12] = 72;
  return EtwpRealtimeDeliverBuffer(a1, v4);
}
