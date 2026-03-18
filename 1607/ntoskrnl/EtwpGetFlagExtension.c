/*
 * XREFs of EtwpGetFlagExtension @ 0x140495624
 * Callers:
 *     EtwpStartLogger @ 0x14048EE94 (EtwpStartLogger.c)
 *     EtwpCheckForPoolTagFilterExtension @ 0x14049558C (EtwpCheckForPoolTagFilterExtension.c)
 *     EtwpCheckForStackTracingExtension @ 0x1404955EC (EtwpCheckForStackTracingExtension.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x140495790 (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpUpdatePerProcessTracing @ 0x14069FEB4 (EtwpUpdatePerProcessTracing.c)
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
