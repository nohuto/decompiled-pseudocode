/*
 * XREFs of ?SetDelayedDeletion@FxEventQueue@@QEAAXXZ @ 0x1C009BC74
 * Callers:
 *     ?PnpEventFinal@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0092B50 (-PnpEventFinal@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C002F548 (WPP_IFR_SF_qq.c)
 */

void __fastcall FxEventQueue::SetDelayedDeletion(FxEventQueue *this)
{
  FxPkgPnp *m_PkgPnp; // rcx
  FxDeviceBase *m_DeviceBase; // rax
  _DEVICE_OBJECT *_a2; // rdx
  const void *_a1; // rax
  KIRQL v6; // al

  m_PkgPnp = this->m_PkgPnp;
  m_DeviceBase = m_PkgPnp->m_DeviceBase;
  _a2 = m_DeviceBase->m_DeviceObject.m_DeviceObject;
  if ( m_DeviceBase->m_ObjectSize )
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    _a1 = 0LL;
  WPP_IFR_SF_qq(m_PkgPnp->m_Globals, 4u, 0xCu, 0xBu, WPP_EventQueue_cpp_Traceguids, _a1, _a2);
  v6 = KeAcquireSpinLockRaiseToDpc(&this->m_QueueLock.m_Lock);
  this->m_QueueFlags |= 4u;
  KeReleaseSpinLock(&this->m_QueueLock.m_Lock, v6);
}
