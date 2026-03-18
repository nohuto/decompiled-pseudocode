/*
 * XREFs of VidSchiResetEngines @ 0x1C0076C98
 * Callers:
 *     VidSchiCheckHwProgress @ 0x1C0032B80 (VidSchiCheckHwProgress.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0079BB0 (VidSchWaitForCompletionEvent.c)
 * Callees:
 *     VidSchIsTDRPending @ 0x1C00051E0 (VidSchIsTDRPending.c)
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0005B44 (VidSchiSchedulerNodeToDriverEngine.c)
 *     VidSchiDriverNodeEngineToSchedulerNode @ 0x1C0005B54 (VidSchiDriverNodeEngineToSchedulerNode.c)
 *     VidSchiCompletePreemption @ 0x1C0015EC4 (VidSchiCompletePreemption.c)
 *     VidSchiResetEngine @ 0x1C0019770 (VidSchiResetEngine.c)
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
  int v13; // esi
  unsigned int v14; // eax

  if ( TdrAllowToDebugEngineTimeout((struct _VIDSCH_NODE *)a1) )
    return 1;
  v5 = *(_QWORD *)(a1 + 24);
  v6 = a2;
  v7 = 1;
  v8 = VidSchiSchedulerNodeToDriverEngine(v5, *(unsigned __int16 *)(a1 + 4));
  *(_QWORD *)(v5 + 2496) = a1;
  v9 = 0;
  v10 = 0LL;
  for ( i = v8; a2; a2 >>= 1 )
  {
    if ( (a2 & 1) != 0 )
    {
      v12 = VidSchiDriverNodeEngineToSchedulerNode(v5, v9, i);
      if ( !VidSchiResetEngine(*(_QWORD *)(v5 + 8LL * v12 + 368), v6) )
      {
        v7 = 0;
        break;
      }
      _bittestandset64((__int64 *)&v10, v9);
    }
    ++v9;
  }
  *(_QWORD *)(v5 + 2496) = 0LL;
  if ( v7 )
  {
    v13 = 0;
    if ( v10 )
    {
      while ( 1 )
      {
        if ( (v10 & 1) != 0 )
        {
          v14 = VidSchiDriverNodeEngineToSchedulerNode(v5, v13, i);
          VidSchiCompletePreemption(*(_QWORD *)(v5 + 8LL * v14 + 368));
          if ( VidSchIsTDRPending(v5) )
            break;
        }
        ++v13;
        v10 >>= 1;
        if ( !v10 )
          return v7;
      }
      return 0;
    }
  }
  return v7;
}
