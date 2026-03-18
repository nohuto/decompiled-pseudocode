/*
 * XREFs of EtwpGetFlagExtension @ 0x14054B1C0
 * Callers:
 *     EtwpStartLogger @ 0x1404D66D0 (EtwpStartLogger.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x14054A368 (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpCheckForPoolTagFilterExtension @ 0x14054B128 (EtwpCheckForPoolTagFilterExtension.c)
 *     EtwpCheckForStackTracingExtension @ 0x14054B188 (EtwpCheckForStackTracingExtension.c)
 *     EtwpUpdatePerProcessTracing @ 0x1406E28A8 (EtwpUpdatePerProcessTracing.c)
 * Callees:
 *     <none>
 */

unsigned __int16 *__fastcall EtwpGetFlagExtension(__int64 a1, __int16 a2)
{
  int v2; // eax
  __int64 v5; // rax
  unsigned __int16 v6; // dx
  unsigned __int16 *v7; // rcx

  v2 = *(_DWORD *)(a1 + 72);
  if ( v2 < 0 )
  {
    v5 = a1 + (unsigned __int16)v2;
    v6 = 0;
    v7 = (unsigned __int16 *)(v5 + 4);
    while ( v6 < *(_WORD *)(v5 + 2) )
    {
      if ( v7[1] == a2 )
        return v7;
      ++v6;
      v7 += 2 * *v7;
    }
  }
  return 0LL;
}
