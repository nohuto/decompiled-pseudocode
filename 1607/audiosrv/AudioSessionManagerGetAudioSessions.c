/*
 * XREFs of AudioSessionManagerGetAudioSessions @ 0x180063330
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 */

__int64 __fastcall AudioSessionManagerGetAudioSessions(__int64 **a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rbx
  int v8; // ebx

  v4 = *a1;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x45u, (__int64)&WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids, *v4);
  }
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v4[1] + 112LL))(v4[1]) )
    v8 = -2147024891;
  else
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)*v4 + 136LL))(
           *v4,
           v4[1],
           a2,
           a3,
           a4);
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x46u, (__int64)&WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids, v8);
  }
  if ( v8 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionManagerGetAudioSessions", 2006, v8);
  return (unsigned int)v8;
}
