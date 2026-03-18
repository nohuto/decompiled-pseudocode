/*
 * XREFs of ??1FxInterrupt@@UEAA@XZ @ 0x1C00A1A54
 * Callers:
 *     ??_EFxInterrupt@@UEAAPEAXI@Z @ 0x1C00A1B60 (--_EFxInterrupt@@UEAAPEAXI@Z.c)
 * Callees:
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 */

void __fastcall FxInterrupt::~FxInterrupt(FxInterrupt *this, unsigned int a2, unsigned int a3)
{
  bool v3; // zf
  __int64 v5; // rax
  __int64 v6; // rax

  v3 = this->m_Interrupt == 0LL;
  this->__vftable = (FxInterrupt_vtbl *)&FxInterrupt::`vftable';
  if ( !v3 )
  {
    WPP_IFR_SF_(this->m_Globals, 2u, 0xCu, 0xAu, WPP_InterruptObject_cpp_Traceguids);
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( *(_BYTE *)(v5 + 318) )
      DbgBreakPoint();
  }
  if ( this->m_DeviceBase )
  {
    WPP_IFR_SF_(this->m_Globals, 2u, 0xCu, 0xBu, WPP_InterruptObject_cpp_Traceguids);
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( *(_BYTE *)(v6 + 318) )
      DbgBreakPoint();
  }
  this->m_BuiltInSpinLock.m_DbgFlagIsInitialized = 0;
  FxNonPagedObject::~FxNonPagedObject(this, a2, a3);
}
