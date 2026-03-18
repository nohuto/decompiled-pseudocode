/*
 * XREFs of imp_WdfCollectionRemoveItem @ 0x1C007F760
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z @ 0x1C000FD9C (-FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z.c)
 *     ?CleanupEntry@FxCollectionInternal@@QEAAXPEAVFxCollectionEntry@@@Z @ 0x1C000FDCC (-CleanupEntry@FxCollectionInternal@@QEAAXPEAVFxCollectionEntry@@@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dqdd @ 0x1C007F094 (WPP_IFR_SF_dqdd.c)
 */

void __fastcall imp_WdfCollectionRemoveItem(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Collection,
        unsigned int Index)
{
  WDFCOLLECTION__ *_a3; // rbx
  FxCollection *v5; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  FxCollectionEntry *Entry; // rax
  unsigned __int8 v8; // r8
  FxCollection *v9; // r9
  FxObject *m_Object; // rdi
  int v11; // esi
  FxVerifierLock *v12; // rcx
  unsigned __int8 v13; // dl
  int irql; // [rsp+88h] [rbp+38h] BYREF
  FxCollection *pCollection; // [rsp+98h] [rbp+48h] BYREF

  _a3 = (WDFCOLLECTION__ *)Collection;
  if ( !Collection )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x100EuLL);
  v5 = (FxCollection *)(~Collection & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Collection) = 0;
  if ( ((unsigned __int8)_a3 & 1) != 0 )
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
    FxObjectHandleGetPtrQI(v5, (void **)&pCollection, _a3, 0x100Eu, Collection);
    v5 = pCollection;
  }
  m_Globals = v5->m_Globals;
  FxNonPagedObject::Lock(v5, (unsigned __int8 *)&irql, Index);
  Entry = (FxCollectionEntry *)FxCollectionInternal::FindEntry(&pCollection->FxCollectionInternal, Index);
  if ( Entry )
  {
    m_Object = Entry->m_Object;
    FxCollectionInternal::CleanupEntry(&v9->FxCollectionInternal, Entry);
    v9 = pCollection;
    v11 = 0;
  }
  else
  {
    m_Object = 0LL;
    v11 = -1073741275;
  }
  if ( SLOBYTE(v9->m_ObjectFlags) < 0 && (v12 = *(FxVerifierLock **)&v9[-1].m_Count) != 0LL )
    FxVerifierLock::Unlock(v12, irql, v8);
  else
    KeReleaseSpinLock(&v9->m_NPLock.m_Lock, irql);
  if ( m_Object )
    m_Object->Release(
      m_Object,
      &pCollection->FxCollectionInternal,
      127,
      "minkernel\\wdf\\framework\\shared\\inc\\private\\common\\FxCollection.hpp");
  if ( v11 < 0 )
  {
    WPP_IFR_SF_dqdd(m_Globals, v13, 2u, 0xCu, WPP_FxCollectionApi_cpp_Traceguids, Index, _a3, pCollection->m_Count, v11);
    irql = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
  }
}
