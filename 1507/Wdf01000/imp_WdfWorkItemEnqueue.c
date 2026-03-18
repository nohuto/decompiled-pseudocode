/*
 * XREFs of imp_WdfWorkItemEnqueue @ 0x1C0023270
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?Enqueue@FxWorkItem@@QEAAXXZ @ 0x1C001F898 (-Enqueue@FxWorkItem@@QEAAXXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall imp_WdfWorkItemEnqueue(_WDF_DRIVER_GLOBALS *DriverGlobals, __int64 WorkItem)
{
  __int64 Offset; // r8
  FxWorkItem *v3; // rcx
  FxWorkItem *pFxWorkItem; // [rsp+48h] [rbp+10h] BYREF

  LOWORD(Offset) = 0;
  if ( !WorkItem )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1025uLL);
  v3 = (FxWorkItem *)(~WorkItem & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (WorkItem & 1) != 0 )
  {
    Offset = LOWORD(v3->__vftable);
    v3 = (FxWorkItem *)((char *)v3 - Offset);
  }
  if ( v3->m_Type == 4133 )
  {
    pFxWorkItem = v3;
  }
  else
  {
    FxObjectHandleGetPtrQI(v3, (void **)&pFxWorkItem, (void *)WorkItem, 0x1025u, Offset);
    v3 = pFxWorkItem;
  }
  FxWorkItem::Enqueue(v3, WorkItem, Offset);
}
