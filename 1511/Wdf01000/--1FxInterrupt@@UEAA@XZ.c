/*
 * XREFs of ??1FxInterrupt@@UEAA@XZ @ 0x1C008C3A4
 * Callers:
 *     ??_EFxInterrupt@@UEAAPEAXI@Z @ 0x1C008C440 (--_EFxInterrupt@@UEAAPEAXI@Z.c)
 * Callees:
 *     WPP_IFR_SF_ @ 0x1C00211D8 (WPP_IFR_SF_.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxInterrupt::~FxInterrupt(FxInterrupt *this, unsigned int a2, unsigned int a3)
{
  bool v3; // zf

  v3 = this->m_Interrupt == 0LL;
  this->__vftable = (FxInterrupt_vtbl *)&FxInterrupt::`vftable';
  if ( !v3 )
  {
    WPP_IFR_SF_(this->m_Globals, 2u, 0xCu, 0xAu, WPP_InterruptObject_cpp_Traceguids);
    FxVerifierDbgBreakPoint(this->m_Globals);
  }
  if ( this->m_DeviceBase )
  {
    WPP_IFR_SF_(this->m_Globals, 2u, 0xCu, 0xBu, WPP_InterruptObject_cpp_Traceguids);
    FxVerifierDbgBreakPoint(this->m_Globals);
  }
  this->m_BuiltInSpinLock.m_DbgFlagIsInitialized = 0;
  FxNonPagedObject::~FxNonPagedObject(this, a2, a3);
}
