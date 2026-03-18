/*
 * XREFs of ??1FxDpc@@UEAA@XZ @ 0x1C006CF2C
 * Callers:
 *     ??_GFxDpc@@UEAAPEAXI@Z @ 0x1C006CFA0 (--_GFxDpc@@UEAAPEAXI@Z.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C001CF1C (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxDpc::~FxDpc(FxDpc *this, unsigned int a2, unsigned int a3)
{
  const void *_a1; // rax

  this->__vftable = (FxDpc_vtbl *)&FxDpc::`vftable';
  _a1 = 0LL;
  if ( this->m_Object )
  {
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_q(this->m_Globals, 2u, 0x12u, 0xAu, WPP_FxDpc_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(this->m_Globals);
  }
  FxNonPagedObject::~FxNonPagedObject(this, a2, a3);
}
