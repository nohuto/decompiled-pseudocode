/*
 * XREFs of ?Dispose@FxMpDevice@@UEAAEXZ @ 0x1C0068190
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C0009130 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     ?WaitForEmpty@FxDisposeList@@QEAAXXZ @ 0x1C00294F4 (-WaitForEmpty@FxDisposeList@@QEAAXXZ.c)
 *     ?CallCleanup@FxObject@@QEAAXXZ @ 0x1C00569CC (-CallCleanup@FxObject@@QEAAXXZ.c)
 */

unsigned __int8 __fastcall FxMpDevice::Dispose(FxMpDevice *this)
{
  __int64 v2; // rdx
  unsigned __int8 v3; // r8
  FxDisposeList *m_DisposeList; // rcx

  FxObject::CallCleanup(this);
  FxObject::DestroyChildren(this);
  m_DisposeList = this->m_DisposeList;
  if ( m_DisposeList )
    FxDisposeList::WaitForEmpty(m_DisposeList, v2, v3);
  ObfDereferenceObject(this->m_DeviceObject.m_DeviceObject);
  this->m_DeviceObject.m_DeviceObject = 0LL;
  this->m_AttachedDevice.FxDeviceBase::m_DeviceObject = 0LL;
  return 0;
}
