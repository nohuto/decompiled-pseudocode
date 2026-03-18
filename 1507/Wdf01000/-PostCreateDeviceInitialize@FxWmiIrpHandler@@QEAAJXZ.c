/*
 * XREFs of ?PostCreateDeviceInitialize@FxWmiIrpHandler@@QEAAJXZ @ 0x1C00255A4
 * Callers:
 *     ?ControlDeviceInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C000E96C (-ControlDeviceInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C000E9B8 (-PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxWmiIrpHandler::PostCreateDeviceInitialize(FxWmiIrpHandler *this)
{
  struct _IO_WORKITEM *WorkItem; // rax

  WorkItem = IoAllocateWorkItem(this->m_DeviceBase->m_DeviceObject.m_DeviceObject);
  this->m_WorkItem = WorkItem;
  return WorkItem == 0LL ? 0xC000009A : 0;
}
