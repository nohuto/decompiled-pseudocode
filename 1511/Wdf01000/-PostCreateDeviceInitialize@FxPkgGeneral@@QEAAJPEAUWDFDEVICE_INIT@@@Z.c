/*
 * XREFs of ?PostCreateDeviceInitialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C001D014
 * Callers:
 *     ?ControlDeviceInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C001C0DC (-ControlDeviceInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C001C128 (-PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C001C310 (-FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x1C001DE30 (-CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@P.c)
 *     memset @ 0x1C0036C40 (memset.c)
 */

__int64 __fastcall FxPkgGeneral::PostCreateDeviceInitialize(FxPkgGeneral *this, WDFDEVICE_INIT *Init)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  unsigned __int8 Flags; // cl
  NTSTATUS _a2; // ebx
  FxDeviceBase *v8; // rcx
  FxPkgIo *Blink; // rcx
  FxDeviceBase *m_DeviceBase; // rax
  _DEVICE_OBJECT *m_DeviceObject; // rsi
  FxDeviceBase *v12; // rax
  const void *_a1; // rax
  _WDF_OBJECT_ATTRIBUTES attributes; // [rsp+40h] [rbp-B8h] BYREF
  _WDF_IO_QUEUE_CONFIG queueConfig; // [rsp+80h] [rbp-78h] BYREF

  m_Globals = this->m_Globals;
  Flags = Init->Control.Flags;
  _a2 = 0;
  if ( !Flags )
    goto LABEL_21;
  m_DeviceBase = this->m_DeviceBase;
  m_DeviceObject = m_DeviceBase->m_DeviceObject.m_DeviceObject;
  if ( (Flags & 1) != 0 )
  {
    _a2 = IoRegisterShutdownNotification(m_DeviceBase->m_DeviceObject.m_DeviceObject);
    if ( _a2 < 0 )
      goto LABEL_12;
  }
  if ( (Init->Control.Flags & 2) != 0 )
    _a2 = IoRegisterLastChanceShutdownNotification(m_DeviceObject);
  if ( _a2 < 0 )
LABEL_12:
    IoUnregisterShutdownNotification(m_DeviceObject);
  else
    this->m_EvtDeviceShutdown.m_Method = Init->Control.ShutdownNotification;
  if ( _a2 >= 0 )
  {
LABEL_21:
    if ( (this->m_Flags & 0xC) != 0 )
    {
      memset(&queueConfig, 0, sizeof(queueConfig));
      queueConfig.Size = 96;
      *(_QWORD *)&queueConfig.DispatchType = 3LL;
      memset(&attributes, 0, sizeof(attributes));
      v8 = this->m_DeviceBase;
      attributes.ExecutionLevel = this->m_ExecutionLevel;
      attributes.SynchronizationScope = this->m_SynchronizationScope;
      Blink = (FxPkgIo *)v8[3].m_ChildListHead.Blink;
      attributes.Size = 56;
      _a2 = FxPkgIo::CreateQueue(Blink, &queueConfig, &attributes, 0LL, &this->m_DefaultQueueForCreates);
      if ( _a2 < 0 )
      {
        v12 = this->m_DeviceBase;
        if ( v12->m_ObjectSize )
          _a1 = (const void *)((unsigned __int64)v12 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          _a1 = 0LL;
        WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x11u, WPP_FxPkgGeneral_cpp_Traceguids, _a1, _a2);
      }
    }
  }
  return (unsigned int)_a2;
}
