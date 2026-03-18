/*
 * XREFs of ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1C0081088
 * Callers:
 *     xxxNotifyMonitorChanged @ 0x1C007E314 (xxxNotifyMonitorChanged.c)
 *     ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1C0080104 (-TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z.c)
 * Callees:
 *     _MonitorFromWindow @ 0x1C0082D50 (_MonitorFromWindow.c)
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

  v3 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 384LL);
  if ( v3 )
  {
    v4 = MonitorFromWindow(a1, 1LL);
    v5 = v4;
    if ( v4 )
    {
      *(_OWORD *)(v3 + 928) = *(_OWORD *)(v4 + 28);
      if ( a2 )
      {
        v6 = *(_DWORD *)(v3 + 944);
        v7 = *(_DWORD *)(v3 + 956) | 1;
        *(_DWORD *)(v3 + 956) = v7;
        if ( v6 != *(unsigned __int16 *)(v4 + 152) )
        {
          *(_DWORD *)(v3 + 952) = v6;
          *(_DWORD *)(v3 + 956) = v7 | 2;
        }
      }
      else
      {
        v8 = *(unsigned __int16 *)(v4 + 152);
        if ( *(_DWORD *)(v3 + 904) )
        {
          v9 = *(_DWORD *)(v3 + 944);
          if ( v9 != v8 )
          {
            *(_DWORD *)(v3 + 956) |= 4u;
            *(_DWORD *)(v3 + 952) = v9;
          }
        }
        else
        {
          *(_DWORD *)(v3 + 948) = v8;
        }
      }
      *(_DWORD *)(v3 + 944) = *(unsigned __int16 *)(v5 + 152);
    }
    else
    {
      *(_DWORD *)(v3 + 944) = 0;
      *(_DWORD *)(v3 + 928) = 0;
      *(_DWORD *)(v3 + 932) = 0;
      *(_DWORD *)(v3 + 936) = 0;
      *(_DWORD *)(v3 + 940) = 0;
    }
  }
}
