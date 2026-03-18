/*
 * XREFs of ?Free@MxWorkItem@@QEAAXXZ @ 0x1C0027884
 * Callers:
 *     ??1FxWorkItem@@UEAA@XZ @ 0x1C002420C (--1FxWorkItem@@UEAA@XZ.c)
 *     ??1FxSystemWorkItem@@UEAA@XZ @ 0x1C0029420 (--1FxSystemWorkItem@@UEAA@XZ.c)
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x1C00877E0 (--1FxPkgPnp@@MEAA@XZ.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C00889D4 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ??1FxThreadedEventQueue@@QEAA@XZ @ 0x1C008D2F0 (--1FxThreadedEventQueue@@QEAA@XZ.c)
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
