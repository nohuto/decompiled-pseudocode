/*
 * XREFs of ?InitializeLockOrder@FxVerifierLock@@AEAAXXZ @ 0x1C0081F48
 * Callers:
 *     ??0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0069ED4 (--0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ??0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@E@Z @ 0x1C007AE90 (--0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@E@Z.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x1C0070554 (WPP_IFR_SF_D.c)
 */

void __fastcall FxVerifierLock::InitializeLockOrder(FxVerifierLock *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  FxVerifierOrderMapping *v2; // rdx
  unsigned __int16 m_Type; // cx
  unsigned __int16 ObjectType; // ax
  unsigned __int16 ObjectLockOrder; // ax

  m_Globals = this->m_Globals;
  v2 = FxVerifierCallbackOrderTable;
  m_Type = this->m_ParentObject->m_Type;
  if ( !this->m_CallbackLock )
    v2 = FxVerifierOrderTable;
  if ( v2->ObjectType )
  {
    ObjectType = v2->ObjectType;
    while ( ObjectType != m_Type )
    {
      ++v2;
      ObjectType = v2->ObjectType;
      if ( !v2->ObjectType )
        goto LABEL_7;
    }
    ObjectLockOrder = v2->ObjectLockOrder;
  }
  else
  {
LABEL_7:
    WPP_IFR_SF_D(m_Globals, (unsigned __int8)v2, 0x12u, 0x13u, WPP_FxVerifierLock_cpp_Traceguids, m_Type);
    ObjectLockOrder = -1;
  }
  this->m_Order = ObjectLockOrder;
}
