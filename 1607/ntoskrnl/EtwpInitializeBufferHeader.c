/*
 * XREFs of EtwpInitializeBufferHeader @ 0x140087134
 * Callers:
 *     EtwpAllocateFreeBuffers @ 0x140086F48 (EtwpAllocateFreeBuffers.c)
 *     EtwpRealtimeSendEmptyMarker @ 0x140491D60 (EtwpRealtimeSendEmptyMarker.c)
 *     EtwpInitializeProviderInfoBuffer @ 0x140493FEC (EtwpInitializeProviderInfoBuffer.c)
 *     EtwpUpdateFileHeader @ 0x140495264 (EtwpUpdateFileHeader.c)
 *     EtwpRealtimeUpdateReferenceTime @ 0x14057EF78 (EtwpRealtimeUpdateReferenceTime.c)
 *     EtwpPreserveLogger @ 0x1406A9FC4 (EtwpPreserveLogger.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall EtwpInitializeBufferHeader(__int16 *a1, _DWORD *a2)
{
  __int16 v4; // ax
  __int64 result; // rax

  memset(a2, 0, 0x48uLL);
  a2[2] = 72;
  a2[12] = a2[2];
  *a2 = *((_DWORD *)a1 + 1);
  v4 = *a1;
  *((_WORD *)a2 + 21) = *a1;
  if ( !v4 )
    *((_WORD *)a2 + 21) = -1;
  result = 256LL;
  *((_WORD *)a2 + 26) |= 0x100u;
  return result;
}
