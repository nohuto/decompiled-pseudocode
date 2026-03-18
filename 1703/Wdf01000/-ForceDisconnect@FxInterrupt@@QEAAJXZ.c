/*
 * XREFs of ?ForceDisconnect@FxInterrupt@@QEAAJXZ @ 0x1C009FC60
 * Callers:
 *     imp_WdfInterruptDisable @ 0x1C0095B80 (imp_WdfInterruptDisable.c)
 * Callees:
 *     WPP_IFR_SF_qqq @ 0x1C006AA34 (WPP_IFR_SF_qqq.c)
 */

__int64 __fastcall FxInterrupt::ForceDisconnect(FxInterrupt *this)
{
  FxDeviceBase *m_DeviceBase; // r8
  unsigned int Flags; // ebx
  const void *v4; // rdx
  unsigned __int16 m_ObjectSize; // ax
  const void *v6; // r8

  m_DeviceBase = this->m_DeviceBase;
  Flags = m_DeviceBase->m_DeviceObject.m_DeviceObject->Flags;
  v4 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  if ( !this->m_ObjectSize )
    v4 = 0LL;
  v6 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    v6 = 0LL;
  WPP_IFR_SF_qqq(this->m_Globals, 4u, 0xCu, 0x1Au, WPP_InterruptObject_cpp_Traceguids, v6, v4, this->m_Interrupt);
  this->m_ForceDisconnected = 1;
  return FxInterrupt::Disconnect(this, (Flags & 0x2000) == 0);
}
