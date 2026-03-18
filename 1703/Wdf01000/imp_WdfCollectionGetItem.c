/*
 * XREFs of imp_WdfCollectionGetItem @ 0x1C0004320
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0005CF0 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003F450 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C003F608 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0080C04 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

unsigned __int64 __fastcall imp_WdfCollectionGetItem(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Collection,
        unsigned int Index)
{
  FxCollection *v4; // rcx
  __int64 Offset; // r8
  int v6; // r8d
  unsigned __int8 v7; // r9
  _LIST_ENTRY *Flink; // rbx
  _LIST_ENTRY **p_Blink; // rbx
  _LIST_ENTRY *v10; // rbx
  unsigned __int8 irql; // [rsp+48h] [rbp+10h] BYREF
  FxCollection *pCollection; // [rsp+58h] [rbp+20h] BYREF

  if ( !Collection )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x100EuLL);
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
  if ( SLOBYTE(v4->m_ObjectFlags) < 0 && *(_QWORD *)&v4[-1].m_NPLock.m_DbgFlagIsInitialized )
  {
    FxVerifierLock::Lock(*(FxVerifierLock **)&v4[-1].m_NPLock.m_DbgFlagIsInitialized, &irql, Offset);
    v7 = irql;
  }
  else
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&v4->m_NPLock.m_Lock);
  }
  if ( Index >= pCollection->m_Count )
    goto LABEL_21;
  v6 = 0;
  Flink = pCollection->m_ListHead.Flink;
  if ( Flink == &pCollection->m_ListHead )
    goto LABEL_21;
  while ( v6 != Index )
  {
    Flink = Flink->Flink;
    ++v6;
    if ( Flink == &pCollection->m_ListHead )
      goto LABEL_21;
  }
  p_Blink = &Flink[-1].Blink;
  if ( !p_Blink )
LABEL_21:
    v10 = 0LL;
  else
    v10 = *p_Blink;
  if ( SLOBYTE(pCollection->m_ObjectFlags) < 0 && *(_QWORD *)&pCollection[-1].m_NPLock.m_DbgFlagIsInitialized )
    FxVerifierLock::Unlock(*(FxVerifierLock **)&pCollection[-1].m_NPLock.m_DbgFlagIsInitialized, v7, v6);
  else
    KeReleaseSpinLock(&pCollection->m_NPLock.m_Lock, v7);
  if ( !v10 )
    return 0LL;
  if ( WORD1(v10->Blink) )
    return (unsigned __int64)v10 ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    return 0LL;
}
