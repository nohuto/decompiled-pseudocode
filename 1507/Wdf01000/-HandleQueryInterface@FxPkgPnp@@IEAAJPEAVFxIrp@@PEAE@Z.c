/*
 * XREFs of ?HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z @ 0x1C001BD10
 * Callers:
 *     ?_PnpQueryInterface@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C001CFE0 (-_PnpQueryInterface@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?_PnpQueryInterface@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C001E6D0 (-_PnpQueryInterface@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x1C00154DC (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     ?PnpPassThroughQI@@YAJPEAVFxDevice@@PEAVFxIrp@@@Z @ 0x1C002F254 (-PnpPassThroughQI@@YAJPEAVFxDevice@@PEAVFxIrp@@@Z.c)
 *     memmove @ 0x1C0033080 (memmove.c)
 *     ?HandleQueryInterfaceForPowerThread@FxPkgPnp@@AEAAJPEAVFxIrp@@PEAE@Z @ 0x1C009DB54 (-HandleQueryInterfaceForPowerThread@FxPkgPnp@@AEAAJPEAVFxIrp@@PEAE@Z.c)
 */

int __fastcall FxPkgPnp::HandleQueryInterface(FxPkgPnp *this, FxIrp *Irp, unsigned __int8 *CompleteRequest)
{
  _SINGLE_LIST_ENTRY *v4; // rbp
  _SINGLE_LIST_ENTRY *v5; // rbx
  _IO_SECURITY_CONTEXT *SecurityContext; // rdi
  int Status; // r12d
  _SINGLE_LIST_ENTRY *Next; // r14
  _SINGLE_LIST_ENTRY *v11; // rdi
  char v12; // r14
  _IO_SECURITY_CONTEXT *v14; // rdx
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int64 v16; // rcx
  void (__fastcall *v17)(_QWORD, _IO_SECURITY_CONTEXT *); // rax
  __int64 v18; // rcx
  _IRP *m_Irp; // rax
  _IO_STACK_LOCATION *v20; // rcx
  _DEVICE_OBJECT *m_DeviceObject; // rbx
  _IRP *v22; // rax
  _IO_STACK_LOCATION *v23; // rdx
  unsigned __int16 *v24; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 v26; // rcx
  FxCREvent Event; // [rsp+30h] [rbp-58h] BYREF
  _LARGE_INTEGER ByteOffset; // [rsp+98h] [rbp+10h]
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // [rsp+A0h] [rbp+18h]

  *CompleteRequest = 0;
  v4 = 0LL;
  v5 = 0LL;
  ByteOffset.QuadPart = 0LL;
  Parameters = 0LL;
  SecurityContext = Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( RtlCompareMemory(SecurityContext, &FxPkgPnp::GUID_POWER_THREAD_INTERFACE, 0x10uLL) != 16 )
  {
    if ( RtlCompareMemory(SecurityContext, &GUID_REENUMERATE_SELF_INTERFACE_STANDARD, 0x10uLL) == 16 )
    {
      v26 = *(_QWORD *)&this->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
      if ( v26 )
      {
        if ( *(_WORD *)(v26 + 8) == 4354 )
          return FxPkgPdo::HandleQueryInterfaceForReenumerate((FxPkgPdo *)this, Irp, CompleteRequest);
      }
    }
    Status = Irp->m_Irp->IoStatus.Status;
    KeEnterCriticalRegion();
    if ( KeWaitForSingleObject(&this->m_QueryInterfaceLock, Executive, 0, 0, 0LL) == 258 )
      KeLeaveCriticalRegion();
    else
      this->m_QueryInterfaceLock.m_OwningThread = KeGetCurrentThread();
    Next = this->m_QueryInterfaceHead.Next;
    if ( Next )
    {
      while ( 1 )
      {
        v11 = Next - 5;
        if ( RtlCompareMemory(
               Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext,
               &Next[-5],
               0x10uLL) == 16 )
          break;
        Next = Next->Next;
        if ( !Next )
          goto LABEL_8;
      }
      v24 = (unsigned __int16 *)v11[2].Next;
      CurrentStackLocation = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
      ByteOffset = CurrentStackLocation->Parameters.Read.ByteOffset;
      Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
      if ( !v24 )
        goto LABEL_30;
      if ( *v24 <= CurrentStackLocation->Parameters.QueryInterface.Size
        && v24[1] <= CurrentStackLocation->Parameters.QueryInterface.Version )
      {
        if ( !LOBYTE(v11[6].Next) )
          memmove(CurrentStackLocation->Parameters.SetFile.FileObject, v24, *v24);
LABEL_30:
        v5 = v11[4].Next;
        v4 = Next - 5;
        v12 = BYTE1(v11[6].Next);
        Status = 0;
LABEL_9:
        this->m_QueryInterfaceLock.m_OwningThread = 0LL;
        KeSetEvent(&this->m_QueryInterfaceLock.m_Event.m_Event, 0, 0);
        KeLeaveCriticalRegion();
        if ( Status < 0 )
        {
$Done_11:
          if ( v4 )
            *CompleteRequest = 1;
          return Status;
        }
        if ( !v4 )
          return Status;
        v14 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
        m_DeviceBase = this->m_DeviceBase;
        if ( m_DeviceBase->m_ObjectSize )
          v16 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
        else
          v16 = 0LL;
        if ( v5 )
        {
          Status = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v5)(
                     v16,
                     v14,
                     (_LARGE_INTEGER)ByteOffset.QuadPart,
                     Parameters);
          if ( (int)(Status + 0x80000000) >= 0 && Status != -1073741637 )
            goto $Done_11;
        }
        else
        {
          Status = 0;
        }
        if ( v12 )
        {
          Status = PnpPassThroughQI(this->m_Device, Irp);
        }
        else
        {
          v17 = *(void (__fastcall **)(_QWORD, _IO_SECURITY_CONTEXT *))(ByteOffset.QuadPart + 16);
          if ( v17 )
            v17(*(_QWORD *)(ByteOffset.QuadPart + 8), v14);
          v18 = *(_QWORD *)&this->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
          if ( !v18 || *(_WORD *)(v18 + 8) != 4354 )
          {
            m_Irp = Irp->m_Irp;
            Event.m_Event.m_DbgFlagIsInitialized = 0;
            m_Irp->IoStatus.Status = Status;
            v20 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
            *(_OWORD *)&v20[-1].MajorFunction = *(_OWORD *)&v20->MajorFunction;
            *(_OWORD *)&v20[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&v20->Parameters.QueryFile.FileInformationClass;
            *(_OWORD *)(&v20[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&v20->Parameters.QueryDeviceRelations
                                                                                  + 6);
            v20[-1].FileObject = v20->FileObject;
            v20[-1].Control = 0;
            m_DeviceObject = this->m_DeviceBase->m_AttachedDevice.m_DeviceObject;
            KeInitializeEvent(&Event.m_Event.m_Event, SynchronizationEvent, 0);
            v22 = Irp->m_Irp;
            Event.m_Event.m_DbgFlagIsInitialized = 1;
            v23 = v22->Tail.Overlay.CurrentStackLocation;
            v23[-1].CompletionRoutine = FxIrp::_IrpSynchronousCompletion;
            v23[-1].Context = &Event;
            v23[-1].Control = -32;
            Status = IofCallDriver(m_DeviceObject, Irp->m_Irp);
            if ( Status == 259 )
            {
              FxCREvent::EnterCRAndWaitAndLeave(&Event);
              Status = Irp->m_Irp->IoStatus.Status;
            }
          }
        }
        goto $Done_11;
      }
      Status = -1073741306;
    }
LABEL_8:
    v12 = 0;
    goto LABEL_9;
  }
  return FxPkgPnp::HandleQueryInterfaceForPowerThread(this, Irp, CompleteRequest);
}
