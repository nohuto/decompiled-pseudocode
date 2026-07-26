/*
 * XREFs of ndisReceiveQueueingPaused @ 0x1C004F774
 * Callers:
 *     ndisPnPNotifyAllTransports @ 0x1C00E90B8 (ndisPnPNotifyAllTransports.c)
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
