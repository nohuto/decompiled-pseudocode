/*
 * XREFs of ?ForceReconnect@FxInterrupt@@QEAAJXZ @ 0x1C008C83C
 * Callers:
 *     imp_WdfInterruptEnable @ 0x1C0083BF0 (imp_WdfInterruptEnable.c)
 * Callees:
 *     WPP_IFR_SF_qqq @ 0x1C005D374 (WPP_IFR_SF_qqq.c)
 */

__int64 __fastcall FxInterrupt::ForceReconnect(FxInterrupt *this)
{
  FxDeviceBase *m_DeviceBase; // rdx
  char v3; // bl
  const void *_a2; // rcx
  const void *_a1; // rdx

  m_DeviceBase = this->m_DeviceBase;
  v3 = (m_DeviceBase->m_DeviceObject.m_DeviceObject->Flags & 0x2000) == 0;
  if ( this->m_ObjectSize )
    _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    _a2 = 0LL;
  if ( m_DeviceBase->m_ObjectSize )
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    _a1 = 0LL;
  WPP_IFR_SF_qqq(this->m_Globals, 4u, 0xCu, 0x1Cu, WPP_InterruptObject_cpp_Traceguids, _a1, _a2, this->m_Interrupt);
  this->m_ForceDisconnected = 0;
  return FxInterrupt::Connect(this, v3);
}
