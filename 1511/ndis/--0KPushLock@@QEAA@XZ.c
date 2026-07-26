/*
 * XREFs of ??0KPushLock@@QEAA@XZ @ 0x1C00AE538
 * Callers:
 *     ??0_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x1C001F350 (--0_NDIS_MINIPORT_BLOCK@@QEAA@XZ.c)
 *     DriverEntry @ 0x1C00FC3C0 (DriverEntry.c)
 * Callees:
 *     <none>
 */

KPushLock *__fastcall KPushLock::KPushLock(KPushLock *this)
{
  this->m_Lock.Value = 0LL;
  return this;
}
