/*
 * XREFs of ?DispatchPreprocessedIrp@FxDevice@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C005BEB0
 * Callers:
 *     imp_WdfDeviceWdmDispatchIrp @ 0x1C006CF50 (imp_WdfDeviceWdmDispatchIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxDevice::DispatchPreprocessedIrp(FxDevice *this, _IRP *Irp, _LIST_ENTRY *DispatchContext)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned __int64 v5; // rbx
  _IO_STACK_LOCATION *v8; // rcx
  unsigned __int8 MajorFunction; // al
  NTSTATUS v10; // eax
  unsigned int v11; // ebp
  _IO_STACK_LOCATION *v13; // rax
  _LIST_ENTRY *v14; // r8
  unsigned int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  void *m_PkgIo; // rcx
  _IO_STACK_LOCATION *v19; // rax
  unsigned __int8 v20; // bp
  unsigned __int8 MinorFunction; // r15
  unsigned int v22; // eax
  unsigned int v23; // ebx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // ecx

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  --Irp->CurrentLocation;
  v5 = 0LL;
  v8 = CurrentStackLocation - 1;
  Irp->Tail.Overlay.CurrentStackLocation = CurrentStackLocation - 1;
  MajorFunction = CurrentStackLocation[-1].MajorFunction;
  if ( MajorFunction >= 0x16u && (MajorFunction <= 0x17u || MajorFunction == 27 && v8->MinorFunction != 2) )
  {
    v10 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)&this->m_DeviceObject.m_DeviceObject[1], Irp, &a5, 1u, 0x20u);
    v11 = v10;
    if ( v10 < 0 )
    {
      Irp->IoStatus.Status = v10;
      Irp->IoStatus.Information = 0LL;
      IofCompleteRequest(Irp, 0);
      return v11;
    }
  }
  if ( DispatchContext != &this->m_PreprocessInfoListHead )
  {
    v13 = Irp->Tail.Overlay.CurrentStackLocation;
    while ( 1 )
    {
      v14 = DispatchContext;
      DispatchContext = DispatchContext->Flink;
      if ( *((_QWORD *)&v14[1].Flink + 3 * v13->MajorFunction) )
        break;
LABEL_14:
      if ( DispatchContext == &this->m_PreprocessInfoListHead )
        goto LABEL_15;
    }
    v15 = *((_DWORD *)&v14[1].Blink + 6 * v13->MajorFunction);
    if ( v15 )
    {
      v16 = 0;
      while ( *(_BYTE *)(v16 + *((_QWORD *)&v14[2].Flink + 3 * v13->MajorFunction)) != v13->MinorFunction )
      {
        if ( ++v16 >= v15 )
          goto LABEL_14;
      }
    }
    v19 = Irp->Tail.Overlay.CurrentStackLocation;
    v20 = v19->MajorFunction;
    MinorFunction = v19->MinorFunction;
    if ( LOBYTE(v14[43].Flink) )
    {
      if ( this->m_ObjectSize )
        v5 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
      v22 = (*((__int64 (__fastcall **)(unsigned __int64, _IRP *, _LIST_ENTRY *))&v14[1].Flink + 3 * v20))(
              v5,
              Irp,
              DispatchContext);
    }
    else
    {
      if ( this->m_ObjectSize )
        v5 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
      v22 = (*((__int64 (__fastcall **)(unsigned __int64, _IRP *))&v14[1].Flink + 3 * v20))(v5, Irp);
    }
    v23 = v22;
    if ( v20 >= 0x16u && (v20 <= 0x17u || v20 == 27 && MinorFunction != 2) )
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&this->m_DeviceObject.m_DeviceObject[1], Irp, 0x20u);
    return v23;
  }
LABEL_15:
  v17 = Irp->Tail.Overlay.CurrentStackLocation->MajorFunction;
  if ( v17 <= 0x10 )
  {
    if ( v17 != 16 && Irp->Tail.Overlay.CurrentStackLocation->MajorFunction && v17 != 2 )
    {
      if ( Irp->Tail.Overlay.CurrentStackLocation->MajorFunction > 2u
        && (Irp->Tail.Overlay.CurrentStackLocation->MajorFunction <= 4u || v17 - 14 <= 1) )
      {
        m_PkgIo = this->m_PkgIo;
        return (*(unsigned int (__fastcall **)(void *, _IRP *))(*(_QWORD *)m_PkgIo + 64LL))(m_PkgIo, Irp);
      }
LABEL_40:
      m_PkgIo = this->m_PkgDefault;
      return (*(unsigned int (__fastcall **)(void *, _IRP *))(*(_QWORD *)m_PkgIo + 64LL))(m_PkgIo, Irp);
    }
LABEL_42:
    m_PkgIo = this->m_PkgGeneral;
    return (*(unsigned int (__fastcall **)(void *, _IRP *))(*(_QWORD *)m_PkgIo + 64LL))(m_PkgIo, Irp);
  }
  v24 = v17 - 18;
  if ( !v24 )
    goto LABEL_42;
  v25 = v24 - 4;
  if ( v25 )
  {
    v26 = v25 - 1;
    if ( !v26 )
    {
      m_PkgIo = this->m_PkgWmi;
      return (*(unsigned int (__fastcall **)(void *, _IRP *))(*(_QWORD *)m_PkgIo + 64LL))(m_PkgIo, Irp);
    }
    if ( v26 != 4 )
      goto LABEL_40;
  }
  m_PkgIo = this->m_PkgPnp;
  if ( !m_PkgIo )
    goto LABEL_40;
  return (*(unsigned int (__fastcall **)(void *, _IRP *))(*(_QWORD *)m_PkgIo + 64LL))(m_PkgIo, Irp);
}
