/*
 * XREFs of ?QueryForD3ColdInterface@FxPkgPnp@@QEAAXXZ @ 0x1C0024368
 * Callers:
 *     ?Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C00266D0 (-Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     memset @ 0x1C0040480 (memset.c)
 */

void __fastcall FxPkgPnp::QueryForD3ColdInterface(FxPkgPnp *this)
{
  _IRP *v1; // rbx
  FxDeviceBase *m_DeviceBase; // rax
  _DEVICE_OBJECT *_a1; // rsi
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  _DEVICE_OBJECT *v6; // rbp
  PIRP Irp; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v9; // rax
  NTSTATUS Status; // eax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF
  char v13; // [rsp+48h] [rbp-20h]

  v1 = 0LL;
  if ( !this->m_D3ColdInterface.InterfaceDereference
    && !this->m_D3ColdInterface.GetIdleWakeInfo
    && !this->m_D3ColdInterface.SetD3ColdSupport )
  {
    m_DeviceBase = this->m_DeviceBase;
    _a1 = m_DeviceBase->m_PhysicalDevice.m_DeviceObject;
    if ( _a1 )
    {
      AttachedDeviceReference = IoGetAttachedDeviceReference(m_DeviceBase->m_PhysicalDevice.m_DeviceObject);
      v6 = AttachedDeviceReference;
      if ( AttachedDeviceReference )
      {
        Irp = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
        v1 = Irp;
        if ( Irp )
        {
          Irp->IoStatus.Status = -1073741637;
          memset(&Irp->Tail.Overlay.CurrentStackLocation[-1], 0, sizeof(Irp->Tail.Overlay.CurrentStackLocation[-1]));
          CurrentStackLocation = v1->Tail.Overlay.CurrentStackLocation;
          v13 = 0;
          CurrentStackLocation[-1].MajorFunction = 27;
          v1->Tail.Overlay.CurrentStackLocation[-1].MinorFunction = 8;
          v1->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)&GUID_D3COLD_SUPPORT_INTERFACE;
          v1->Tail.Overlay.CurrentStackLocation[-1].Parameters.QueryInterface.Version = 1;
          v1->Tail.Overlay.CurrentStackLocation[-1].Parameters.QueryInterface.Size = 72;
          v1->Tail.Overlay.CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
          v1->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (__int64)&this->m_D3ColdInterface;
          KeInitializeEvent(&Event, SynchronizationEvent, 0);
          v13 = 1;
          v9 = (__int64)&v1->Tail.Overlay.CurrentStackLocation[-1];
          *(_QWORD *)(v9 + 56) = FxIrp::_IrpSynchronousCompletion;
          *(_QWORD *)(v9 + 64) = &Event;
          *(_BYTE *)(v9 + 3) = -32;
          Status = IofCallDriver(v6, v1);
          if ( Status == 259 )
          {
            KeEnterCriticalRegion();
            KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            KeLeaveCriticalRegion();
            Status = v1->IoStatus.Status;
          }
          if ( Status < 0 )
          {
            m_Globals = this->m_Globals;
            if ( m_Globals->FxVerboseOn )
              WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0xFu, WPP_FxPkgPnpKM_cpp_Traceguids, _a1);
            memset(&this->m_D3ColdInterface, 0, sizeof(this->m_D3ColdInterface));
          }
        }
        else
        {
          WPP_IFR_SF_q(this->m_Globals, 2u, 0xCu, 0xEu, WPP_FxPkgPnpKM_cpp_Traceguids, _a1);
        }
      }
      ObfDereferenceObject(v6);
      if ( v1 )
        IoFreeIrp(v1);
    }
  }
}
