/*
 * XREFs of VidSchiEmptyAllHwQueues @ 0x1C00619FC
 * Callers:
 *     VidSchiSuspend @ 0x1C006186C (VidSchiSuspend.c)
 * Callees:
 *     VidSchIsTDRPending @ 0x1C000B6A0 (VidSchIsTDRPending.c)
 *     VidSchiWaitForEmptyHwQueue @ 0x1C0061A5C (VidSchiWaitForEmptyHwQueue.c)
 *     VidSchiPreemptEngineNodes @ 0x1C0061B00 (VidSchiPreemptEngineNodes.c)
 */

char __fastcall VidSchiEmptyAllHwQueues(__int64 a1)
{
  char result; // al
  unsigned int i; // edi
  char v4; // [rsp+38h] [rbp+10h] BYREF

  result = VidSchIsTDRPending(a1);
  if ( !result )
  {
    if ( (*(_DWORD *)(a1 + 2096) & 1) == 0 )
      return VidSchiWaitForEmptyHwQueue(a1);
    for ( i = 0; i < *(_DWORD *)(a1 + 52); ++i )
      VidSchiPreemptEngineNodes(a1, i, -1LL, &v4);
    result = VidSchIsTDRPending(a1);
    if ( !result )
      return VidSchiWaitForEmptyHwQueue(a1);
  }
  return result;
}
