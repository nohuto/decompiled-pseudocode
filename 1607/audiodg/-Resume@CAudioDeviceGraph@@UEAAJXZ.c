/*
 * XREFs of ?Resume@CAudioDeviceGraph@@UEAAJXZ @ 0x14002FF90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x14002696C (WPP_SF_.c)
 */

__int64 __fastcall CAudioDeviceGraph::Resume(CAudioDeviceGraph *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  unsigned int v3; // ebx

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 232);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 15) + 56LL))(*((_QWORD *)this + 15));
  LeaveCriticalSection(v1);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x34u, (__int64)&WPP_58530928d9fd374fdb29ea4f3e815982_Traceguids);
  }
  return v3;
}
