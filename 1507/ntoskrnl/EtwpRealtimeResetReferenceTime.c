/*
 * XREFs of EtwpRealtimeResetReferenceTime @ 0x1406EAE28
 * Callers:
 *     EtwpRealtimeCreateLogfile @ 0x1404A13F4 (EtwpRealtimeCreateLogfile.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x1404A264C (EtwpRealtimeFlushSavedBuffers.c)
 * Callees:
 *     EtwpRealtimeUpdateReferenceTime @ 0x1405C13D0 (EtwpRealtimeUpdateReferenceTime.c)
 */

__int64 __fastcall EtwpRealtimeResetReferenceTime(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  *(_OWORD *)(a1 + 448) = *(_OWORD *)(a1 + 320);
  if ( *(_DWORD *)(a1 + 360) )
    return EtwpRealtimeUpdateReferenceTime(a1, (__int128 *)(a1 + 448));
  return result;
}
