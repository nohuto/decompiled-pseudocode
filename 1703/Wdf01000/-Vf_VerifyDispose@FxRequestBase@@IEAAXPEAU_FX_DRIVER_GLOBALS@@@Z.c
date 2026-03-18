/*
 * XREFs of ?Vf_VerifyDispose@FxRequestBase@@IEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D4924
 * Callers:
 *     ?Dispose@FxRequestBase@@MEAAEXZ @ 0x1C0010B80 (-Dispose@FxRequestBase@@MEAAEXZ.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0010B50 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxRequestBase::Vf_VerifyDispose(
        FxRequestBase *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int8 a3)
{
  unsigned __int8 v5; // r8
  FxIoTarget *m_Target; // r8
  unsigned __int16 m_ObjectSize; // ax
  const void *_a2; // r8
  unsigned __int64 v9; // rcx
  FxRequestBase *_a1; // rax
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF

  FxNonPagedObject::Lock(this, &irql, a3);
  if ( (this->m_VerifierFlags & 0x100) != 0 )
  {
    m_Target = this->m_Target;
    m_ObjectSize = m_Target->m_ObjectSize;
    _a2 = (const void *)((unsigned __int64)m_Target ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a2 = 0LL;
    v9 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    _a1 = this;
    if ( !this->m_ObjectSize )
      v9 = 0LL;
    if ( v9 )
      _a1 = (FxRequestBase *)v9;
    WPP_IFR_SF_qq(FxDriverGlobals, 2u, 0x10u, 0xAu, WPP_FxRequestBase_cpp_Traceguids, _a1, _a2);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
  FxNonPagedObject::Unlock(this, irql, v5);
}
