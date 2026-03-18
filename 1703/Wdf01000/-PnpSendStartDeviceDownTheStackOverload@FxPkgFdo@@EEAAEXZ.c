/*
 * XREFs of ?PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ @ 0x1C0028FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C000D700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C0023450 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C00276AC (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?SetCompletionRoutineEx@FxIrp@@QEAAXPEAU_DEVICE_OBJECT@@P6AJ0PEAU_IRP@@PEAX@Z2EEE@Z @ 0x1C002C1F8 (-SetCompletionRoutineEx@FxIrp@@QEAAXPEAU_DEVICE_OBJECT@@P6AJ0PEAU_IRP@@PEAX@Z2EEE@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     ?BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z @ 0x1C0065470 (-BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z.c)
 *     ?CreateWdmList@FxCmResList@@QEAAPEAU_CM_RESOURCE_LIST@@W4_POOL_TYPE@@@Z @ 0x1C0085E84 (-CreateWdmList@FxCmResList@@QEAAPEAU_CM_RESOURCE_LIST@@W4_POOL_TYPE@@@Z.c)
 *     ??_GFxFilteredStartContext@@QEAAPEAXI@Z @ 0x1C009D174 (--_GFxFilteredStartContext@@QEAAPEAXI@Z.c)
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
  FxCmResList *m_ResourcesRaw; // rdx
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v14; // r8
  bool v15; // zf
  unsigned __int16 v16; // ax
  unsigned __int16 v17; // r9
  unsigned __int64 v18; // rdx
  int (__fastcall *m_Method)(WDFDEVICE__ *, WDFCMRESLIST__ *, WDFCMRESLIST__ *); // rax
  unsigned __int64 v20; // rcx
  FxFilteredStartContext *v21; // rax
  unsigned int v22; // edx
  FxCmResList *v23; // rcx
  _CM_RESOURCE_LIST *WdmList; // rax
  FxCmResList *v25; // rcx
  _CM_RESOURCE_LIST *v26; // rax
  _IO_STACK_LOCATION *v27; // rax
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
      goto LABEL_40;
    v8 = FxCmResList::BuildFromWdmList(this->m_Resources, AllocatedResourcesTranslated, 3u);
    if ( v8 < 0 )
      goto LABEL_40;
    m_Resources = this->m_Resources;
    m_ResourcesRaw = this->m_ResourcesRaw;
    m_DeviceBase = this->m_DeviceBase;
    m_ObjectSize = m_Resources->m_ObjectSize;
    v14 = (unsigned __int64)m_Resources ^ 0xFFFFFFFFFFFFFFF8uLL;
    v15 = m_ObjectSize == 0;
    v16 = m_ResourcesRaw->m_ObjectSize;
    v17 = m_DeviceBase->m_ObjectSize;
    if ( v15 )
      v14 = 0LL;
    v18 = (unsigned __int64)m_ResourcesRaw ^ 0xFFFFFFFFFFFFFFF8uLL;
    v15 = v16 == 0;
    m_Method = this->m_DeviceRemoveAddedResources.m_Method;
    if ( v15 )
      v18 = 0LL;
    if ( m_Method )
    {
      v20 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !v17 )
        v20 = 0LL;
      v8 = m_Method((WDFDEVICE__ *)v20, (WDFCMRESLIST__ *)v18, (WDFCMRESLIST__ *)v14);
    }
    else
    {
      v8 = 0;
    }
    if ( v8 < 0 )
      goto LABEL_40;
    if ( this->m_ResourcesRaw->m_Changed || this->m_Resources->m_Changed )
    {
      v21 = (FxFilteredStartContext *)FxPoolAllocator(
                                        this->m_Globals,
                                        &this->m_Globals->FxPoolFrameworks,
                                        ExDefaultNonPagedPoolType,
                                        0x18uLL,
                                        this->m_Globals->Tag,
                                        retaddr);
      v4 = v21;
      if ( v21 )
      {
        v21->ResourcesRaw = 0LL;
        v21->ResourcesTranslated = 0LL;
      }
      else
      {
        v4 = 0LL;
      }
      if ( v4 )
      {
        v4->PkgFdo = this;
        v23 = this->m_ResourcesRaw;
        if ( v23->m_Count )
        {
          WdmList = FxCmResList::CreateWdmList(v23, ExDefaultNonPagedPoolType);
          v4->ResourcesRaw = WdmList;
          if ( !WdmList )
            v8 = -1073741670;
        }
        if ( v8 < 0 )
          goto LABEL_38;
        v25 = this->m_Resources;
        if ( v25->m_Count )
        {
          v26 = FxCmResList::CreateWdmList(v25, ExDefaultNonPagedPoolType);
          v4->ResourcesTranslated = v26;
          if ( !v26 )
            v8 = -1073741670;
        }
        if ( v8 < 0 )
        {
LABEL_38:
          FxFilteredStartContext::`scalar deleting destructor'(v4, v22);
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
LABEL_40:
    WPP_IFR_SF_d(this->m_Globals, 2u, 0xCu, 0x17u, WPP_fxpkgfdo_cpp_Traceguids, v8);
    FxPkgPnp::PnpProcessEvent(this, PnpEventStartDeviceFailed, 0);
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
              FxPkgFdo::_PnpStartDeviceCompletionRoutine,
              this,
              1u,
              1u,
              1u) < 0 )
  {
    v27 = m_PendingPnPIrp->Tail.Overlay.CurrentStackLocation;
    v27[-1].CompletionRoutine = FxPkgFdo::_PnpStartDeviceCompletionRoutine;
    v27[-1].Context = this;
    v27[-1].Control = -32;
  }
  IofCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, m_PendingPnPIrp);
  return 0;
}
