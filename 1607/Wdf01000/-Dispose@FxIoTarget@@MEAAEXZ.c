/*
 * XREFs of ?Dispose@FxIoTarget@@MEAAEXZ @ 0x1C0083810
 * Callers:
 *     ?Dispose@FxUsbPipe@@MEAAEXZ @ 0x1C0089050 (-Dispose@FxUsbPipe@@MEAAEXZ.c)
 *     ?Dispose@FxUsbDevice@@MEAAEXZ @ 0x1C008BAD0 (-Dispose@FxUsbDevice@@MEAAEXZ.c)
 * Callees:
 *     ?CallCleanup@FxObject@@QEAAXXZ @ 0x1C0063DF0 (-CallCleanup@FxObject@@QEAAXXZ.c)
 */

unsigned __int8 __fastcall FxIoTarget::Dispose(FxIoTarget *this)
{
  if ( this->m_AddedToDeviceList )
    this->m_DeviceBase->RemoveIoTarget(this->m_DeviceBase, this);
  FxObject::CallCleanup(this);
  this->Remove(this);
  return 0;
}
