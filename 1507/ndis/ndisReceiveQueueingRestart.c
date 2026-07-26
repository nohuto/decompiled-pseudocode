/*
 * XREFs of ndisReceiveQueueingRestart @ 0x1C004A4D4
 * Callers:
 *     ndisPnPNotifyAllTransports @ 0x1C00E6058 (ndisPnPNotifyAllTransports.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisReceiveQueueingRestart(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  *(_BYTE *)(a1 + 3268) = 0;
  if ( byte_1C0084D41 == 1 && dword_1C0084D44 != -1 && *(_DWORD *)(a1 + 3264) && !*(_DWORD *)(a1 + 464) )
    *(_DWORD *)(a1 + 3208) = 1;
  return result;
}
