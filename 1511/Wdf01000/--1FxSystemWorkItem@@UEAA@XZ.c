/*
 * XREFs of ??1FxSystemWorkItem@@UEAA@XZ @ 0x1C0029420
 * Callers:
 *     ??_GFxSystemWorkItem@@UEAAPEAXI@Z @ 0x1C0029470 (--_GFxSystemWorkItem@@UEAAPEAXI@Z.c)
 * Callees:
 *     WPP_IFR_SF_ @ 0x1C00211D8 (WPP_IFR_SF_.c)
 *     ?Free@MxWorkItem@@QEAAXXZ @ 0x1C0027884 (-Free@MxWorkItem@@QEAAXXZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxSystemWorkItem::~FxSystemWorkItem(FxSystemWorkItem *this, unsigned int a2, unsigned int a3)
{
  bool v3; // zf
  _FX_DRIVER_GLOBALS *m_Globals; // rdi

  v3 = this->m_RunningDown == 0;
  m_Globals = this->m_Globals;
  this->__vftable = (FxSystemWorkItem_vtbl *)&FxObject::`vftable'.BugCheckCallbackRecord.Checksum;
  if ( v3 && this->m_WorkItem.m_WorkItem )
  {
    WPP_IFR_SF_(m_Globals, 2u, 0x12u, 0xAu, WPP_FxSystemWorkitem_cpp_Traceguids);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  if ( this->m_WorkItem.m_WorkItem )
    MxWorkItem::Free(&this->m_WorkItem);
  FxNonPagedObject::~FxNonPagedObject(this, a2, a3);
}
