/*
 * XREFs of ?RenderAndCommit@CMagnifierControl@@AEAAJXZ @ 0x18007C49C
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18007BDE8 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMagnifierControl::RenderAndCommit(CMagnifierControl *this)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2));
  v2 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v1, 0x23Du);
  return v2;
}
