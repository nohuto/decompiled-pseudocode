/*
 * XREFs of ?SetDelayedDeletion@FxEventQueue@@QEAAXXZ @ 0x1C00A074C
 * Callers:
 *     ?PnpEventFinal@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0096DD0 (-PnpEventFinal@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 */

void __fastcall FxEventQueue::SetDelayedDeletion(FxEventQueue *this)
{
  FxPkgPnp *m_PkgPnp; // rcx
  FxDeviceBase *m_DeviceBase; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _DEVICE_OBJECT *m_DeviceObject; // rdx
  unsigned __int16 m_ObjectSize; // ax
  const void *v7; // r8
  KIRQL v8; // al

  m_PkgPnp = this->m_PkgPnp;
  m_DeviceBase = m_PkgPnp->m_DeviceBase;
  m_Globals = m_PkgPnp->m_Globals;
  m_DeviceObject = m_DeviceBase->m_DeviceObject.m_DeviceObject;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v7 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    v7 = 0LL;
  WPP_IFR_SF_qq(m_Globals, 4u, 0xCu, 0xBu, WPP_EventQueue_cpp_Traceguids, v7, m_DeviceObject);
  v8 = KeAcquireSpinLockRaiseToDpc(&this->m_QueueLock.m_Lock);
  this->m_QueueFlags |= 4u;
  KeReleaseSpinLock(&this->m_QueueLock.m_Lock, v8);
}
