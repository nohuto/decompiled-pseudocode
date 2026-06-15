/*
 * XREFs of ?Pause@CAudioDeviceGraph@@UEAAJXZ @ 0x1400068D0
 * Callers:
 *     ?SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z @ 0x140005348 (-SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z.c)
 * Callees:
 *     ?ResetAPOs@CPipeInstance@@QEBAXXZ @ 0x1400079F0 (-ResetAPOs@CPipeInstance@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x14002696C (WPP_SF_.c)
 */

__int64 __fastcall CAudioDeviceGraph::Pause(CAudioDeviceGraph *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rsi
  int v3; // edi

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 232);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 15) + 48LL))(*((_QWORD *)this + 15));
  if ( v3 >= 0 )
    CPipeInstance::ResetAPOs(*((CPipeInstance **)this + 16));
  LeaveCriticalSection(v1);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 51LL, &WPP_58530928d9fd374fdb29ea4f3e815982_Traceguids);
  }
  return (unsigned int)v3;
}
