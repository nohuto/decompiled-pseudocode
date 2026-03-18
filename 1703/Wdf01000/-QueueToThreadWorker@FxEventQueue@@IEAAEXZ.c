/*
 * XREFs of ?QueueToThreadWorker@FxEventQueue@@IEAAEXZ @ 0x1C003263C
 * Callers:
 *     ?QueueToThread@FxThreadedEventQueue@@QEAAXXZ @ 0x1C00327DC (-QueueToThread@FxThreadedEventQueue@@QEAAXXZ.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 */

char __fastcall FxEventQueue::QueueToThreadWorker(FxEventQueue *this)
{
  KIRQL v2; // bp
  unsigned __int8 m_QueueFlags; // al
  char v4; // bl
  FxPkgPnp *m_PkgPnp; // rcx
  FxDeviceBase *m_DeviceBase; // r11
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int16 m_ObjectSize; // dx
  _DEVICE_OBJECT *_a2; // r10
  const void *_a1; // r11

  v2 = KeAcquireSpinLockRaiseToDpc(&this->m_QueueLock.m_Lock);
  if ( this->m_QueueHead == this->m_QueueTail )
  {
    v4 = 0;
    m_PkgPnp = this->m_PkgPnp;
    m_DeviceBase = m_PkgPnp->m_DeviceBase;
    m_Globals = m_PkgPnp->m_Globals;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    _a2 = m_DeviceBase->m_DeviceObject.m_DeviceObject;
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 4u, 0xCu, 0xCu, WPP_EventQueue_cpp_Traceguids, _a1, _a2);
  }
  else
  {
    m_QueueFlags = this->m_QueueFlags;
    if ( (m_QueueFlags & 1) != 0 )
    {
      v4 = 0;
    }
    else
    {
      v4 = 1;
      this->m_QueueFlags = m_QueueFlags | 1;
    }
  }
  KeReleaseSpinLock(&this->m_QueueLock.m_Lock, v2);
  return v4;
}
