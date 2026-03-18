/*
 * XREFs of ?NotifyResourceObjectsD0@FxPkgPnp@@AEAAJK@Z @ 0x1C001073C
 * Callers:
 *     ?PowerWakingConnectInterrupt@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C00104E0 (-PowerWakingConnectInterrupt@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerWakingConnectInterruptNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C00874E0 (-PowerWakingConnectInterruptNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?Connect@FxInterrupt@@QEAAJK@Z @ 0x1C002F2C8 (-Connect@FxInterrupt@@QEAAJK@Z.c)
 */

__int64 __fastcall FxPkgPnp::NotifyResourceObjectsD0(FxPkgPnp *this, unsigned int NotifyFlags)
{
  _LIST_ENTRY *p_m_InterruptListHead; // rsi
  _LIST_ENTRY *Flink; // rdi
  _LIST_ENTRY **p_Blink; // rbx
  int _a2; // eax
  unsigned int v9; // ebp
  const void *_a1; // rbx

  p_m_InterruptListHead = &this->m_InterruptListHead;
  Flink = this->m_InterruptListHead.Flink;
  if ( Flink == &this->m_InterruptListHead )
    return 0LL;
  while ( 1 )
  {
    p_Blink = &Flink[-28].Blink;
    _a2 = FxInterrupt::Connect((FxInterrupt *)&Flink[-28].Blink, NotifyFlags);
    v9 = _a2;
    if ( _a2 < 0 )
      break;
    Flink = Flink->Flink;
    if ( Flink == p_m_InterruptListHead )
      return 0LL;
  }
  if ( *((_WORD *)p_Blink + 5) )
    _a1 = (const void *)((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    _a1 = 0LL;
  WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0x4Eu, WPP_FxPkgPnp_cpp_Traceguids, _a1, _a2);
  return v9;
}
