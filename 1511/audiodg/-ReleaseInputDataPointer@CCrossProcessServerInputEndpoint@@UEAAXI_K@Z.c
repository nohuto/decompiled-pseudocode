/*
 * XREFs of ?ReleaseInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXI_K@Z @ 0x140014060
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     WPP_SF_s @ 0x14003AC20 (WPP_SF_s.c)
 *     ?AEWMILOG_SECURITY@@YAXKPEAX@Z @ 0x14003E41C (-AEWMILOG_SECURITY@@YAXKPEAX@Z.c)
 */

void __fastcall CCrossProcessServerInputEndpoint::ReleaseInputDataPointer(
        CCrossProcessServerInputEndpoint *this,
        unsigned int a2)
{
  __int64 v2; // rdi
  unsigned int v4; // ecx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rdx
  void *v8; // rcx
  _EVENT_TRACE_HEADER EventTrace; // [rsp+20h] [rbp-79h] BYREF
  char *v10; // [rsp+50h] [rbp-49h]
  __int64 v11; // [rsp+58h] [rbp-41h]
  __int64 v12; // [rsp+60h] [rbp-39h]
  __int64 v13; // [rsp+68h] [rbp-31h]
  __int64 v14; // [rsp+70h] [rbp-29h]
  struct _EVENT_TRACE_HEADER v15; // [rsp+80h] [rbp-19h] BYREF
  char *v16; // [rsp+B0h] [rbp+17h]
  __int64 v17; // [rsp+B8h] [rbp+1Fh]
  __int64 v18; // [rsp+C0h] [rbp+27h]
  __int64 v19; // [rsp+C8h] [rbp+2Fh]
  __int64 v20; // [rsp+D0h] [rbp+37h]

  v2 = a2;
  if ( g_u32AEWMILogLevel >= 2 )
  {
    v12 = a2;
    EventTrace.ProcessorTime = 0x2000000000000LL;
    *(_QWORD *)&EventTrace.ThreadId = 0LL;
    EventTrace.TimeStamp.QuadPart = 0LL;
    v10 = (char *)this - 440;
    *(_QWORD *)&EventTrace.Size = 0x700000058LL;
    EventTrace.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_DATA;
    v11 = 0LL;
    v13 = 0LL;
    v14 = 0LL;
    TraceEvent(g_hAEWMITraceHandle, &EventTrace);
  }
  if ( (_DWORD)v2 )
  {
    v4 = *(_DWORD *)(*((_QWORD *)this - 47) + 156LL) & 1;
    if ( (_BYTE)v4 || (*((_BYTE *)this - 288) & 1) != 0 )
    {
      v5 = *((_QWORD *)this - 47);
      v6 = *(_QWORD *)(v5 + 16);
      if ( v6 >= 0 )
      {
        if ( *((_DWORD *)this + 4) <= 1u )
        {
          v7 = (unsigned int)(v2 * *((_DWORD *)this - 90) - *((_DWORD *)this + 20)) + v6;
          if ( v7 > *(_QWORD *)(v5 + 8) )
            v7 = *(_QWORD *)(v5 + 8);
          *(_QWORD *)(v5 + 16) = v7;
        }
      }
      else
      {
        AEWMILOG_SECURITY(v4, (char *)this - 440);
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) )
        {
          WPP_SF_s(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            38LL,
            &WPP_69a2f442a7c70e07fee70227292c43c2_Traceguids,
            "Security failure - memory overwrite detected - Invalid offset.");
        }
        _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)this - 47) + 156LL), 0xFFFFFFFE);
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 37LL, &WPP_69a2f442a7c70e07fee70227292c43c2_Traceguids, 0LL);
        }
      }
    }
  }
  if ( g_u32AEWMILogLevel >= 2 )
  {
    v18 = v2;
    memset(&v15, 0, 24);
    v15.ProcessorTime = 0LL;
    v17 = 0LL;
    v16 = (char *)this - 440;
    v19 = *((int *)this + 4);
    v15.Size = 88;
    v15.UserTime = 0x20000;
    v15.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_DATA;
    v15.Class.Type = 8;
    v20 = 0LL;
    TraceEvent(g_hAEWMITraceHandle, &v15);
  }
  v8 = (void *)*((_QWORD *)this - 40);
  *((_DWORD *)this + 4) = 3;
  SetEvent(v8);
}
