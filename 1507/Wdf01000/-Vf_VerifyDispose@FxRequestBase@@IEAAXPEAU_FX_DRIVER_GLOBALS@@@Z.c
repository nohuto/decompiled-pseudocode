/*
 * XREFs of ?Vf_VerifyDispose@FxRequestBase@@IEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D1594
 * Callers:
 *     ?Dispose@FxRequestBase@@MEAAEXZ @ 0x1C0013CF0 (-Dispose@FxRequestBase@@MEAAEXZ.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 */

void __fastcall FxRequestBase::Vf_VerifyDispose(
        FxRequestBase *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int8 a3)
{
  unsigned __int8 v5; // r8
  FxIoTarget *m_Target; // rcx
  const void *_a2; // rcx
  unsigned __int64 v8; // rdx
  FxRequestBase *_a1; // rax
  FxVerifierLock *m_IrpQueue; // rcx
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF
  int v12; // [rsp+60h] [rbp+18h]

  FxNonPagedObject::Lock(this, &irql, a3);
  if ( (this->m_VerifierFlags & 0x100) != 0 )
  {
    m_Target = this->m_Target;
    if ( m_Target->m_ObjectSize )
      _a2 = (const void *)((unsigned __int64)m_Target ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a2 = 0LL;
    if ( this->m_ObjectSize )
      v8 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v8 = 0LL;
    _a1 = this;
    if ( v8 )
      _a1 = (FxRequestBase *)v8;
    WPP_IFR_SF_qq(FxDriverGlobals, 2u, 0x10u, 0xAu, WPP_FxRequestBase_cpp_Traceguids, _a1, _a2);
    v12 = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( FxDriverGlobals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (m_IrpQueue = (FxVerifierLock *)this[-1].m_IrpQueue) != 0LL )
    FxVerifierLock::Unlock(m_IrpQueue, irql, v5);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
}
