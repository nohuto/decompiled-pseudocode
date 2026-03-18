/*
 * XREFs of imp_WdfCollectionGetCount @ 0x1C0010E00
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003B900 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C003BAB8 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C007BB94 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C007C6D8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

__int64 __fastcall imp_WdfCollectionGetCount(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Collection)
{
  FxCollection *v2; // rcx
  __int64 Offset; // r8
  unsigned __int8 v4; // al
  unsigned __int8 v5; // r8
  unsigned int m_Count; // ebx
  FxVerifierLock *v8; // rcx
  unsigned __int8 irql; // [rsp+48h] [rbp+10h] BYREF
  FxCollection *pCollection; // [rsp+50h] [rbp+18h] BYREF

  if ( !Collection )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x100EuLL);
  v2 = (FxCollection *)(~Collection & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Collection & 1) != 0 )
  {
    Offset = LOWORD(v2->__vftable);
    v2 = (FxCollection *)((char *)v2 - Offset);
  }
  if ( v2->m_Type == 4110 )
  {
    pCollection = v2;
  }
  else
  {
    FxObjectHandleGetPtrQI(v2, (void **)&pCollection, (void *)Collection, 0x100Eu, Offset);
    v2 = pCollection;
  }
  if ( SLOBYTE(v2->m_ObjectFlags) < 0 && *(_QWORD *)&v2[-1].m_Count )
  {
    FxVerifierLock::Lock(*(FxVerifierLock **)&v2[-1].m_Count, &irql, Offset);
    v4 = irql;
  }
  else
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&v2->m_NPLock.m_Lock);
  }
  m_Count = pCollection->m_Count;
  if ( SLOBYTE(pCollection->m_ObjectFlags) < 0 && (v8 = *(FxVerifierLock **)&pCollection[-1].m_Count) != 0LL )
    FxVerifierLock::Unlock(v8, v4, v5);
  else
    KeReleaseSpinLock(&pCollection->m_NPLock.m_Lock, v4);
  return m_Count;
}
