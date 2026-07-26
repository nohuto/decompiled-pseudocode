/*
 * XREFs of ndisReceiveQueueingRestart @ 0x1C004F790
 * Callers:
 *     ndisPnPNotifyAllTransports @ 0x1C00E90B8 (ndisPnPNotifyAllTransports.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisReceiveQueueingRestart(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  *(_BYTE *)(a1 + 3268) = 0;
  if ( HIBYTE(WPP_MAIN_CB.DeviceQueue.Type) == 1
    && *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1) != -1
    && *(_DWORD *)(a1 + 3264)
    && !*(_DWORD *)(a1 + 464) )
  {
    *(_DWORD *)(a1 + 3208) = 1;
  }
  return result;
}
