/*
 * XREFs of ?GetParentObjectReferenced@FxObject@@QEAAPEAV1@PEAX@Z @ 0x1C001553C
 * Callers:
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C001F9E0 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 *     ?IsObjectDisposedOnRemove@FxUsbDevice@@QEAAEPEAVFxObject@@@Z @ 0x1C008C9B0 (-IsObjectDisposedOnRemove@FxUsbDevice@@QEAAEPEAVFxObject@@@Z.c)
 * Callees:
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 */

FxObject *__fastcall FxObject::GetParentObjectReferenced(FxObject *this, void *Tag)
{
  unsigned __int64 *p_m_Lock; // rdi
  KIRQL v5; // si
  FxObject *m_ParentObject; // rbx
  unsigned int RefCount; // edx
  FxTagTracker *Flink; // rcx

  p_m_Lock = &this->m_SpinLock.m_Lock;
  v5 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  if ( this->m_ObjectState == 1 )
    m_ParentObject = this->m_ParentObject;
  else
    m_ParentObject = 0LL;
  if ( m_ParentObject )
  {
    RefCount = _InterlockedIncrement(&m_ParentObject->m_Refcnt);
    if ( SLOBYTE(m_ParentObject->m_ObjectFlags) < 0 )
      Flink = (FxTagTracker *)m_ParentObject[-1].m_ChildEntry.Flink;
    else
      Flink = 0LL;
    if ( Flink )
      FxTagTracker::UpdateTagHistory(
        Flink,
        Tag,
        894,
        "minkernel\\wdf\\framework\\shared\\object\\fxobject.cpp",
        TagAddRef,
        RefCount);
  }
  KeReleaseSpinLock(p_m_Lock, v5);
  return m_ParentObject;
}
