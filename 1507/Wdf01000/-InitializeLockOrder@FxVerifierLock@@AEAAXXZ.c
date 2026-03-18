/*
 * XREFs of ?InitializeLockOrder@FxVerifierLock@@AEAAXXZ @ 0x1C007B438
 * Callers:
 *     ??0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0031BDC (--0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ??0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@E@Z @ 0x1C0074BC8 (--0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@E@Z.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x1C00659E0 (WPP_IFR_SF_D.c)
 */

void __fastcall FxVerifierLock::InitializeLockOrder(FxVerifierLock *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  unsigned __int16 m_Type; // cx
  FxVerifierOrderMapping *v4; // rax
  unsigned __int16 ObjectLockOrder; // ax

  m_Globals = this->m_Globals;
  m_Type = this->m_ParentObject->m_Type;
  v4 = FxVerifierCallbackOrderTable;
  if ( !this->m_CallbackLock )
    v4 = FxVerifierOrderTable;
  while ( 1 )
  {
    if ( !v4->ObjectType )
    {
      WPP_IFR_SF_D(m_Globals, 0, 0x12u, 0x13u, WPP_FxVerifierLock_cpp_Traceguids, m_Type);
      ObjectLockOrder = -1;
      goto LABEL_8;
    }
    if ( v4->ObjectType == m_Type )
      break;
    ++v4;
  }
  ObjectLockOrder = v4->ObjectLockOrder;
LABEL_8:
  this->m_Order = ObjectLockOrder;
}
