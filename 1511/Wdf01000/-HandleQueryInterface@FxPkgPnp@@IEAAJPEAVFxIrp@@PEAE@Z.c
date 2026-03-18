/*
 * XREFs of ?HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z @ 0x1C0016A00
 * Callers:
 *     ?_PnpQueryInterface@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C002DB80 (-_PnpQueryInterface@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?_PnpQueryInterface@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0031400 (-_PnpQueryInterface@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1C001AD94 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     ?SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0025CE0 (-SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     memmove @ 0x1C0036900 (memmove.c)
 *     ?HandleQueryInterfaceForPowerThread@FxPkgPnp@@AEAAJPEAVFxIrp@@PEAE@Z @ 0x1C00888A4 (-HandleQueryInterfaceForPowerThread@FxPkgPnp@@AEAAJPEAVFxIrp@@PEAE@Z.c)
 *     ?PnpPassThroughQI@@YAJPEAVFxDevice@@PEAVFxIrp@@@Z @ 0x1C008926C (-PnpPassThroughQI@@YAJPEAVFxDevice@@PEAVFxIrp@@@Z.c)
 */

int __fastcall FxPkgPnp::HandleQueryInterface(FxPkgPnp *this, FxIrp *Irp, unsigned __int8 *CompleteRequest)
{
  _IRP *m_Irp; // rax
  _SINGLE_LIST_ENTRY *v4; // rbx
  unsigned __int8 *v5; // r13
  _SINGLE_LIST_ENTRY *v8; // r12
  _IO_SECURITY_CONTEXT *SecurityContext; // rdi
  int Status; // r14d
  _SINGLE_LIST_ENTRY *Next; // rsi
  _SINGLE_LIST_ENTRY *v12; // r13
  _QWORD *QuadPart; // rsi
  _IO_SECURITY_CONTEXT *v15; // rdx
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int64 v17; // rcx
  void (__fastcall *v18)(_QWORD, _IO_SECURITY_CONTEXT *); // rax
  __int64 v19; // rcx
  _IO_STACK_LOCATION *v20; // rcx
  int v21; // eax
  unsigned __int16 *v22; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  char v24; // al
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // [rsp+30h] [rbp-48h]
  char v26; // [rsp+88h] [rbp+10h]

  m_Irp = Irp->m_Irp;
  v4 = 0LL;
  Parameters = 0LL;
  v5 = CompleteRequest;
  *CompleteRequest = 0;
  v26 = 0;
  v8 = 0LL;
  SecurityContext = m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( RtlCompareMemory(SecurityContext, &FxPkgPnp::GUID_POWER_THREAD_INTERFACE, 0x10uLL) != 16 )
  {
    if ( RtlCompareMemory(SecurityContext, &GUID_REENUMERATE_SELF_INTERFACE_STANDARD, 0x10uLL) == 16
      && FxDevice::IsPdo(this->m_Device) )
    {
      return FxPkgPdo::HandleQueryInterfaceForReenumerate((FxPkgPdo *)this, Irp, v5);
    }
    Status = Irp->m_Irp->IoStatus.Status;
    KeEnterCriticalRegion();
    if ( KeWaitForSingleObject(&this->m_QueryInterfaceLock, Executive, 0, 0, 0LL) == 258 )
      KeLeaveCriticalRegion();
    else
      this->m_QueryInterfaceLock.m_OwningThread = KeGetCurrentThread();
    Next = this->m_QueryInterfaceHead.Next;
    if ( !Next )
    {
LABEL_9:
      QuadPart = 0LL;
      goto LABEL_10;
    }
    while ( 1 )
    {
      v12 = Next - 5;
      if ( RtlCompareMemory(
             Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext,
             &Next[-5],
             0x10uLL) == 16 )
        break;
      Next = Next->Next;
      if ( !Next )
      {
        v5 = CompleteRequest;
        goto LABEL_9;
      }
    }
    v22 = (unsigned __int16 *)v12[2].Next;
    CurrentStackLocation = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
    QuadPart = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
    if ( v22 )
    {
      if ( *v22 > CurrentStackLocation->Parameters.QueryInterface.Size
        || v22[1] > CurrentStackLocation->Parameters.QueryInterface.Version )
      {
        v5 = CompleteRequest;
        Status = -1073741306;
LABEL_10:
        this->m_QueryInterfaceLock.m_OwningThread = 0LL;
        KeSetEvent(&this->m_QueryInterfaceLock.m_Event.m_Event, 0, 0);
        KeLeaveCriticalRegion();
        if ( Status >= 0 )
        {
          if ( !v8 )
            return Status;
          v15 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
          m_DeviceBase = this->m_DeviceBase;
          if ( m_DeviceBase->m_ObjectSize )
            v17 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
          else
            v17 = 0LL;
          if ( v4 )
          {
            Status = ((__int64 (__fastcall *)(unsigned __int64, _IO_SECURITY_CONTEXT *, _QWORD *, _NAMED_PIPE_CREATE_PARAMETERS *))v4)(
                       v17,
                       v15,
                       QuadPart,
                       Parameters);
            if ( (int)(Status + 0x80000000) >= 0 && Status != -1073741637 )
              goto $Done_8;
          }
          else
          {
            Status = 0;
          }
          if ( v26 )
          {
            v21 = PnpPassThroughQI(this->m_Device, Irp);
          }
          else
          {
            v18 = (void (__fastcall *)(_QWORD, _IO_SECURITY_CONTEXT *))QuadPart[2];
            if ( v18 )
              v18(QuadPart[1], v15);
            v19 = *(_QWORD *)&this->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
            if ( v19 && *(_WORD *)(v19 + 8) == 4354 )
              goto $Done_8;
            Irp->m_Irp->IoStatus.Status = Status;
            v20 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
            *(_OWORD *)&v20[-1].MajorFunction = *(_OWORD *)&v20->MajorFunction;
            *(_OWORD *)&v20[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&v20->Parameters.QueryFile.FileInformationClass;
            *(_OWORD *)(&v20[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&v20->Parameters.QueryDeviceRelations
                                                                                  + 6);
            v20[-1].FileObject = v20->FileObject;
            v20[-1].Control = 0;
            v21 = FxIrp::SendIrpSynchronously(Irp, this->m_DeviceBase->m_AttachedDevice.m_DeviceObject);
          }
          Status = v21;
        }
$Done_8:
        if ( v8 )
          *v5 = 1;
        return Status;
      }
      if ( !LOBYTE(v12[6].Next) )
        memmove(QuadPart, v22, *v22);
    }
    v24 = BYTE1(v12[6].Next);
    v8 = v12;
    v4 = v12[4].Next;
    Status = 0;
    v5 = CompleteRequest;
    v26 = v24;
    goto LABEL_10;
  }
  return FxPkgPnp::HandleQueryInterfaceForPowerThread(this, Irp, v5);
}
