/*
 * XREFs of ?NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z @ 0x1C005BBE4
 * Callers:
 *     ?DisconnectInterruptNP@FxPkgPnp@@AEAAXXZ @ 0x1C009B650 (-DisconnectInterruptNP@FxPkgPnp@@AEAAXXZ.c)
 *     ?PowerConnectInterruptFailed@FxPkgPnp@@IEAAXXZ @ 0x1C009B7AC (-PowerConnectInterruptFailed@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerGotoD3Stopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009BAF0 (-PowerGotoD3Stopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDxFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009BD00 (-PowerGotoDxFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDxIoStoppedNP@FxPkgPnp@@IEAAEXZ @ 0x1C009BD3C (-PowerGotoDxIoStoppedNP@FxPkgPnp@@IEAAEXZ.c)
 *     ?PowerGotoDxStoppedDisableInterrupt@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009BF70 (-PowerGotoDxStoppedDisableInterrupt@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDxStoppedDisableInterruptNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009BF90 (-PowerGotoDxStoppedDisableInterruptNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerUpFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009C5D0 (-PowerUpFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerUpFailedDerefParent@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009C600 (-PowerUpFailedDerefParent@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?Disconnect@FxInterrupt@@QEAAJK@Z @ 0x1C0007B54 (-Disconnect@FxInterrupt@@QEAAJK@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 */

__int64 __fastcall FxPkgPnp::NotifyResourceObjectsDx(FxPkgPnp *this, char NotifyFlags)
{
  _LIST_ENTRY *Blink; // rdi
  _LIST_ENTRY *p_m_InterruptListHead; // r14
  unsigned int v5; // esi
  _LIST_ENTRY **p_Blink; // rbx
  int _a2; // eax
  int v9; // r15d
  const void *_a1; // rbx

  Blink = this->m_InterruptListHead.Blink;
  p_m_InterruptListHead = &this->m_InterruptListHead;
  v5 = 0;
  while ( Blink != p_m_InterruptListHead )
  {
    p_Blink = &Blink[-28].Blink;
    _a2 = FxInterrupt::Disconnect((FxInterrupt *)&Blink[-28].Blink, NotifyFlags);
    v9 = _a2;
    if ( _a2 < 0 )
    {
      if ( *((_WORD *)p_Blink + 5) )
        _a1 = (const void *)((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a1 = 0LL;
      WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0x4Fu, WPP_FxPkgPnp_cpp_Traceguids, _a1, _a2);
      v5 = v9;
    }
    Blink = Blink->Blink;
  }
  return v5;
}
