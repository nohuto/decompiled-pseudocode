/*
 * XREFs of ?NotifyResourceObjectsD0@FxPkgPnp@@AEAAJK@Z @ 0x1C0013110
 * Callers:
 *     ?PowerWakingConnectInterrupt@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0012E30 (-PowerWakingConnectInterrupt@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerWakingConnectInterruptNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009A160 (-PowerWakingConnectInterruptNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     ?Connect@FxInterrupt@@QEAAJK@Z @ 0x1C0018564 (-Connect@FxInterrupt@@QEAAJK@Z.c)
 */

__int64 __fastcall FxPkgPnp::NotifyResourceObjectsD0(FxPkgPnp *this, unsigned int NotifyFlags)
{
  _LIST_ENTRY *p_m_InterruptListHead; // rdi
  _LIST_ENTRY *Flink; // rbx
  _LIST_ENTRY **p_Blink; // rsi
  int _a2; // r14d
  __int16 v9; // ax
  const void *_a1; // rsi

  p_m_InterruptListHead = &this->m_InterruptListHead;
  Flink = this->m_InterruptListHead.Flink;
  if ( Flink == &this->m_InterruptListHead )
    return 0LL;
  while ( 1 )
  {
    p_Blink = &Flink[-28].Blink;
    _a2 = FxInterrupt::Connect((FxInterrupt *)&Flink[-28].Blink, NotifyFlags);
    if ( _a2 < 0 )
      break;
    Flink = Flink->Flink;
    if ( Flink == p_m_InterruptListHead )
      return 0LL;
  }
  v9 = *((_WORD *)p_Blink + 5);
  _a1 = (const void *)((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v9 )
    _a1 = 0LL;
  WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0x4Eu, WPP_FxPkgPnp_cpp_Traceguids, _a1, _a2);
  return (unsigned int)_a2;
}
