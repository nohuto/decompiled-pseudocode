/*
 * XREFs of ?PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ @ 0x1C0018C60
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C0013AF0 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C0017028 (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z @ 0x1C0021DA4 (-BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z.c)
 *     ?SetCompletionRoutineEx@FxIrp@@QEAAXPEAU_DEVICE_OBJECT@@P6AJ0PEAU_IRP@@PEAX@Z2EEE@Z @ 0x1C0025C90 (-SetCompletionRoutineEx@FxIrp@@QEAAXPEAU_DEVICE_OBJECT@@P6AJ0PEAU_IRP@@PEAX@Z2EEE@Z.c)
 *     ?CreateWdmList@FxCmResList@@QEAAPEAU_CM_RESOURCE_LIST@@W4_POOL_TYPE@@@Z @ 0x1C0073A5C (-CreateWdmList@FxCmResList@@QEAAPEAU_CM_RESOURCE_LIST@@W4_POOL_TYPE@@@Z.c)
 *     ??_GFxFilteredStartContext@@QEAAPEAXI@Z @ 0x1C008A798 (--_GFxFilteredStartContext@@QEAAPEAXI@Z.c)
 */

unsigned __int8 __fastcall FxPkgFdo::PnpSendStartDeviceDownTheStackOverload(FxPkgFdo *this)
{
  _IRP *m_PendingPnPIrp; // rbp
  char v3; // r15
  FxFilteredStartContext *v4; // rsi
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _CM_RESOURCE_LIST *AllocatedResources; // rdx
  _CM_RESOURCE_LIST *AllocatedResourcesTranslated; // r14
  int v8; // edi
  FxCmResList *m_Resources; // r8
  unsigned __int64 v11; // r8
  FxCmResList *m_ResourcesRaw; // rdx
  unsigned __int64 v13; // rdx
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int64 v15; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, WDFCMRESLIST__ *, WDFCMRESLIST__ *); // rax
  FxFilteredStartContext *v17; // rax
  unsigned int v18; // edx
  FxCmResList *v19; // rcx
  _CM_RESOURCE_LIST *WdmList; // rax
  FxCmResList *v21; // rcx
  _CM_RESOURCE_LIST *v22; // rax
  _IO_STACK_LOCATION *v23; // rax
  unsigned __int8 v24; // r8
  unsigned __int8 InvokeOnSuccess; // [rsp+20h] [rbp-48h]
  unsigned __int8 InvokeOnError; // [rsp+28h] [rbp-40h]
  BOOLEAN InvokeOnCancel; // [rsp+30h] [rbp-38h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  FxIrp irp; // [rsp+70h] [rbp+8h] BYREF

  m_PendingPnPIrp = this->m_PendingPnPIrp;
  this->m_PendingPnPIrp = 0LL;
  irp.m_Irp = m_PendingPnPIrp;
  v3 = 0;
  v4 = 0LL;
  CurrentStackLocation = m_PendingPnPIrp->Tail.Overlay.CurrentStackLocation;
  AllocatedResources = CurrentStackLocation->Parameters.StartDevice.AllocatedResources;
  AllocatedResourcesTranslated = CurrentStackLocation->Parameters.StartDevice.AllocatedResourcesTranslated;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&CurrentStackLocation->Parameters.QueryFile.FileInformationClass;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.QueryDeviceRelations
                                                                                         + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  if ( this->m_DeviceRemoveAddedResources.m_Method && AllocatedResources && AllocatedResourcesTranslated )
  {
    this->m_ResourcesRaw->m_Changed = 0;
    this->m_Resources->m_Changed = 0;
    v8 = FxCmResList::BuildFromWdmList(this->m_ResourcesRaw, AllocatedResources, 3u);
    if ( v8 < 0 )
      goto LABEL_44;
    v8 = FxCmResList::BuildFromWdmList(this->m_Resources, AllocatedResourcesTranslated, 3u);
    if ( v8 < 0 )
      goto LABEL_44;
    m_Resources = this->m_Resources;
    v11 = m_Resources->m_ObjectSize ? (unsigned __int64)m_Resources ^ 0xFFFFFFFFFFFFFFF8uLL : 0LL;
    m_ResourcesRaw = this->m_ResourcesRaw;
    v13 = m_ResourcesRaw->m_ObjectSize ? (unsigned __int64)m_ResourcesRaw ^ 0xFFFFFFFFFFFFFFF8uLL : 0LL;
    m_DeviceBase = this->m_DeviceBase;
    v15 = m_DeviceBase->m_ObjectSize ? (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL : 0LL;
    m_Method = this->m_DeviceRemoveAddedResources.m_Method;
    v8 = m_Method ? m_Method((WDFDEVICE__ *)v15, (WDFCMRESLIST__ *)v13, (WDFCMRESLIST__ *)v11) : 0;
    if ( v8 < 0 )
      goto LABEL_44;
    if ( this->m_ResourcesRaw->m_Changed || this->m_Resources->m_Changed )
    {
      v17 = (FxFilteredStartContext *)FxPoolAllocator(
                                        this->m_Globals,
                                        &this->m_Globals->FxPoolFrameworks,
                                        ExDefaultNonPagedPoolType,
                                        0x18uLL,
                                        this->m_Globals->Tag,
                                        retaddr);
      v4 = v17;
      if ( v17 )
      {
        v17->ResourcesRaw = 0LL;
        v17->ResourcesTranslated = 0LL;
      }
      else
      {
        v4 = 0LL;
      }
      if ( v4 )
      {
        v4->PkgFdo = this;
        v19 = this->m_ResourcesRaw;
        if ( v19->m_Count )
        {
          WdmList = FxCmResList::CreateWdmList(v19, ExDefaultNonPagedPoolType);
          v4->ResourcesRaw = WdmList;
          if ( !WdmList )
            v8 = -1073741670;
        }
        if ( v8 < 0 )
          goto LABEL_42;
        v21 = this->m_Resources;
        if ( v21->m_Count )
        {
          v22 = FxCmResList::CreateWdmList(v21, ExDefaultNonPagedPoolType);
          v4->ResourcesTranslated = v22;
          if ( !v22 )
            v8 = -1073741670;
        }
        if ( v8 < 0 )
        {
LABEL_42:
          FxFilteredStartContext::`scalar deleting destructor'(v4, v18);
        }
        else
        {
          v3 = 1;
          m_PendingPnPIrp->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)v4->ResourcesRaw;
          m_PendingPnPIrp->Tail.Overlay.CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = (_UNICODE_STRING *)v4->ResourcesTranslated;
        }
      }
    }
  }
  else
  {
    v8 = 0;
  }
  if ( v8 < 0 )
  {
LABEL_44:
    WPP_IFR_SF_d(this->m_Globals, 2u, 0xCu, 0x17u, WPP_fxpkgfdo_cpp_Traceguids, v8);
    FxPkgPnp::PnpProcessEvent(this, PnpEventStartDeviceFailed, v24);
    FxPkgPnp::CompletePnpRequest(this, &irp, v8);
    return 0;
  }
  if ( v3 )
  {
    FxIrp::SetCompletionRoutineEx(
      &irp,
      this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
      FxPkgFdo::_PnpFilteredStartDeviceCompletionRoutine,
      v4,
      InvokeOnSuccess,
      InvokeOnError,
      InvokeOnCancel);
  }
  else if ( IoSetCompletionRoutineEx(
              this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
              m_PendingPnPIrp,
              (PIO_COMPLETION_ROUTINE)FxPkgFdo::_PnpStartDeviceCompletionRoutine,
              this,
              1u,
              1u,
              1u) < 0 )
  {
    v23 = m_PendingPnPIrp->Tail.Overlay.CurrentStackLocation;
    v23[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))FxPkgFdo::_PnpStartDeviceCompletionRoutine;
    v23[-1].Context = this;
    v23[-1].Control = -32;
  }
  IofCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, m_PendingPnPIrp);
  return 0;
}
