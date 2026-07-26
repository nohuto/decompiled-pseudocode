/*
 * XREFs of ??0KPushLock@@QEAA@XZ @ 0x1C00B3F34
 * Callers:
 *     ??0_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x1C001FEC4 (--0_NDIS_MINIPORT_BLOCK@@QEAA@XZ.c)
 *     DriverEntry @ 0x1C01023B0 (DriverEntry.c)
 * Callees:
 *     <none>
 */

KPushLock *__fastcall KPushLock::KPushLock(KPushLock *this)
{
  this->m_Lock.Value = 0LL;
  return this;
}
