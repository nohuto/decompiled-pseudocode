/*
 * XREFs of imp_WdfIoResourceListGetDescriptor @ 0x1C0021F30
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z @ 0x1C001F8F4 (-FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z.c)
 */

_LIST_ENTRY **__fastcall imp_WdfIoResourceListGetDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESLIST__ *ResourceList,
        unsigned int Index)
{
  unsigned __int8 v4; // r8
  _LIST_ENTRY **Entry; // rax
  unsigned __int8 v6; // r8
  FxNonPagedObject *v7; // r9
  _LIST_ENTRY *v8; // rbx
  _LIST_ENTRY **result; // rax
  __int128 v10; // xmm1
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF
  FxIoResList *pList; // [rsp+48h] [rbp+20h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)ResourceList,
    0x1035u,
    (void **)&pList);
  FxNonPagedObject::Lock(pList, &irql, v4);
  Entry = FxCollectionInternal::FindEntry(&pList->FxCollectionInternal, Index);
  if ( Entry )
    v8 = *Entry;
  else
    v8 = 0LL;
  FxNonPagedObject::Unlock(v7, irql, v6);
  if ( !v8 )
    return 0LL;
  result = &v8[8].Blink;
  v10 = *(_OWORD *)&v8[7].Blink;
  *(_LIST_ENTRY *)((char *)v8 + 136) = *(_LIST_ENTRY *)((char *)v8 + 104);
  *(_OWORD *)&v8[9].Blink = v10;
  return result;
}
