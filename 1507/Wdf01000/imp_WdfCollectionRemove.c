/*
 * XREFs of imp_WdfCollectionRemove @ 0x1C007F540
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?CleanupEntry@FxCollectionInternal@@QEAAXPEAVFxCollectionEntry@@@Z @ 0x1C000FDCC (-CleanupEntry@FxCollectionInternal@@QEAAXPEAVFxCollectionEntry@@@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 */

void __fastcall imp_WdfCollectionRemove(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Collection,
        unsigned __int64 Item)
{
  __int64 _a2; // rdi
  FxCollection *v5; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  FxObject *v7; // r10
  __int64 Offset; // rdx
  FxCollection *v9; // rcx
  _LIST_ENTRY *p_m_ListHead; // r8
  FxCollection *Flink; // rax
  FxCollectionEntry *p_Blink; // rdx
  int _a3; // ebx
  FxObject *pObject; // [rsp+40h] [rbp-10h] BYREF
  int irql; // [rsp+88h] [rbp+38h] BYREF
  FxCollection *pCollection; // [rsp+98h] [rbp+48h] BYREF

  _a2 = Collection;
  if ( !Collection )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x100EuLL);
  v5 = (FxCollection *)(~Collection & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Collection) = 0;
  if ( (_a2 & 1) != 0 )
  {
    Collection = LOWORD(v5->__vftable);
    v5 = (FxCollection *)((char *)v5 - Collection);
  }
  if ( v5->m_Type == 4110 )
  {
    pCollection = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, (void **)&pCollection, (void *)_a2, 0x100Eu, Collection);
    v5 = pCollection;
  }
  m_Globals = v5->m_Globals;
  if ( !Item )
    FxVerifierBugCheckWorker(v5->m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1000uLL);
  v7 = (FxObject *)(~Item & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Item & 1) != 0 )
  {
    Offset = LOWORD(v7->__vftable);
    v7 = (FxObject *)((char *)v7 - Offset);
  }
  if ( v7->m_Type == 4096 )
  {
    pObject = v7;
  }
  else
  {
    FxObjectHandleGetPtrQI(v7, (void **)&pObject, (void *)Item, 0x1000u, Offset);
    v5 = pCollection;
  }
  FxNonPagedObject::Lock(v5, (unsigned __int8 *)&irql, Item);
  v9 = pCollection;
  p_m_ListHead = &pCollection->m_ListHead;
  Flink = (FxCollection *)pCollection->m_ListHead.Flink;
  if ( Flink == (FxCollection *)&pCollection->m_ListHead )
  {
LABEL_18:
    p_Blink = 0LL;
  }
  else
  {
    while ( 1 )
    {
      p_Blink = (FxCollectionEntry *)&Flink[-1].m_ListHead.Blink;
      if ( (FxObject *)Flink[-1].m_ListHead.Blink == pObject )
        break;
      Flink = (FxCollection *)Flink->__vftable;
      if ( Flink == (FxCollection *)p_m_ListHead )
        goto LABEL_18;
    }
  }
  if ( p_Blink )
  {
    FxCollectionInternal::CleanupEntry(&pCollection->FxCollectionInternal, p_Blink);
    v9 = pCollection;
    _a3 = 0;
  }
  else
  {
    pObject = 0LL;
    _a3 = -1073741275;
  }
  if ( SLOBYTE(v9->m_ObjectFlags) < 0 && *(_QWORD *)&v9[-1].m_Count )
    FxVerifierLock::Unlock(*(FxVerifierLock **)&v9[-1].m_Count, irql, (unsigned __int8)p_m_ListHead);
  else
    KeReleaseSpinLock(&v9->m_NPLock.m_Lock, irql);
  if ( pObject )
    pObject->Release(
      pObject,
      &pCollection->FxCollectionInternal,
      127,
      "minkernel\\wdf\\framework\\shared\\inc\\private\\common\\FxCollection.hpp");
  if ( _a3 < 0 )
  {
    WPP_IFR_SF_qid(m_Globals, 2u, 2u, 0xDu, WPP_FxCollectionApi_cpp_Traceguids, (const void *)Item, _a2, _a3);
    irql = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
  }
}
