/*
 * XREFs of ?Vf_VerifyDispatchContext@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00D1948
 * Callers:
 *     ?Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z @ 0x1C0003830 (-Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z.c)
 *     imp_WdfDeviceWdmDispatchIrp @ 0x1C006CF50 (imp_WdfDeviceWdmDispatchIrp.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 */

__int64 __fastcall FxPkgIo::Vf_VerifyDispatchContext(
        FxPkgIo *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _LIST_ENTRY *DispatchContext)
{
  _LIST_ENTRY *p_m_DynamicDispatchInfoListHead; // rcx
  unsigned int v4; // ebx
  bool v6; // r9
  _LIST_ENTRY *i; // rax

  p_m_DynamicDispatchInfoListHead = &this->m_DynamicDispatchInfoListHead;
  v4 = 0;
  v6 = DispatchContext == p_m_DynamicDispatchInfoListHead;
  for ( i = p_m_DynamicDispatchInfoListHead->Flink; i != p_m_DynamicDispatchInfoListHead; i = i->Flink )
  {
    if ( DispatchContext == i )
    {
      v6 = 1;
      break;
    }
  }
  if ( !v6 )
  {
    v4 = -1073741811;
    WPP_IFR_SF_qd(
      FxDriverGlobals,
      2u,
      0xDu,
      0xDu,
      (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.PagedLock.m_Lock,
      DispatchContext,
      -1073741811);
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( FxDriverGlobals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
  }
  return v4;
}
