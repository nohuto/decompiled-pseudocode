/*
 * XREFs of EtwpRealtimeUpdateReferenceTime @ 0x14057EACC
 * Callers:
 *     EtwpRealtimeCreateLogfile @ 0x140490628 (EtwpRealtimeCreateLogfile.c)
 *     EtwpRealtimeResetReferenceTime @ 0x1406A99B8 (EtwpRealtimeResetReferenceTime.c)
 * Callees:
 *     EtwpResetBufferHeader @ 0x1400857F4 (EtwpResetBufferHeader.c)
 *     EtwpInitializeBufferHeader @ 0x140085844 (EtwpInitializeBufferHeader.c)
 *     EtwpRealtimeDeliverBuffer @ 0x14049163C (EtwpRealtimeDeliverBuffer.c)
 *     EtwpRealtimeSaveBuffer @ 0x14052C690 (EtwpRealtimeSaveBuffer.c)
 */

__int64 __fastcall EtwpRealtimeUpdateReferenceTime(__int64 a1, __int128 *a2)
{
  bool v4; // zf
  __int128 v5; // xmm0
  unsigned int v7[13]; // [rsp+20h] [rbp-58h] BYREF
  __int16 v8; // [rsp+54h] [rbp-24h]
  __int128 v9; // [rsp+58h] [rbp-20h]

  EtwpInitializeBufferHeader((__int16 *)a1, v7);
  v8 &= ~0x100u;
  EtwpResetBufferHeader((__int64)v7, 3);
  v4 = *(_DWORD *)(a1 + 424) == 0;
  v5 = *a2;
  v7[11] = 3;
  v7[12] = 72;
  v9 = v5;
  v8 = 1;
  if ( v4 )
    return EtwpRealtimeDeliverBuffer(a1, (__int64)v7);
  else
    return EtwpRealtimeSaveBuffer(a1, v7);
}
