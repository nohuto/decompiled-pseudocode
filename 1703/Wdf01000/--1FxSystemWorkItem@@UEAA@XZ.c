/*
 * XREFs of ??1FxSystemWorkItem@@UEAA@XZ @ 0x1C007F884
 * Callers:
 *     ??_GFxSystemWorkItem@@UEAAPEAXI@Z @ 0x1C007F910 (--_GFxSystemWorkItem@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@MxWorkItem@@QEAAXXZ @ 0x1C0019364 (-Free@MxWorkItem@@QEAAXXZ.c)
 *     WPP_IFR_SF_ @ 0x1C0019F44 (WPP_IFR_SF_.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxSystemWorkItem::~FxSystemWorkItem(FxSystemWorkItem *this, unsigned int a2, unsigned int a3)
{
  bool v3; // zf
  _FX_DRIVER_GLOBALS *m_Globals; // rdi

  v3 = this->m_RunningDown == 0;
  m_Globals = this->m_Globals;
  this->__vftable = (FxSystemWorkItem_vtbl *)FxSystemWorkItem::`vftable';
  if ( v3 && this->m_WorkItem.m_WorkItem )
  {
    WPP_IFR_SF_(m_Globals, 2u, 0x12u, 0xAu, WPP_FxSystemWorkitem_cpp_Traceguids);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  if ( this->m_WorkItem.m_WorkItem )
    MxWorkItem::Free(&this->m_WorkItem);
  FxNonPagedObject::~FxNonPagedObject(this, a2, a3);
}
