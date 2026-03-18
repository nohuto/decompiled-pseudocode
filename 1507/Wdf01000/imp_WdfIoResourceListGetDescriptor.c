/*
 * XREFs of imp_WdfIoResourceListGetDescriptor @ 0x1C002C8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z @ 0x1C000FD9C (-FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

_LIST_ENTRY **__fastcall imp_WdfIoResourceListGetDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 ResourceList,
        unsigned int Index)
{
  FxIoResList *v4; // rcx
  __int64 Offset; // r8
  _LIST_ENTRY **Entry; // rax
  unsigned __int8 v7; // r8
  __int64 v8; // r9
  _LIST_ENTRY *v9; // rbx
  _LIST_ENTRY **result; // rax
  __int128 v11; // xmm1
  FxVerifierLock *v12; // rcx
  unsigned __int8 irql; // [rsp+48h] [rbp+10h] BYREF
  FxIoResList *pList; // [rsp+58h] [rbp+20h] BYREF

  if ( !ResourceList )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1035uLL);
  v4 = (FxIoResList *)(~ResourceList & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (ResourceList & 1) != 0 )
  {
    Offset = LOWORD(v4->__vftable);
    v4 = (FxIoResList *)((char *)v4 - Offset);
  }
  if ( v4->m_Type == 4149 )
  {
    pList = v4;
  }
  else
  {
    FxObjectHandleGetPtrQI(v4, (void **)&pList, (void *)ResourceList, 0x1035u, Offset);
    v4 = pList;
  }
  FxNonPagedObject::Lock(v4, &irql, Offset);
  Entry = FxCollectionInternal::FindEntry(&pList->FxCollectionInternal, Index);
  if ( Entry )
    v9 = *Entry;
  else
    v9 = 0LL;
  if ( *(char *)(v8 + 24) < 0 && (v12 = *(FxVerifierLock **)(v8 - 24)) != 0LL )
    FxVerifierLock::Unlock(v12, irql, v7);
  else
    KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 112), irql);
  if ( !v9 )
    return 0LL;
  result = &v9[8].Blink;
  v11 = *(_OWORD *)&v9[7].Blink;
  *(_LIST_ENTRY *)((char *)v9 + 136) = *(_LIST_ENTRY *)((char *)v9 + 104);
  *(_OWORD *)&v9[9].Blink = v11;
  return result;
}
