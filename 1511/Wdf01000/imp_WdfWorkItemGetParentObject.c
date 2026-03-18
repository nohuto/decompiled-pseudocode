/*
 * XREFs of imp_WdfWorkItemGetParentObject @ 0x1C0033F20
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

unsigned __int64 __fastcall imp_WdfWorkItemGetParentObject(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFWORKITEM__ *WorkItem)
{
  FxObject *m_Object; // rax
  FxWorkItem *pFxWorkItem; // [rsp+30h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)WorkItem,
    0x1025u,
    (void **)&pFxWorkItem);
  m_Object = pFxWorkItem->m_Object;
  if ( m_Object && m_Object->m_ObjectSize )
    return (unsigned __int64)m_Object ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    return 0LL;
}
