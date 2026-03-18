/*
 * XREFs of ?PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ @ 0x1C0013380
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z @ 0x1C0009F74 (-BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C00187A0 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C001C3A8 (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?CreateWdmList@FxCmResList@@QEAAPEAU_CM_RESOURCE_LIST@@W4_POOL_TYPE@@@Z @ 0x1C0080FF4 (-CreateWdmList@FxCmResList@@QEAAPEAU_CM_RESOURCE_LIST@@W4_POOL_TYPE@@@Z.c)
 *     ??_GFxFilteredStartContext@@QEAAPEAXI@Z @ 0x1C009FA48 (--_GFxFilteredStartContext@@QEAAPEAXI@Z.c)
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
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  int (__fastcall *v10)(_DEVICE_OBJECT *, _IRP *, void *); // rdi
  FxCmResList *m_Resources; // r8
  unsigned __int64 v13; // r8
  FxCmResList *m_ResourcesRaw; // rdx
  unsigned __int64 v15; // rdx
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int64 v17; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, WDFCMRESLIST__ *, WDFCMRESLIST__ *); // rax
  FxFilteredStartContext *v19; // rax
  unsigned int v20; // edx
  FxCmResList *v21; // rcx
  _CM_RESOURCE_LIST *WdmList; // rax
  FxCmResList *v23; // rcx
  _CM_RESOURCE_LIST *v24; // rax
  _IO_STACK_LOCATION *v25; // rax
  unsigned __int8 v26; // r8
  _LIST_ENTRY *retaddr; // [rsp+68h] [rbp+0h]
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
      goto LABEL_46;
    v8 = FxCmResList::BuildFromWdmList(this->m_Resources, AllocatedResourcesTranslated, 3u);
    if ( v8 < 0 )
      goto LABEL_46;
    m_Resources = this->m_Resources;
    v13 = m_Resources->m_ObjectSize ? (unsigned __int64)m_Resources ^ 0xFFFFFFFFFFFFFFF8uLL : 0LL;
    m_ResourcesRaw = this->m_ResourcesRaw;
    v15 = m_ResourcesRaw->m_ObjectSize ? (unsigned __int64)m_ResourcesRaw ^ 0xFFFFFFFFFFFFFFF8uLL : 0LL;
    m_DeviceBase = this->m_DeviceBase;
    v17 = m_DeviceBase->m_ObjectSize ? (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL : 0LL;
    m_Method = this->m_DeviceRemoveAddedResources.m_Method;
    v8 = m_Method ? m_Method((WDFDEVICE__ *)v17, (WDFCMRESLIST__ *)v15, (WDFCMRESLIST__ *)v13) : 0;
    if ( v8 < 0 )
      goto LABEL_46;
    if ( this->m_ResourcesRaw->m_Changed || this->m_Resources->m_Changed )
    {
      v19 = (FxFilteredStartContext *)FxPoolAllocator(
                                        this->m_Globals,
                                        (_LIST_ENTRY *)&this->m_Globals->FxPoolFrameworks,
                                        ExDefaultNonPagedPoolType,
                                        0x18uLL,
                                        this->m_Globals->Tag,
                                        retaddr);
      v4 = v19;
      if ( v19 )
      {
        v19->ResourcesRaw = 0LL;
        v19->ResourcesTranslated = 0LL;
      }
      else
      {
        v4 = 0LL;
      }
      if ( v4 )
      {
        v4->PkgFdo = this;
        v21 = this->m_ResourcesRaw;
        if ( v21->m_Count )
        {
          WdmList = FxCmResList::CreateWdmList(v21, ExDefaultNonPagedPoolType);
          v4->ResourcesRaw = WdmList;
          if ( !WdmList )
            v8 = -1073741670;
        }
        if ( v8 < 0 )
          goto LABEL_41;
        v23 = this->m_Resources;
        if ( v23->m_Count )
        {
          v24 = FxCmResList::CreateWdmList(v23, ExDefaultNonPagedPoolType);
          v4->ResourcesTranslated = v24;
          if ( !v24 )
            v8 = -1073741670;
        }
        if ( v8 < 0 )
        {
LABEL_41:
          FxFilteredStartContext::`scalar deleting destructor'(v4, v20);
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
LABEL_46:
    WPP_IFR_SF_d(this->m_Globals, 2u, 0xCu, 0x17u, WPP_fxpkgfdo_cpp_Traceguids, v8);
    FxPkgPnp::PnpProcessEvent(this, PnpEventStartDeviceFailed, v26);
    FxPkgPnp::CompletePnpRequest(this, &irp, v8);
    return 0;
  }
  m_DeviceObject = this->m_DeviceBase->m_DeviceObject.m_DeviceObject;
  if ( v3 )
  {
    v10 = FxPkgFdo::_PnpFilteredStartDeviceCompletionRoutine;
    if ( IoSetCompletionRoutineEx(
           m_DeviceObject,
           m_PendingPnPIrp,
           FxPkgFdo::_PnpFilteredStartDeviceCompletionRoutine,
           v4,
           1u,
           1u,
           1u) >= 0 )
      goto LABEL_6;
    v25 = m_PendingPnPIrp->Tail.Overlay.CurrentStackLocation;
    v25[-1].Context = v4;
LABEL_45:
    v25[-1].Control = -32;
    v25[-1].CompletionRoutine = v10;
    goto LABEL_6;
  }
  v10 = FxPkgFdo::_PnpStartDeviceCompletionRoutine;
  if ( IoSetCompletionRoutineEx(
         m_DeviceObject,
         m_PendingPnPIrp,
         FxPkgFdo::_PnpStartDeviceCompletionRoutine,
         this,
         1u,
         1u,
         1u) < 0 )
  {
    v25 = m_PendingPnPIrp->Tail.Overlay.CurrentStackLocation;
    v25[-1].Context = this;
    goto LABEL_45;
  }
LABEL_6:
  IofCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, m_PendingPnPIrp);
  return 0;
}
