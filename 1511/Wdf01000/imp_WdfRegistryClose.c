/*
 * XREFs of imp_WdfRegistryClose @ 0x1C0002550
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C0059110 (WPP_IFR_SF_dd.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C006D4B8 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006DFFC (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall imp_WdfRegistryClose(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Key)
{
  FxRegKey *v2; // r10
  __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  void *m_Key; // rcx
  unsigned __int8 CurrentIrql; // al
  FxRegKey *pKey; // [rsp+58h] [rbp+10h] BYREF

  if ( !Key )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1006uLL);
  v2 = (FxRegKey *)(~Key & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Key & 1) != 0 )
  {
    Offset = LOWORD(v2->__vftable);
    v2 = (FxRegKey *)((char *)v2 - Offset);
  }
  if ( v2->m_Type == 4102 )
  {
    pKey = v2;
  }
  else
  {
    FxObjectHandleGetPtrQI(v2, (void **)&pKey, (void *)Key, 0x1006u, Offset);
    v2 = pKey;
  }
  m_Globals = v2->FxPagedObject::FxObject::m_Globals;
  if ( m_Globals->FxVerifierOn && (CurrentIrql = KeGetCurrentIrql()) != 0 )
  {
    WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
    FxVerifierDbgBreakPoint(m_Globals);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  else
  {
    m_Key = v2->m_Key;
    v2->m_Key = 0LL;
    ZwClose(m_Key);
    pKey->DeleteObject(pKey);
  }
}
