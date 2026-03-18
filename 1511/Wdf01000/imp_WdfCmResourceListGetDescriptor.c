/*
 * XREFs of imp_WdfCmResourceListGetDescriptor @ 0x1C0021EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z @ 0x1C001F8F4 (-FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z.c)
 */

_CM_PARTIAL_RESOURCE_DESCRIPTOR *__fastcall imp_WdfCmResourceListGetDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCMRESLIST__ *List,
        unsigned int Index)
{
  FxCmResList *v4; // rsi
  unsigned __int8 v5; // r8
  _LIST_ENTRY **Entry; // rax
  unsigned __int8 v7; // r8
  char *v8; // rbx
  _LIST_ENTRY *v9; // rdi
  int Blink; // ecx
  unsigned __int8 PreviousIrql; // [rsp+30h] [rbp+8h] BYREF
  FxCmResList *pList; // [rsp+48h] [rbp+20h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)List,
    0x1036u,
    (void **)&pList);
  v4 = pList;
  FxNonPagedObject::Lock(pList, &PreviousIrql, v5);
  Entry = FxCollectionInternal::FindEntry(&v4->FxCollectionInternal, Index);
  v8 = 0LL;
  if ( Entry )
    v9 = *Entry;
  else
    v9 = 0LL;
  FxNonPagedObject::Unlock(v4, PreviousIrql, v7);
  if ( v9 )
  {
    Blink = (int)v9[7].Blink;
    v8 = (char *)&v9[7].Blink + 4;
    *(_LIST_ENTRY *)((char *)v9 + 124) = *(_LIST_ENTRY *)((char *)v9 + 104);
    HIDWORD(v9[8].Blink) = Blink;
  }
  return (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)v8;
}
