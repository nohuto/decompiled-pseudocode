/*
 * XREFs of imp_WdfCmResourceListGetCount @ 0x1C002CDE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

__int64 __fastcall imp_WdfCmResourceListGetCount(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 List,
        unsigned __int8 a3)
{
  FxCmResList *v3; // rbx
  __int64 Offset; // rcx
  unsigned __int8 v5; // r8
  unsigned int m_Count; // edi
  FxVerifierLock *Flink; // rcx
  unsigned __int8 PreviousIrql; // [rsp+48h] [rbp+10h] BYREF
  FxCmResList *pList; // [rsp+50h] [rbp+18h] BYREF

  if ( !List )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1036uLL);
  v3 = (FxCmResList *)(~List & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (List & 1) != 0 )
  {
    Offset = LOWORD(v3->__vftable);
    v3 = (FxCmResList *)((char *)v3 - Offset);
  }
  if ( v3->m_Type == 4150 )
  {
    pList = v3;
  }
  else
  {
    FxObjectHandleGetPtrQI(v3, (void **)&pList, (void *)List, 0x1036u, Offset);
    v3 = pList;
  }
  FxNonPagedObject::Lock(v3, &PreviousIrql, a3);
  m_Count = v3->m_Count;
  if ( SLOBYTE(v3->m_ObjectFlags) < 0 && (Flink = (FxVerifierLock *)v3[-1].m_ListHead.Flink) != 0LL )
    FxVerifierLock::Unlock(Flink, PreviousIrql, v5);
  else
    KeReleaseSpinLock(&v3->m_NPLock.m_Lock, PreviousIrql);
  return m_Count;
}
