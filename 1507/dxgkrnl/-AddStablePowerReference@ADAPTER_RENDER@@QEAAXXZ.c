/*
 * XREFs of ?AddStablePowerReference@ADAPTER_RENDER@@QEAAXXZ @ 0x1C011F804
 * Callers:
 *     ?EnableStablePowerState@DXGADAPTER@@QEAAXXZ @ 0x1C01261CC (-EnableStablePowerState@DXGADAPTER@@QEAAXXZ.c)
 *     DxgkSetStablePowerState @ 0x1C014A4E0 (DxgkSetStablePowerState.c)
 * Callees:
 *     ?DdiSetStablePowerState@ADAPTER_RENDER@@QEAAXH@Z @ 0x1C01229E8 (-DdiSetStablePowerState@ADAPTER_RENDER@@QEAAXH@Z.c)
 */

void __fastcall ADAPTER_RENDER::AddStablePowerReference(ADAPTER_RENDER *this)
{
  if ( !*((_DWORD *)this + 260) && *(_QWORD *)(*((_QWORD *)this + 2) + 864LL) )
    ADAPTER_RENDER::DdiSetStablePowerState(this, 1);
  ++*((_DWORD *)this + 260);
}
