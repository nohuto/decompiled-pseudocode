/*
 * XREFs of ?Dispose@FxIoTarget@@MEAAEXZ @ 0x1C0075870
 * Callers:
 *     ?Dispose@FxUsbDevice@@MEAAEXZ @ 0x1C007B9C0 (-Dispose@FxUsbDevice@@MEAAEXZ.c)
 *     ?Dispose@FxUsbPipe@@MEAAEXZ @ 0x1C007F800 (-Dispose@FxUsbPipe@@MEAAEXZ.c)
 * Callees:
 *     ?CallCleanup@FxObject@@QEAAXXZ @ 0x1C00569CC (-CallCleanup@FxObject@@QEAAXXZ.c)
 */

unsigned __int8 __fastcall FxIoTarget::Dispose(FxIoTarget *this)
{
  if ( this->m_AddedToDeviceList )
    this->m_DeviceBase->RemoveIoTarget(this->m_DeviceBase, this);
  FxObject::CallCleanup(this);
  this->Remove(this);
  return 0;
}
