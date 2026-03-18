/*
 * XREFs of imp_WdfWorkItemFlush @ 0x1C0013AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00023CC (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?WaitForSignal@FxWorkItem@@AEAAXXZ @ 0x1C0013B58 (-WaitForSignal@FxWorkItem@@AEAAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C002F548 (WPP_IFR_SF_qq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall imp_WdfWorkItemFlush(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFWORKITEM__ *WorkItem)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  const void *_a1; // rax
  FxWorkItem *pFxWorkItem; // [rsp+50h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)WorkItem,
    0x1025u,
    (void **)&pFxWorkItem);
  if ( (int)FxVerifierCheckIrqlLevel(pFxWorkItem->m_Globals, 0) >= 0 )
  {
    m_Globals = pFxWorkItem->m_Globals;
    if ( pFxWorkItem->m_WorkItemThread == KeGetCurrentThread() )
    {
      if ( pFxWorkItem->m_ObjectSize )
        _a1 = (const void *)((unsigned __int64)pFxWorkItem ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a1 = 0LL;
      WPP_IFR_SF_qq(m_Globals, 2u, 0x12u, 0x10u, WPP_FxWorkItem_cpp_Traceguids, _a1, pFxWorkItem->m_WorkItemThread);
      FxVerifierDbgBreakPoint(m_Globals);
    }
    else
    {
      FxWorkItem::WaitForSignal(pFxWorkItem);
    }
  }
}
