/*
 * XREFs of ?NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z @ 0x1C00657B8
 * Callers:
 *     ?DisconnectInterruptNP@FxPkgPnp@@AEAAXXZ @ 0x1C0098EDC (-DisconnectInterruptNP@FxPkgPnp@@AEAAXXZ.c)
 *     ?PowerConnectInterruptFailed@FxPkgPnp@@IEAAXXZ @ 0x1C0098FF0 (-PowerConnectInterruptFailed@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerGotoD3Stopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0099380 (-PowerGotoD3Stopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDxFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0099540 (-PowerGotoDxFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDxIoStoppedNP@FxPkgPnp@@IEAAEXZ @ 0x1C0099580 (-PowerGotoDxIoStoppedNP@FxPkgPnp@@IEAAEXZ.c)
 *     ?PowerGotoDxStoppedDisableInterrupt@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0099760 (-PowerGotoDxStoppedDisableInterrupt@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDxStoppedDisableInterruptNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0099780 (-PowerGotoDxStoppedDisableInterruptNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerUpFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0099F50 (-PowerUpFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerUpFailedDerefParent@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0099F90 (-PowerUpFailedDerefParent@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?Disconnect@FxInterrupt@@QEAAJK@Z @ 0x1C0014660 (-Disconnect@FxInterrupt@@QEAAJK@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 */

__int64 __fastcall FxPkgPnp::NotifyResourceObjectsDx(FxPkgPnp *this, char NotifyFlags)
{
  _LIST_ENTRY *Blink; // rbx
  _LIST_ENTRY *p_m_InterruptListHead; // rbp
  unsigned int v5; // r14d
  _LIST_ENTRY **p_Blink; // rdi
  int _a2; // r15d
  __int16 v9; // ax
  const void *_a1; // rdi

  Blink = this->m_InterruptListHead.Blink;
  p_m_InterruptListHead = &this->m_InterruptListHead;
  v5 = 0;
  while ( Blink != p_m_InterruptListHead )
  {
    p_Blink = &Blink[-28].Blink;
    _a2 = FxInterrupt::Disconnect((FxInterrupt *)&Blink[-28].Blink, NotifyFlags);
    if ( _a2 < 0 )
    {
      v9 = *((_WORD *)p_Blink + 5);
      _a1 = (const void *)((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v9 )
        _a1 = 0LL;
      WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0x4Fu, WPP_FxPkgPnp_cpp_Traceguids, _a1, _a2);
      v5 = _a2;
    }
    Blink = Blink->Blink;
  }
  return v5;
}
