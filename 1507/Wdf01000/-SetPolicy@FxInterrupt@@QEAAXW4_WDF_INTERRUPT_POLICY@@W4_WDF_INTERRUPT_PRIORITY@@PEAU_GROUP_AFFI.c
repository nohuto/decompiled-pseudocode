/*
 * XREFs of ?SetPolicy@FxInterrupt@@QEAAXW4_WDF_INTERRUPT_POLICY@@W4_WDF_INTERRUPT_PRIORITY@@PEAU_GROUP_AFFINITY@@@Z @ 0x1C00A2118
 * Callers:
 *     imp_WdfInterruptSetExtendedPolicy @ 0x1C00989E0 (imp_WdfInterruptSetExtendedPolicy.c)
 *     imp_WdfInterruptSetPolicy @ 0x1C0098B80 (imp_WdfInterruptSetPolicy.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 */

void __fastcall FxInterrupt::SetPolicy(
        FxInterrupt *this,
        _WDF_INTERRUPT_POLICY Policy,
        _WDF_INTERRUPT_PRIORITY Priority,
        _GROUP_AFFINITY *TargetProcessorSet)
{
  const void *_a1; // rax
  __int64 v9; // rax

  if ( this->m_CreatedInPrepareHardware )
  {
    _a1 = this->m_ObjectSize ? (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL) : 0LL;
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0x17u, WPP_InterruptObject_cpp_Traceguids, _a1, -1073741808);
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( *(_BYTE *)(v9 + 318) )
      DbgBreakPoint();
  }
  this->m_Policy = Policy;
  this->m_Priority = Priority;
  this->m_Processors = *TargetProcessorSet;
  if ( !FxLibraryGlobals.ProcessorGroupSupport )
    this->m_Processors.Group = 0;
  this->m_SetPolicy = 1;
}
