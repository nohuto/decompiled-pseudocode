/*
 * XREFs of ?GetClientReleaseEvent@CAudioDeviceGraph@@UEAAJIPEA_K0@Z @ 0x14002F1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetClientReleaseEvent(
        CAudioDeviceGraph *this,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  int v5; // ebx

  if ( !a3 || !a4 )
  {
    v5 = -2147467261;
    goto LABEL_3;
  }
  if ( !*((_QWORD *)this + 15) )
  {
    v5 = -2005139437;
    goto LABEL_3;
  }
  *a3 = 0LL;
  *a4 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, unsigned __int64 *))(**((_QWORD **)this + 15) + 72LL))(
         *((_QWORD *)this + 15),
         a3,
         a4);
  if ( v5 < 0 )
  {
LABEL_3:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x27u,
        (__int64)&WPP_58530928d9fd374fdb29ea4f3e815982_Traceguids,
        v5);
    }
    AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::GetClientReleaseEvent", 798, v5);
    return (unsigned int)v5;
  }
  if ( *a3
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x26u, (__int64)&WPP_58530928d9fd374fdb29ea4f3e815982_Traceguids, v5);
  }
  return (unsigned int)v5;
}
