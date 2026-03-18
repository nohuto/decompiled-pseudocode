/*
 * XREFs of ?DeleteSymbolicLinkOverload@FxPkgPdo@@EEAAXE@Z @ 0x1C00993C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?IsDeviceReportedMissing@FxDeviceDescriptionEntry@@QEAAEXZ @ 0x1C00673A0 (-IsDeviceReportedMissing@FxDeviceDescriptionEntry@@QEAAEXZ.c)
 */

void __fastcall FxPkgPdo::DeleteSymbolicLinkOverload(FxPkgPdo *this, unsigned __int8 GracefulRemove)
{
  FxDeviceBase *m_DeviceBase; // rdi

  if ( !GracefulRemove && FxDeviceDescriptionEntry::IsDeviceReportedMissing(this->m_Description) )
  {
    m_DeviceBase = this->m_DeviceBase;
    if ( m_DeviceBase[1].m_SpinLock.m_Lock )
    {
      if ( *(_WORD *)&m_DeviceBase[1].m_SpinLock.m_DbgFlagIsInitialized )
        IoDeleteSymbolicLink((PUNICODE_STRING)&m_DeviceBase[1].m_SpinLock);
      FxPoolFree((_QWORD *)m_DeviceBase[1].m_SpinLock.m_Lock);
      *(_QWORD *)&m_DeviceBase[1].m_SpinLock.m_DbgFlagIsInitialized = 0LL;
      m_DeviceBase[1].m_SpinLock.m_Lock = 0LL;
    }
  }
}
