/*
 * XREFs of imp_WdfIoResourceListGetCount @ 0x1C00332C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 */

__int64 __fastcall imp_WdfIoResourceListGetCount(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFIORESLIST__ *ResourceList)
{
  unsigned __int8 v2; // r8
  unsigned int m_Count; // ebx
  unsigned __int8 v4; // r8
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF
  FxIoResList *pList; // [rsp+40h] [rbp+18h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)ResourceList,
    0x1035u,
    (void **)&pList);
  FxNonPagedObject::Lock(pList, &irql, v2);
  m_Count = pList->m_Count;
  FxNonPagedObject::Unlock(pList, irql, v4);
  return m_Count;
}
