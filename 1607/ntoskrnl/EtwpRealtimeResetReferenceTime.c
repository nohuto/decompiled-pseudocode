/*
 * XREFs of EtwpRealtimeResetReferenceTime @ 0x1406A99B8
 * Callers:
 *     EtwpRealtimeFlushSavedBuffers @ 0x14049030C (EtwpRealtimeFlushSavedBuffers.c)
 *     EtwpRealtimeCreateLogfile @ 0x140490628 (EtwpRealtimeCreateLogfile.c)
 * Callees:
 *     EtwpRealtimeUpdateReferenceTime @ 0x14057EACC (EtwpRealtimeUpdateReferenceTime.c)
 */

__int64 __fastcall EtwpRealtimeResetReferenceTime(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  *(_OWORD *)(a1 + 432) = *(_OWORD *)(a1 + 304);
  if ( *(_DWORD *)(a1 + 344) )
    return EtwpRealtimeUpdateReferenceTime(a1, (__int128 *)(a1 + 432));
  return result;
}
