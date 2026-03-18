/*
 * XREFs of imp_WdfWorkItemFlush @ 0x1C0007600
 * Callers:
 *     <none>
 * Callees:
 *     ?WaitForSignal@FxWorkItem@@AEAAXXZ @ 0x1C000768C (-WaitForSignal@FxWorkItem@@AEAAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 */

void __fastcall imp_WdfWorkItemFlush(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 WorkItem)
{
  FxWorkItem *v2; // rcx
  __int64 Offset; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int8 CurrentIrql; // al
  int *v6; // rax
  int *v7; // r8
  const void *_a1; // rax
  int v9; // [rsp+58h] [rbp+10h] BYREF
  int v10; // [rsp+60h] [rbp+18h] BYREF
  FxWorkItem *pFxWorkItem; // [rsp+68h] [rbp+20h] BYREF

  if ( !WorkItem )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1025uLL);
  v2 = (FxWorkItem *)(~WorkItem & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (WorkItem & 1) != 0 )
  {
    Offset = LOWORD(v2->__vftable);
    v2 = (FxWorkItem *)((char *)v2 - Offset);
  }
  if ( v2->m_Type == 4133 )
  {
    pFxWorkItem = v2;
  }
  else
  {
    FxObjectHandleGetPtrQI(v2, (void **)&pFxWorkItem, (void *)WorkItem, 0x1025u, Offset);
    v2 = pFxWorkItem;
  }
  m_Globals = v2->m_Globals;
  if ( m_Globals->FxVerifierOn && (CurrentIrql = KeGetCurrentIrql()) != 0 )
  {
    WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
    v6 = &v9;
    v9 = 7567731;
    v7 = &v9;
  }
  else
  {
    if ( v2->m_WorkItemThread != KeGetCurrentThread() )
    {
      FxWorkItem::WaitForSignal(pFxWorkItem);
      return;
    }
    if ( pFxWorkItem->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)pFxWorkItem ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 2u, 0x12u, 0x10u, WPP_FxWorkItem_cpp_Traceguids, _a1, v2->m_WorkItemThread);
    v6 = &v10;
    v10 = 7567731;
    v7 = &v10;
  }
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
    m_Globals->Public.DriverName,
    (const char *)v7,
    m_Globals->Public.DriverName,
    (const char *)v6);
  if ( m_Globals->FxVerifierDbgBreakOnError )
    DbgBreakPoint();
}
