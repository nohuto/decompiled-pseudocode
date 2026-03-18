/*
 * XREFs of ?SetPolicy@FxInterrupt@@QEAAXW4_WDF_INTERRUPT_POLICY@@W4_WDF_INTERRUPT_PRIORITY@@PEAU_GROUP_AFFINITY@@@Z @ 0x1C009B398
 * Callers:
 *     imp_WdfInterruptSetExtendedPolicy @ 0x1C0091C60 (imp_WdfInterruptSetExtendedPolicy.c)
 *     imp_WdfInterruptSetPolicy @ 0x1C0091D80 (imp_WdfInterruptSetPolicy.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxInterrupt::SetPolicy(
        FxInterrupt *this,
        _WDF_INTERRUPT_POLICY Policy,
        _WDF_INTERRUPT_PRIORITY Priority,
        _GROUP_AFFINITY *TargetProcessorSet)
{
  const void *_a1; // rax

  if ( this->m_CreatedInPrepareHardware )
  {
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0x16u, WPP_InterruptObject_cpp_Traceguids, _a1, -1073741808);
    FxVerifierDbgBreakPoint(this->m_Globals);
  }
  this->m_Policy = Policy;
  this->m_Priority = Priority;
  this->m_Processors = *TargetProcessorSet;
  if ( !FxLibraryGlobals.ProcessorGroupSupport )
    this->m_Processors.Group = 0;
  this->m_SetPolicy = 1;
}
