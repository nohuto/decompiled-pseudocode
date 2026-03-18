/*
 * XREFs of EtwpGetFlagExtension @ 0x1404CABB4
 * Callers:
 *     EtwpCheckForStackTracingExtension @ 0x1404CAB7C (EtwpCheckForStackTracingExtension.c)
 *     EtwpStartLogger @ 0x1404CB420 (EtwpStartLogger.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x1405001FC (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpCheckForPoolTagFilterExtension @ 0x14050C618 (EtwpCheckForPoolTagFilterExtension.c)
 *     EtwpUpdatePerProcessTracing @ 0x14065FFB0 (EtwpUpdatePerProcessTracing.c)
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
