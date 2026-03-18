/*
 * XREFs of ?QueryForReenumerationInterface@FxPkgFdo@@EEAAXXZ @ 0x1C0018B30
 * Callers:
 *     <none>
 * Callees:
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x1C0019D48 (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     memset @ 0x1C0036C40 (memset.c)
 */

void __fastcall FxPkgFdo::QueryForReenumerationInterface(FxPkgFdo *this)
{
  _REENUMERATE_SELF_INTERFACE_STANDARD *p_m_SurpriseRemoveAndReenumerateSelfInterface; // rdi
  FxDeviceBase *m_DeviceBase; // rcx
  PDEVICE_OBJECT m_DeviceObject; // rbx
  PIRP Irp; // rax
  _IRP *v6; // rsi
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _IO_STACK_LOCATION *v8; // rax
  FxCREvent Event; // [rsp+20h] [rbp-28h] BYREF

  p_m_SurpriseRemoveAndReenumerateSelfInterface = &this->m_SurpriseRemoveAndReenumerateSelfInterface;
  if ( !this->m_SurpriseRemoveAndReenumerateSelfInterface.SurpriseRemoveAndReenumerateSelf )
  {
    memset(
      &this->m_SurpriseRemoveAndReenumerateSelfInterface,
      0,
      sizeof(this->m_SurpriseRemoveAndReenumerateSelfInterface));
    *(_DWORD *)&p_m_SurpriseRemoveAndReenumerateSelfInterface->Size = 65576;
    m_DeviceBase = this->m_DeviceBase;
    m_DeviceObject = m_DeviceBase->m_AttachedDevice.m_DeviceObject;
    if ( m_DeviceObject )
      ObfReferenceObject(m_DeviceBase->m_AttachedDevice.m_DeviceObject);
    else
      m_DeviceObject = IoGetAttachedDeviceReference(m_DeviceBase->m_DeviceObject.m_DeviceObject);
    Irp = IoAllocateIrp(m_DeviceObject->StackSize, 0);
    v6 = Irp;
    if ( Irp )
    {
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      Irp->IoStatus.Status = -1073741637;
      Event.m_Event.m_DbgFlagIsInitialized = 0;
      CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
      *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 2075;
      CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (__int64)p_m_SurpriseRemoveAndReenumerateSelfInterface;
      CurrentStackLocation[-1].Parameters.Create.Options = 65576;
      CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)&GUID_REENUMERATE_SELF_INTERFACE_STANDARD;
      KeInitializeEvent(&Event.m_Event.m_Event, SynchronizationEvent, 0);
      v8 = v6->Tail.Overlay.CurrentStackLocation;
      Event.m_Event.m_DbgFlagIsInitialized = 1;
      v8[-1].CompletionRoutine = FxIrp::_IrpSynchronousCompletion;
      v8[-1].Context = &Event;
      v8[-1].Control = -32;
      if ( IofCallDriver(m_DeviceObject, v6) == 259 )
        FxCREvent::EnterCRAndWaitAndLeave(&Event);
      IoFreeIrp(v6);
    }
    ObfDereferenceObject(m_DeviceObject);
  }
}
