/*
 * XREFs of ndisReceiveQueueingPaused @ 0x1C004A4B8
 * Callers:
 *     ndisPnPNotifyAllTransports @ 0x1C00E6058 (ndisPnPNotifyAllTransports.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisReceiveQueueingPaused(__int64 a1)
{
  bool v1; // zf

  v1 = *(_DWORD *)(a1 + 3208) == 1;
  *(_BYTE *)(a1 + 3268) = 1;
  if ( v1 )
    *(_DWORD *)(a1 + 3208) = 2;
}
