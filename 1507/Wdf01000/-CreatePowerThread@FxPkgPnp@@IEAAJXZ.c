/*
 * XREFs of ?CreatePowerThread@FxPkgPnp@@IEAAJXZ @ 0x1C009D6A8
 * Callers:
 *     ?QueryForPowerThread@FxPkgPdo@@EEAAJXZ @ 0x1C0099820 (-QueryForPowerThread@FxPkgPdo@@EEAAJXZ.c)
 *     ?QueryForPowerThread@FxPkgFdo@@EEAAJXZ @ 0x1C009FBE0 (-QueryForPowerThread@FxPkgFdo@@EEAAJXZ.c)
 * Callees:
 *     ?ExitThread@FxSystemThread@@QEAAEXZ @ 0x1C00A6530 (-ExitThread@FxSystemThread@@QEAAEXZ.c)
 *     ?_CreateAndInit@FxSystemThread@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C00A692C (-_CreateAndInit@FxSystemThread@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_DEVICE.c)
 */

int __fastcall FxPkgPnp::CreatePowerThread(FxPkgPnp *this)
{
  FxDeviceBase *m_DeviceBase; // r8
  _DEVICE_OBJECT *m_DeviceObject; // r9
  WDFDEVICE__ *v4; // r8
  int result; // eax
  FxSystemThread *v6; // rbx
  FxSystemThread *pThread; // [rsp+30h] [rbp+8h] BYREF

  m_DeviceBase = this->m_DeviceBase;
  m_DeviceObject = m_DeviceBase->m_DeviceObject.m_DeviceObject;
  if ( m_DeviceBase->m_ObjectSize )
    v4 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v4 = 0LL;
  result = FxSystemThread::_CreateAndInit(&pThread, this->m_Globals, v4, m_DeviceObject);
  if ( result >= 0 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&this->m_PowerThread, (signed __int64)pThread, 0LL) )
    {
      v6 = pThread;
      FxSystemThread::ExitThread(pThread);
      v6->DeleteObject(v6);
    }
    this->m_HasPowerThread = 1;
    return 0;
  }
  return result;
}
