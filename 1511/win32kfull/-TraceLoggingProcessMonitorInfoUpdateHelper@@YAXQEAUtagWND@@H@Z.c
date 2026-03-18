/*
 * XREFs of ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1C0091A7C
 * Callers:
 *     ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1C008F76C (-TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z.c)
 *     xxxNotifyMonitorChanged @ 0x1C0091974 (xxxNotifyMonitorChanged.c)
 * Callees:
 *     _MonitorFromWindow @ 0x1C0077FC0 (_MonitorFromWindow.c)
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
    v4 = MonitorFromWindow((__int64)a1, 1u);
    v5 = v4;
    if ( v4 )
    {
      *(_OWORD *)(v3 + 912) = *(_OWORD *)(v4 + 28);
      if ( a2 )
      {
        v6 = *(_DWORD *)(v3 + 928);
        v7 = *(_DWORD *)(v3 + 940) | 1;
        *(_DWORD *)(v3 + 940) = v7;
        if ( v6 != *(unsigned __int16 *)(v4 + 152) )
        {
          *(_DWORD *)(v3 + 936) = v6;
          *(_DWORD *)(v3 + 940) = v7 | 2;
        }
      }
      else
      {
        v8 = *(unsigned __int16 *)(v4 + 152);
        if ( *(_DWORD *)(v3 + 888) )
        {
          v9 = *(_DWORD *)(v3 + 928);
          if ( v9 != v8 )
          {
            *(_DWORD *)(v3 + 940) |= 4u;
            *(_DWORD *)(v3 + 936) = v9;
          }
        }
        else
        {
          *(_DWORD *)(v3 + 932) = v8;
        }
      }
      *(_DWORD *)(v3 + 928) = *(unsigned __int16 *)(v5 + 152);
    }
    else
    {
      *(_DWORD *)(v3 + 928) = 0;
      *(_DWORD *)(v3 + 912) = 0;
      *(_DWORD *)(v3 + 916) = 0;
      *(_DWORD *)(v3 + 920) = 0;
      *(_DWORD *)(v3 + 924) = 0;
    }
  }
}
