/*
 * XREFs of VidSchiEmptyAllHwQueues @ 0x1C0076880
 * Callers:
 *     VidSchiSuspend @ 0x1C00777C0 (VidSchiSuspend.c)
 * Callees:
 *     VidSchIsTDRPending @ 0x1C00051E0 (VidSchIsTDRPending.c)
 *     VidSchiPreemptEngineNodes @ 0x1C0076A74 (VidSchiPreemptEngineNodes.c)
 *     VidSchiWaitForEmptyHwQueue @ 0x1C00779E4 (VidSchiWaitForEmptyHwQueue.c)
 */

char __fastcall VidSchiEmptyAllHwQueues(__int64 a1)
{
  char result; // al
  unsigned int i; // edi
  char v4; // [rsp+38h] [rbp+10h] BYREF

  result = VidSchIsTDRPending(a1);
  if ( !result )
  {
    if ( (*(_DWORD *)(a1 + 2144) & 1) == 0 )
      return VidSchiWaitForEmptyHwQueue((struct _VIDSCH_GLOBAL *)a1);
    for ( i = 0; i < *(_DWORD *)(a1 + 52); ++i )
      VidSchiPreemptEngineNodes(a1, i, -1LL, &v4);
    result = VidSchIsTDRPending(a1);
    if ( !result )
      return VidSchiWaitForEmptyHwQueue((struct _VIDSCH_GLOBAL *)a1);
  }
  return result;
}
