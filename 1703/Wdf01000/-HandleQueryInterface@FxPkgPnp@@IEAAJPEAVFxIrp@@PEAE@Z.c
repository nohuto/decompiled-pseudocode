/*
 * XREFs of ?HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z @ 0x1C0026E00
 * Callers:
 *     ?_PnpQueryInterface@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0037940 (-_PnpQueryInterface@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?_PnpQueryInterface@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0038FB0 (-_PnpQueryInterface@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1C001EE5C (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     ?SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C002C24C (-SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     memmove @ 0x1C0040140 (memmove.c)
 *     ?HandleQueryInterfaceForPowerThread@FxPkgPnp@@AEAAJPEAVFxIrp@@PEAE@Z @ 0x1C009B334 (-HandleQueryInterfaceForPowerThread@FxPkgPnp@@AEAAJPEAVFxIrp@@PEAE@Z.c)
 *     ?PnpPassThroughQI@@YAJPEAVFxDevice@@PEAVFxIrp@@@Z @ 0x1C009BD28 (-PnpPassThroughQI@@YAJPEAVFxDevice@@PEAVFxIrp@@@Z.c)
 */

int __fastcall FxPkgPnp::HandleQueryInterface(FxPkgPnp *this, FxIrp *Irp, unsigned __int8 *CompleteRequest)
{
  _IRP *m_Irp; // rax
  _SINGLE_LIST_ENTRY *v4; // rbx
  _SINGLE_LIST_ENTRY *v8; // r12
  _LARGE_INTEGER v9; // rsi
  _IO_SECURITY_CONTEXT *SecurityContext; // rdi
  int Status; // r14d
  _SINGLE_LIST_ENTRY *Next; // rdi
  _SINGLE_LIST_ENTRY *v13; // rsi
  char v14; // di
  _IO_SECURITY_CONTEXT *v16; // rdx
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int64 v18; // rcx
  void (__fastcall *v19)(_QWORD, _IO_SECURITY_CONTEXT *); // rax
  __int64 v20; // rcx
  _IO_STACK_LOCATION *v21; // rcx
  int v22; // eax
  unsigned __int16 *v23; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _LARGE_INTEGER ByteOffset; // [rsp+78h] [rbp+10h]
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // [rsp+88h] [rbp+20h]

  m_Irp = Irp->m_Irp;
  v4 = 0LL;
  *CompleteRequest = 0;
  Parameters = 0LL;
  v8 = 0LL;
  v9.QuadPart = 0LL;
  SecurityContext = m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( RtlCompareMemory(SecurityContext, &FxPkgPnp::GUID_POWER_THREAD_INTERFACE, 0x10uLL) != 16 )
  {
    if ( RtlCompareMemory(SecurityContext, &GUID_REENUMERATE_SELF_INTERFACE_STANDARD, 0x10uLL) == 16
      && FxDevice::IsPdo(this->m_Device) )
    {
      return FxPkgPdo::HandleQueryInterfaceForReenumerate((FxPkgPdo *)this, Irp, CompleteRequest);
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
        v13 = Next - 5;
        if ( RtlCompareMemory(
               Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext,
               &Next[-5],
               0x10uLL) == 16 )
          break;
        Next = Next->Next;
        if ( !Next )
        {
          v9.QuadPart = 0LL;
          goto LABEL_9;
        }
      }
      v23 = (unsigned __int16 *)v13[2].Next;
      CurrentStackLocation = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
      ByteOffset = CurrentStackLocation->Parameters.Read.ByteOffset;
      Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
      if ( !v23 )
        goto LABEL_31;
      if ( *v23 <= CurrentStackLocation->Parameters.QueryInterface.Size
        && v23[1] <= CurrentStackLocation->Parameters.QueryInterface.Version )
      {
        if ( !LOBYTE(v13[6].Next) )
          memmove(CurrentStackLocation->Parameters.SetFile.FileObject, v23, *v23);
LABEL_31:
        v4 = v13[4].Next;
        v8 = Next - 5;
        v14 = BYTE1(v13[6].Next);
        Status = 0;
        v9 = ByteOffset;
LABEL_10:
        this->m_QueryInterfaceLock.m_OwningThread = 0LL;
        KeSetEvent(&this->m_QueryInterfaceLock.m_Event.m_Event, 0, 0);
        KeLeaveCriticalRegion();
        if ( Status >= 0 )
        {
          if ( !v8 )
            return Status;
          v16 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
          m_DeviceBase = this->m_DeviceBase;
          if ( m_DeviceBase->m_ObjectSize )
            v18 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
          else
            v18 = 0LL;
          if ( v4 )
          {
            Status = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v4)(
                       v18,
                       v16,
                       (_LARGE_INTEGER)v9.QuadPart,
                       Parameters);
            if ( (int)(Status + 0x80000000) >= 0 && Status != -1073741637 )
              goto $Done_19;
          }
          else
          {
            Status = 0;
          }
          if ( v14 )
          {
            v22 = PnpPassThroughQI(this->m_Device, Irp);
          }
          else
          {
            v19 = *(void (__fastcall **)(_QWORD, _IO_SECURITY_CONTEXT *))(v9.QuadPart + 16);
            if ( v19 )
              v19(*(_QWORD *)(v9.QuadPart + 8), v16);
            v20 = *(_QWORD *)&this->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
            if ( v20 && *(_WORD *)(v20 + 8) == 4354 )
              goto $Done_19;
            Irp->m_Irp->IoStatus.Status = Status;
            v21 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
            *(_OWORD *)&v21[-1].MajorFunction = *(_OWORD *)&v21->MajorFunction;
            *(_OWORD *)&v21[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&v21->Parameters.QueryFile.FileInformationClass;
            *(_OWORD *)(&v21[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&v21->Parameters.QueryDeviceRelations
                                                                                  + 6);
            v21[-1].FileObject = v21->FileObject;
            v21[-1].Control = 0;
            v22 = FxIrp::SendIrpSynchronously(Irp, this->m_DeviceBase->m_AttachedDevice.m_DeviceObject);
          }
          Status = v22;
        }
$Done_19:
        if ( v8 )
          *CompleteRequest = 1;
        return Status;
      }
      Status = -1073741306;
      v9 = CurrentStackLocation->Parameters.Read.ByteOffset;
    }
LABEL_9:
    v14 = 0;
    goto LABEL_10;
  }
  return FxPkgPnp::HandleQueryInterfaceForPowerThread(this, Irp, CompleteRequest);
}
