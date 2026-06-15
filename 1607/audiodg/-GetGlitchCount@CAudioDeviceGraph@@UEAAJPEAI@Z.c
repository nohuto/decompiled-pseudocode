/*
 * XREFs of ?GetGlitchCount@CAudioDeviceGraph@@UEAAJPEAI@Z @ 0x14002F8B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetGlitchCount(CAudioDeviceGraph *this, unsigned int *a2)
{
  __int64 v4; // rcx
  int v5; // ecx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *((_QWORD *)this + 33);
  if ( v4 )
  {
    v7[0] = &g_EndpointStatistics;
    v7[1] = (char *)this + 336;
    v5 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v4 + 24LL))(v4, 2LL, v7);
  }
  else
  {
    v5 = -2005139437;
  }
  if ( v5 >= 0 )
    *a2 = *((_DWORD *)this + 84);
  return (unsigned int)v5;
}
