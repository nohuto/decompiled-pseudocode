/*
 * XREFs of imp_WdfCollectionAdd @ 0x1C007F200
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C000FCC0 (-Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

__int64 __fastcall imp_WdfCollectionAdd(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Collection,
        unsigned __int64 Object)
{
  FxCollection *v4; // r10
  __int64 Offset; // rcx
  FxObject *v6; // rcx
  __int64 v7; // rdx
  unsigned int v8; // ebx
  unsigned __int8 v9; // r8
  FxVerifierLock *v10; // rcx
  FxObject *pObject; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int8 irql; // [rsp+58h] [rbp+18h] BYREF
  FxCollection *pCollection; // [rsp+68h] [rbp+28h] BYREF

  if ( !Collection )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x100EuLL);
  v4 = (FxCollection *)(~Collection & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Collection & 1) != 0 )
  {
    Offset = LOWORD(v4->__vftable);
    v4 = (FxCollection *)((char *)v4 - Offset);
  }
  if ( v4->m_Type == 4110 )
  {
    pCollection = v4;
  }
  else
  {
    FxObjectHandleGetPtrQI(v4, (void **)&pCollection, (void *)Collection, 0x100Eu, Offset);
    v4 = pCollection;
  }
  if ( !Object )
    FxVerifierBugCheckWorker(v4->m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1000uLL);
  v6 = (FxObject *)(~Object & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v7) = 0;
  if ( (Object & 1) != 0 )
  {
    v7 = LOWORD(v6->__vftable);
    v6 = (FxObject *)((char *)v6 - v7);
  }
  if ( v6->m_Type == 4096 )
  {
    pObject = v6;
  }
  else
  {
    FxObjectHandleGetPtrQI(v6, (void **)&pObject, (void *)Object, 0x1000u, v7);
    v4 = pCollection;
  }
  FxNonPagedObject::Lock(v4, &irql, Object);
  v8 = FxCollectionInternal::Add(&pCollection->FxCollectionInternal, pCollection->m_Globals, pObject) == 0
     ? 0xC0000001
     : 0;
  if ( SLOBYTE(pCollection->m_ObjectFlags) < 0 && (v10 = *(FxVerifierLock **)&pCollection[-1].m_Count) != 0LL )
    FxVerifierLock::Unlock(v10, irql, v9);
  else
    KeReleaseSpinLock(&pCollection->m_NPLock.m_Lock, irql);
  return v8;
}
