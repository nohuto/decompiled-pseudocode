/*
 * XREFs of ?SetLoopbackConstriction@CPipeInstance@@QEAAJW4EAudioConstriction@@@Z @ 0x14002E6E8
 * Callers:
 *     ?UpdateLoopbackConstrictionLevel@CAudioDeviceGraph@@QEAAJW4EAudioConstriction@@@Z @ 0x140030014 (-UpdateLoopbackConstrictionLevel@CAudioDeviceGraph@@QEAAJW4EAudioConstriction@@@Z.c)
 * Callees:
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPipeInstance::SetLoopbackConstriction(CPipeInstance *this, __int64 a2)
{
  int v2; // ebx

  v2 = 0;
  if ( *((_DWORD *)this + 30) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 21) + 24LL))(*((_QWORD *)this + 21), a2);
    if ( v2 < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x3Fu,
          (__int64)&WPP_56fd94fe3e1e31dfec6880896bc643b2_Traceguids,
          v2);
      }
      AudDGTraceLoggingErrorHelper("CPipeInstance::SetLoopbackConstriction", 3724, v2);
    }
  }
  return (unsigned int)v2;
}
