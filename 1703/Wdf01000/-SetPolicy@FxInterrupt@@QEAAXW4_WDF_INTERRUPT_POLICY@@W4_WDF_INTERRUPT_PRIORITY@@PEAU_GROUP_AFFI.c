/*
 * XREFs of ?SetPolicy@FxInterrupt@@QEAAXW4_WDF_INTERRUPT_POLICY@@W4_WDF_INTERRUPT_PRIORITY@@PEAU_GROUP_AFFINITY@@@Z @ 0x1C009FDF8
 * Callers:
 *     imp_WdfInterruptSetExtendedPolicy @ 0x1C0095DD0 (imp_WdfInterruptSetExtendedPolicy.c)
 *     imp_WdfInterruptSetPolicy @ 0x1C0095EF0 (imp_WdfInterruptSetPolicy.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxInterrupt::SetPolicy(
        FxInterrupt *this,
        _WDF_INTERRUPT_POLICY Policy,
        _WDF_INTERRUPT_PRIORITY Priority,
        _GROUP_AFFINITY *TargetProcessorSet)
{
  unsigned __int16 m_ObjectSize; // ax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *v11; // r10

  if ( this->m_CreatedInPrepareHardware )
  {
    m_ObjectSize = this->m_ObjectSize;
    m_Globals = this->m_Globals;
    v11 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v11 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xCu, 0x16u, WPP_InterruptObject_cpp_Traceguids, v11, -1073741808);
    FxVerifierDbgBreakPoint(this->m_Globals);
  }
  this->m_Policy = Policy;
  this->m_Priority = Priority;
  this->m_Processors = *TargetProcessorSet;
  if ( !FxLibraryGlobals.ProcessorGroupSupport )
    this->m_Processors.Group = 0;
  this->m_SetPolicy = 1;
}
