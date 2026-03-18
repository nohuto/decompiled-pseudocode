/*
 * XREFs of ?QueueToThreadWorker@FxEventQueue@@IEAAEXZ @ 0x1C00041A0
 * Callers:
 *     ?QueueToThread@FxThreadedEventQueue@@QEAAXXZ @ 0x1C0056E90 (-QueueToThread@FxThreadedEventQueue@@QEAAXXZ.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C00277B0 (WPP_IFR_SF_qq.c)
 */

char __fastcall FxEventQueue::QueueToThreadWorker(FxEventQueue *this)
{
  KIRQL v2; // bp
  char v3; // bl
  FxPkgPnp *m_PkgPnp; // r10
  FxDeviceBase *m_DeviceBase; // rcx
  _DEVICE_OBJECT *_a2; // rax
  const void *_a1; // rcx
  unsigned __int8 m_QueueFlags; // al

  v2 = KeAcquireSpinLockRaiseToDpc(&this->m_QueueLock.m_Lock);
  if ( this->m_QueueHead == this->m_QueueTail )
  {
    v3 = 0;
    m_PkgPnp = this->m_PkgPnp;
    m_DeviceBase = m_PkgPnp->m_DeviceBase;
    _a2 = m_DeviceBase->m_DeviceObject.m_DeviceObject;
    if ( m_DeviceBase->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qq(m_PkgPnp->m_Globals, 4u, 0xCu, 0xCu, WPP_EventQueue_cpp_Traceguids, _a1, _a2);
  }
  else
  {
    m_QueueFlags = this->m_QueueFlags;
    if ( (m_QueueFlags & 1) != 0 )
    {
      v3 = 0;
    }
    else
    {
      v3 = 1;
      this->m_QueueFlags = m_QueueFlags | 1;
    }
  }
  KeReleaseSpinLock(&this->m_QueueLock.m_Lock, v2);
  return v3;
}
