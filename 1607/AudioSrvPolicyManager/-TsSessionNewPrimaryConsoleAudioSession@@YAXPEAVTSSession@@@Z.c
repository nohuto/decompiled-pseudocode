/*
 * XREFs of ?TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x18001BAAC
 * Callers:
 *     ?TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x18001BBEC (-TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x18001CE08 (-TsSessionIdConnect@@YAXK@Z.c)
 *     ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x18001DE90 (-TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x18000537C (WPP_SF_.c)
 *     WPP_SF_dd @ 0x180005574 (WPP_SF_dd.c)
 *     ?QueueSessionMuteUnmute@@YAJKK@Z @ 0x18001BA2C (-QueueSessionMuteUnmute@@YAJKK@Z.c)
 *     ?lock@critical_section@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18001F788 (-lock@critical_section@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TsSessionNewPrimaryConsoleAudioSession(struct TSSession *a1)
{
  int *v2; // rbx
  _QWORD *v3; // rax
  _QWORD *v4; // rcx
  int *v5; // rcx
  int v6; // esi
  int v7; // [rsp+20h] [rbp-28h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0LL;
  wil::critical_section::lock(a1, &lpCriticalSection);
  if ( *(_DWORD *)a1 )
  {
    v3 = lpMem;
    while ( 1 )
    {
      v4 = v3;
      if ( !v3 )
        break;
      v3 = (_QWORD *)*v3;
      v5 = (int *)v4[2];
      if ( *v5 && v5[90] )
      {
        v2 = v5;
        break;
      }
    }
    if ( v2 != (int *)a1 )
    {
      v6 = -2;
      if ( v2 )
      {
        v6 = *v2;
        v2[90] = 0;
        if ( g_MaxSessions <= 1 )
          v2[13] = 1;
      }
      *((_DWORD *)a1 + 90) = 1;
      *((_DWORD *)a1 + 13) = 0;
      if ( g_MaxSessions <= 1 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          v7 = *(_DWORD *)a1;
          WPP_SF_dd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xFu, &WPP_e3e7735b747b3b21be9d3d9ebc03ddc3_Traceguids, v6, v7);
        }
        if ( (int)QueueSessionMuteUnmute(v6, *(_DWORD *)a1) < 0
          && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x10u, &WPP_e3e7735b747b3b21be9d3d9ebc03ddc3_Traceguids);
        }
      }
    }
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
}
