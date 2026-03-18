/*
 * XREFs of VidSchiEmptyAllHwQueues @ 0x1C0068AE8
 * Callers:
 *     VidSchiSuspend @ 0x1C00689A8 (VidSchiSuspend.c)
 * Callees:
 *     VidSchIsTDRPending @ 0x1C000A130 (VidSchIsTDRPending.c)
 *     VidSchiWaitForEmptyHwQueue @ 0x1C0068B54 (VidSchiWaitForEmptyHwQueue.c)
 *     VidSchiPreemptEngineNodes @ 0x1C0068BF8 (VidSchiPreemptEngineNodes.c)
 */

char __fastcall VidSchiEmptyAllHwQueues(__int64 a1)
{
  char result; // al
  unsigned int v3; // edi
  char v4; // [rsp+38h] [rbp+10h] BYREF

  result = VidSchIsTDRPending(a1);
  if ( result )
    return result;
  if ( (*(_DWORD *)(a1 + 2136) & 1) == 0 )
    return VidSchiWaitForEmptyHwQueue(a1);
  v3 = 0;
  if ( !*(_DWORD *)(a1 + 56) )
  {
LABEL_6:
    result = VidSchIsTDRPending(a1);
    if ( result )
      return result;
    return VidSchiWaitForEmptyHwQueue(a1);
  }
  while ( 1 )
  {
    VidSchiPreemptEngineNodes(a1, v3, -1LL, &v4);
    result = VidSchIsTDRPending(a1);
    if ( result )
      return result;
    if ( ++v3 >= *(_DWORD *)(a1 + 56) )
      goto LABEL_6;
  }
}
