/*
 * XREFs of ?ReleaseInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXI_K@Z @ 0x140016960
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     memset_0 @ 0x1400190F4 (memset_0.c)
 *     WPP_SF_s @ 0x14003AC48 (WPP_SF_s.c)
 *     ?AEWMILOG_SECURITY@@YAXKPEAX@Z @ 0x14003E2B0 (-AEWMILOG_SECURITY@@YAXKPEAX@Z.c)
 */

void __fastcall CCrossProcessServerInputEndpoint::ReleaseInputDataPointer(
        CCrossProcessServerInputEndpoint *this,
        unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  void *v7; // rcx
  struct _EVENT_TRACE_HEADER EventTrace; // [rsp+20h] [rbp-79h] BYREF
  char *v9; // [rsp+50h] [rbp-49h]
  int v10; // [rsp+58h] [rbp-41h]
  __int64 v11; // [rsp+60h] [rbp-39h]
  __int64 v12; // [rsp+68h] [rbp-31h]
  __int64 v13; // [rsp+70h] [rbp-29h]
  struct _EVENT_TRACE_HEADER v14; // [rsp+80h] [rbp-19h] BYREF
  char *v15; // [rsp+B0h] [rbp+17h]
  int v16; // [rsp+B8h] [rbp+1Fh]
  __int64 v17; // [rsp+C0h] [rbp+27h]
  __int64 v18; // [rsp+C8h] [rbp+2Fh]
  __int64 v19; // [rsp+D0h] [rbp+37h]

  v3 = a2;
  if ( g_u32AEWMILogLevel >= 2 )
  {
    memset_0(&EventTrace, 0, 0x40uLL);
    EventTrace.Size = 88;
    EventTrace.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_DATA;
    EventTrace.UserTime = 0x20000;
    EventTrace.Class.Type = 7;
    v9 = (char *)this - 440;
    v10 = 0;
    v11 = v3;
    v12 = 0LL;
    v13 = 0LL;
    TraceEvent(g_hAEWMITraceHandle, &EventTrace);
  }
  if ( (_DWORD)v3 && (*(_DWORD *)(*((_QWORD *)this - 47) + 156LL) & 1) != 0 )
  {
    v4 = *((_QWORD *)this - 47);
    v5 = *(_QWORD *)(v4 + 16);
    if ( v5 < 0 )
    {
      AEWMILOG_SECURITY(v5, (char *)this - 440);
      if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x80000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) )
      {
        WPP_SF_s(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
          38LL,
          &WPP_69a2f442a7c70e07fee70227292c43c2_Traceguids,
          "Security failure - memory overwrite detected - Invalid offset.");
      }
      _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)this - 47) + 156LL), 0xFFFFFFFE);
      if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x80000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
      {
        WPP_SF_D(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
          37LL,
          &WPP_69a2f442a7c70e07fee70227292c43c2_Traceguids,
          0LL);
      }
    }
    else if ( *((_DWORD *)this + 4) <= 1u )
    {
      v6 = (unsigned int)(v3 * *((_DWORD *)this - 90) - *((_DWORD *)this + 20)) + v5;
      if ( v6 > *(_QWORD *)(v4 + 8) )
        v6 = *(_QWORD *)(v4 + 8);
      *(_QWORD *)(v4 + 16) = v6;
    }
  }
  if ( g_u32AEWMILogLevel >= 2 )
  {
    memset_0(&v14, 0, 0x40uLL);
    v15 = (char *)this - 440;
    v18 = *((int *)this + 4);
    v14.Size = 88;
    v14.UserTime = 0x20000;
    v14.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_DATA;
    v14.Class.Type = 8;
    v16 = 0;
    v17 = v3;
    v19 = 0LL;
    TraceEvent(g_hAEWMITraceHandle, &v14);
  }
  v7 = (void *)*((_QWORD *)this - 40);
  *((_DWORD *)this + 4) = 3;
  SetEvent(v7);
}
