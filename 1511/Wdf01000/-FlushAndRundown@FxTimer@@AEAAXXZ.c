/*
 * XREFs of ?FlushAndRundown@FxTimer@@AEAAXXZ @ 0x1C006C088
 * Callers:
 *     ?Dispose@FxTimer@@UEAAEXZ @ 0x1C006C050 (-Dispose@FxTimer@@UEAAEXZ.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C00277B0 (WPP_IFR_SF_qq.c)
 *     ?Stop@FxTimer@@QEAAEE@Z @ 0x1C00562E4 (-Stop@FxTimer@@QEAAEE@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxTimer::FlushAndRundown(FxTimer *this, __int64 a2, unsigned __int8 a3)
{
  const void *_a1; // rdx
  FxSystemWorkItem *m_SystemWorkItem; // rcx
  FxObject *m_Object; // rcx

  if ( this->m_CallbackThread == KeGetCurrentThread() )
  {
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qq(this->m_Globals, 2u, 0x12u, 0xEu, WPP_FxTimer_cpp_Traceguids, _a1, this->m_CallbackThread);
    FxVerifierDbgBreakPoint(this->m_Globals);
  }
  FxTimer::Stop(this, 1u, a3);
  m_SystemWorkItem = this->m_SystemWorkItem;
  if ( m_SystemWorkItem )
  {
    m_SystemWorkItem->DeleteObject(m_SystemWorkItem);
    this->m_SystemWorkItem = 0LL;
  }
  m_Object = this->m_Object;
  if ( m_Object )
  {
    this->m_Object = 0LL;
    m_Object->Release(m_Object, this, 525, "minkernel\\wdf\\framework\\shared\\core\\fxtimer.cpp");
  }
  this->Release(this, this, 531, "minkernel\\wdf\\framework\\shared\\core\\fxtimer.cpp");
}
