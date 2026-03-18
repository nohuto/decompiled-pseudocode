/*
 * XREFs of ?Dispose@FxIoTarget@@MEAAEXZ @ 0x1C0083A30
 * Callers:
 *     ?Dispose@FxUsbDevice@@MEAAEXZ @ 0x1C008C5D0 (-Dispose@FxUsbDevice@@MEAAEXZ.c)
 *     ?Dispose@FxUsbPipe@@MEAAEXZ @ 0x1C00906E0 (-Dispose@FxUsbPipe@@MEAAEXZ.c)
 * Callees:
 *     ?CallCleanupCallbacks@FxObject@@AEAAXXZ @ 0x1C0015818 (-CallCleanupCallbacks@FxObject@@AEAAXXZ.c)
 */

unsigned __int8 __fastcall FxIoTarget::Dispose(FxIoTarget *this)
{
  if ( this->m_AddedToDeviceList )
    this->m_DeviceBase->RemoveIoTarget(this->m_DeviceBase, this);
  if ( (this->m_ObjectFlags & 0x400) != 0 )
    FxObject::CallCleanupCallbacks(this);
  this->Remove(this);
  return 0;
}
