/*
 * XREFs of imp_WdfCollectionGetFirstItem @ 0x1C007F350
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

unsigned __int64 __fastcall imp_WdfCollectionGetFirstItem(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Collection)
{
  FxCollection *v2; // rcx
  __int64 Offset; // r8
  unsigned __int8 v4; // r8
  _LIST_ENTRY *p_m_ListHead; // rax
  _LIST_ENTRY *Blink; // rbx
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
  FxNonPagedObject::Lock(v2, &irql, Offset);
  p_m_ListHead = &pCollection->m_ListHead;
  if ( p_m_ListHead->Flink == p_m_ListHead )
    Blink = 0LL;
  else
    Blink = p_m_ListHead->Flink[-1].Blink;
  if ( SLOBYTE(pCollection->m_ObjectFlags) < 0 && *(_QWORD *)&pCollection[-1].m_Count )
    FxVerifierLock::Unlock(*(FxVerifierLock **)&pCollection[-1].m_Count, irql, v4);
  else
    KeReleaseSpinLock(&pCollection->m_NPLock.m_Lock, irql);
  if ( !Blink )
    return 0LL;
  if ( WORD1(Blink->Blink) )
    return (unsigned __int64)Blink ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    return 0LL;
}
