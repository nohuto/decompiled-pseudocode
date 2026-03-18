/*
 * XREFs of ?Vf_VerifyDispatchContext@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00BA628
 * Callers:
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C0007600 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxPkgIo::Vf_VerifyDispatchContext(
        FxPkgIo *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _LIST_ENTRY *DispatchContext)
{
  _LIST_ENTRY *p_m_DynamicDispatchInfoListHead; // rcx
  unsigned int v4; // ebx
  bool v6; // r9
  _LIST_ENTRY *i; // rax

  p_m_DynamicDispatchInfoListHead = &this->m_DynamicDispatchInfoListHead;
  v4 = 0;
  v6 = DispatchContext == p_m_DynamicDispatchInfoListHead;
  for ( i = p_m_DynamicDispatchInfoListHead->Flink; i != p_m_DynamicDispatchInfoListHead; i = i->Flink )
  {
    if ( DispatchContext == i )
    {
      v6 = 1;
      break;
    }
  }
  if ( !v6 )
  {
    v4 = -1073741811;
    WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0xDu, 0xDu, WPP_FxPkgIo_cpp_Traceguids, DispatchContext, -1073741811);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
  return v4;
}
