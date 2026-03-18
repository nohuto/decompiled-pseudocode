/*
 * XREFs of ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1C00AEEB4
 * Callers:
 *     ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1C0099858 (-TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z.c)
 *     xxxNotifyMonitorChanged @ 0x1C00AEA64 (xxxNotifyMonitorChanged.c)
 * Callees:
 *     _MonitorFromWindow @ 0x1C00AFFA0 (_MonitorFromWindow.c)
 */

void __fastcall TraceLoggingProcessMonitorInfoUpdateHelper(struct tagWND *const a1, int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // r8d
  int v7; // edx
  int v8; // eax
  int v9; // edx

  v3 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 376LL);
  if ( v3 )
  {
    v4 = MonitorFromWindow(a1, 1LL);
    v5 = v4;
    if ( v4 )
    {
      *(_OWORD *)(v3 + 904) = *(_OWORD *)(v4 + 28);
      if ( a2 )
      {
        v6 = *(_DWORD *)(v3 + 920);
        v7 = *(_DWORD *)(v3 + 932) | 1;
        *(_DWORD *)(v3 + 932) = v7;
        if ( v6 != *(unsigned __int16 *)(v4 + 154) )
        {
          *(_DWORD *)(v3 + 928) = v6;
          *(_DWORD *)(v3 + 932) = v7 | 2;
        }
      }
      else
      {
        v8 = *(unsigned __int16 *)(v4 + 154);
        if ( *(_DWORD *)(v3 + 880) )
        {
          v9 = *(_DWORD *)(v3 + 920);
          if ( v9 != v8 )
          {
            *(_DWORD *)(v3 + 932) |= 4u;
            *(_DWORD *)(v3 + 928) = v9;
          }
        }
        else
        {
          *(_DWORD *)(v3 + 924) = v8;
        }
      }
      *(_DWORD *)(v3 + 920) = *(unsigned __int16 *)(v5 + 154);
    }
    else
    {
      *(_DWORD *)(v3 + 920) = 0;
      *(_DWORD *)(v3 + 904) = 0;
      *(_DWORD *)(v3 + 908) = 0;
      *(_DWORD *)(v3 + 912) = 0;
      *(_DWORD *)(v3 + 916) = 0;
    }
  }
}
