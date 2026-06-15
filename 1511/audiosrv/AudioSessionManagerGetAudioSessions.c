/*
 * XREFs of AudioSessionManagerGetAudioSessions @ 0x18007BB30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 */

__int64 __fastcall AudioSessionManagerGetAudioSessions(__int64 **a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // r14
  int v8; // ebx
  TraceLoggingHProvider v9; // rcx

  v4 = *a1;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x53u, (__int64)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids, *v4);
  }
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v4[1] + 104LL))(v4[1]) )
    v8 = -2147024891;
  else
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)*v4 + 136LL))(
           *v4,
           v4[1],
           a2,
           a3,
           a4);
  v9 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x54u, (__int64)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids, v8);
    v9 = WPP_GLOBAL_Control;
  }
  if ( v8 < 0
    && v9 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)v9 + 28) & 0x40) != 0
    && *((_BYTE *)v9 + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)v9 + 2), 0x55u, (__int64)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids, v8);
  }
  return (unsigned int)v8;
}
