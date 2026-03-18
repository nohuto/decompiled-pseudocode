/*
 * XREFs of EtwpRealtimeUpdateReferenceTime @ 0x1405498AC
 * Callers:
 *     EtwpRealtimeCreateLogfile @ 0x14046A7C8 (EtwpRealtimeCreateLogfile.c)
 *     EtwpRealtimeResetReferenceTime @ 0x140667AFC (EtwpRealtimeResetReferenceTime.c)
 * Callees:
 *     EtwpResetBufferHeader @ 0x1400F4998 (EtwpResetBufferHeader.c)
 *     EtwpInitializeBufferHeader @ 0x1400F49B0 (EtwpInitializeBufferHeader.c)
 *     EtwpRealtimeDeliverBuffer @ 0x1404CAE80 (EtwpRealtimeDeliverBuffer.c)
 *     EtwpRealtimeSaveBuffer @ 0x1404E7AA4 (EtwpRealtimeSaveBuffer.c)
 */

__int64 __fastcall EtwpRealtimeUpdateReferenceTime(__int64 a1, __int128 *a2)
{
  bool v4; // zf
  __int128 v5; // xmm0
  unsigned int v6; // edx
  unsigned int v8[13]; // [rsp+20h] [rbp-58h] BYREF
  __int16 v9; // [rsp+54h] [rbp-24h]
  __int128 v10; // [rsp+58h] [rbp-20h]

  EtwpInitializeBufferHeader((unsigned __int16 *)a1, v8);
  EtwpResetBufferHeader((__int64)v8, 3);
  v4 = *(_DWORD *)(a1 + 440) == 0;
  v5 = *a2;
  v8[11] = v6;
  v8[12] = 72;
  v10 = v5;
  v9 = v6 - 2;
  if ( v4 )
    return EtwpRealtimeDeliverBuffer(a1, (__int64)v8);
  else
    return EtwpRealtimeSaveBuffer(a1, v8);
}
