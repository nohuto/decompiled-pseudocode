/*
 * XREFs of ?Free@MxWorkItem@@QEAAXXZ @ 0x1C002F524
 * Callers:
 *     ??1FxWorkItem@@UEAA@XZ @ 0x1C001AC60 (--1FxWorkItem@@UEAA@XZ.c)
 *     ??1FxSystemWorkItem@@UEAA@XZ @ 0x1C0030480 (--1FxSystemWorkItem@@UEAA@XZ.c)
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x1C0095EC0 (--1FxPkgPnp@@MEAA@XZ.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C00970C0 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ??1FxThreadedEventQueue@@QEAA@XZ @ 0x1C009BC58 (--1FxThreadedEventQueue@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall MxWorkItem::Free(MxWorkItem *this)
{
  struct _IO_WORKITEM *m_WorkItem; // rcx

  m_WorkItem = this->m_WorkItem;
  if ( m_WorkItem )
  {
    IoFreeWorkItem(m_WorkItem);
    this->m_WorkItem = 0LL;
  }
}
