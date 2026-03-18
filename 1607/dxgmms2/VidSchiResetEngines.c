/*
 * XREFs of VidSchiResetEngines @ 0x1C00A01A0
 * Callers:
 *     VidSchWaitForCompletionEvent @ 0x1C0042284 (VidSchWaitForCompletionEvent.c)
 *     VidSchiCheckHwProgress @ 0x1C0043C50 (VidSchiCheckHwProgress.c)
 * Callees:
 *     VidSchIsTDRPending @ 0x1C000A130 (VidSchIsTDRPending.c)
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0010D48 (VidSchiSchedulerNodeToDriverEngine.c)
 *     VidSchiDriverNodeEngineToSchedulerNode @ 0x1C0011740 (VidSchiDriverNodeEngineToSchedulerNode.c)
 *     VidSchiCompletePreemption @ 0x1C0023E40 (VidSchiCompletePreemption.c)
 *     VidSchiResetEngine @ 0x1C0024B48 (VidSchiResetEngine.c)
 */

char __fastcall VidSchiResetEngines(__int64 a1, unsigned __int64 a2)
{
  __int64 v5; // rbp
  __int64 v6; // r12
  char v7; // di
  unsigned int v8; // eax
  unsigned int v9; // r14d
  unsigned __int64 v10; // rbx
  unsigned int i; // r15d
  unsigned int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // esi
  unsigned int v16; // eax

  if ( TdrAllowToDebugEngineTimeout((struct _VIDSCH_NODE *)a1) )
    return 1;
  if ( g_TdrConfig[0] == 1 )
    return 0;
  v5 = *(_QWORD *)(a1 + 24);
  v6 = a2;
  v7 = 1;
  v8 = VidSchiSchedulerNodeToDriverEngine(v5, *(unsigned __int16 *)(a1 + 4));
  *(_QWORD *)(v5 + 2816) = a1;
  v9 = 0;
  v10 = 0LL;
  for ( i = v8; a2; a2 >>= 1 )
  {
    if ( (a2 & 1) != 0 )
    {
      v12 = VidSchiDriverNodeEngineToSchedulerNode(v5, v9, i);
      if ( !VidSchiResetEngine(*(_QWORD *)(v5 + 8LL * v12 + 408), v6, v13, v14) )
      {
        v7 = 0;
        break;
      }
      _bittestandset64((__int64 *)&v10, v9);
    }
    ++v9;
  }
  *(_QWORD *)(v5 + 2816) = 0LL;
  if ( v7 )
  {
    v15 = 0;
    if ( v10 )
    {
      while ( 1 )
      {
        if ( (v10 & 1) != 0 )
        {
          v16 = VidSchiDriverNodeEngineToSchedulerNode(v5, v15, i);
          VidSchiCompletePreemption(*(_QWORD *)(v5 + 8LL * v16 + 408));
          if ( VidSchIsTDRPending(v5) )
            break;
        }
        ++v15;
        v10 >>= 1;
        if ( !v10 )
          return v7;
      }
      return 0;
    }
  }
  return v7;
}
