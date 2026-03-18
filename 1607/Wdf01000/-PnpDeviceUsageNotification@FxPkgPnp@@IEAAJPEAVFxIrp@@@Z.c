/*
 * XREFs of ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C00970C0
 * Callers:
 *     ?_PnpDeviceUsageNotification@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C0098010 (-_PnpDeviceUsageNotification@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C000A170 (WPP_IFR_SF_d.c)
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEAD@Z @ 0x1C000E4C0 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEAD@Z.c)
 *     WPP_IFR_SF_ @ 0x1C00186F0 (WPP_IFR_SF_.c)
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1C001E8F4 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0022838 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0022880 (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEAD@Z @ 0x1C0023B60 (-IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEAD@Z.c)
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C0027938 (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C002B42C (-SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?MxHasEnoughRemainingThreadStack@Mx@@SAEXZ @ 0x1C002C3EC (-MxHasEnoughRemainingThreadStack@Mx@@SAEXZ.c)
 *     ?Allocate@MxWorkItem@@QEAAJPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C002F4F8 (-Allocate@MxWorkItem@@QEAAJPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 *     ?Free@MxWorkItem@@QEAAXXZ @ 0x1C002F524 (-Free@MxWorkItem@@QEAAXXZ.c)
 *     WPP_IFR_SF_Dd @ 0x1C0038864 (WPP_IFR_SF_Dd.c)
 *     ??1FxAutoIrp@@QEAA@XZ @ 0x1C00643D8 (--1FxAutoIrp@@QEAA@XZ.c)
 *     WPP_IFR_SF_qddd @ 0x1C00651D0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qqddd @ 0x1C007C8B8 (WPP_IFR_SF_qqddd.c)
 *     ?CommitUsageNotification@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@K@Z @ 0x1C00969EC (-CommitUsageNotification@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@K@Z.c)
 *     ?RevertUsageNotificationFlags@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@EK@Z @ 0x1C0097CA0 (-RevertUsageNotificationFlags@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@EK@Z.c)
 *     ?SetUsageNotificationFlags@FxPkgPnp@@IEAAKW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z @ 0x1C0097E88 (-SetUsageNotificationFlags@FxPkgPnp@@IEAAKW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z.c)
 *     ?_UsageToSpecialType@FxPkgPnp@@KA?AW4_WDF_SPECIAL_FILE_TYPE@@W4_DEVICE_USAGE_NOTIFICATION_TYPE@@@Z @ 0x1C00982F8 (-_UsageToSpecialType@FxPkgPnp@@KA-AW4_WDF_SPECIAL_FILE_TYPE@@W4_DEVICE_USAGE_NOTIFICATION_TYPE@@.c)
 *     WPP_IFR_SF_DDDDDD @ 0x1C00983C8 (WPP_IFR_SF_DDDDDD.c)
 *     ?SendDeviceUsageNotification@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@PEAVMxWorkItem@@1E@Z @ 0x1C009BAB8 (-SendDeviceUsageNotification@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@PEAVMxWorkItem@@1E@Z.c)
 *     ?GetNextEntry@FxRelatedDeviceList@@QEAAPEAVFxRelatedDevice@@PEAV2@@Z @ 0x1C009E7CC (-GetNextEntry@FxRelatedDeviceList@@QEAAPEAVFxRelatedDevice@@PEAV2@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PnpDeviceUsageNotification(FxPkgPnp *this, FxIrp *Irp)
{
  FxRelatedDevice *v2; // r13
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  int v6; // edi
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _DEVICE_USAGE_NOTIFICATION_TYPE _a5; // r14d
  unsigned __int8 Lock; // r12
  _FX_DRIVER_GLOBALS *v10; // rcx
  unsigned __int8 v11; // al
  _DEVICE_OBJECT **v12; // r8
  int v13; // eax
  FxDeviceBase *m_DeviceBase; // rcx
  _DEVICE_OBJECT *m_DeviceObject; // rdx
  const void *v16; // rcx
  unsigned int v17; // r15d
  FxDevice *m_Device; // rcx
  __int64 v19; // r8
  _IRP *v20; // rax
  FxDeviceBase *v21; // rcx
  const void *v22; // rcx
  _FX_DRIVER_GLOBALS *v23; // rcx
  FxRelatedDeviceList *m_UsageDependentDeviceList; // rax
  CCHAR v25; // r15
  FxRelatedDevice *NextEntry; // rax
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  CCHAR StackSize; // cl
  _IRP *v29; // rax
  FxRelatedDevice *v30; // r15
  FxDeviceBase *v31; // rcx
  const void *v32; // rcx
  FxRelatedDeviceList *v33; // r13
  FxRelatedDevice *v34; // r13
  FxRelatedDevice *v35; // rax
  FxRelatedDevice *v36; // rax
  FxPowerPolicyOwnerSettings *m_Owner; // rcx
  __int64 v38; // r8
  _IO_STACK_LOCATION *v39; // rcx
  FxRelatedDevice *v40; // rax
  _WDF_SPECIAL_FILE_TYPE v41; // eax
  __int64 v42; // r8
  __int64 v43; // r9
  void (__fastcall *v44)(__int64, _QWORD, __int64); // r10
  _WDF_SPECIAL_FILE_TYPE v45; // eax
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 (__fastcall *v48)(__int64, _QWORD, __int64); // r10
  __int64 v49; // r8
  _IO_STACK_LOCATION *v50; // rcx
  unsigned int v51; // r9d
  FxRelatedDevice *v52; // r14
  FxRelatedDevice *v53; // rax
  FxPowerPolicyOwnerSettings *v54; // rcx
  _FX_DRIVER_GLOBALS *v55; // rcx
  _FX_DRIVER_GLOBALS *v56; // rcx
  unsigned int v57; // ebx
  const _GUID *traceGuid; // [rsp+20h] [rbp-49h]
  FxRelatedDeviceList *v60; // [rsp+60h] [rbp-9h]
  FxAutoIrp relatedIrp; // [rsp+68h] [rbp-1h] BYREF
  FxAutoIrp parentIrp; // [rsp+70h] [rbp+7h] BYREF
  MxDeviceObject RelatedDevice; // [rsp+78h] [rbp+Fh] BYREF
  MxDeviceObject dependentDevice; // [rsp+D0h] [rbp+67h] BYREF
  MxDeviceObject OldFlags; // [rsp+D8h] [rbp+6Fh] BYREF
  MxDeviceObject topOfParentStack; // [rsp+E0h] [rbp+77h] BYREF
  MxAutoWorkItem workItem; // [rsp+E8h] [rbp+7Fh] BYREF

  v2 = 0LL;
  relatedIrp.m_Irp = 0LL;
  parentIrp.m_Irp = 0LL;
  topOfParentStack.m_DeviceObject = 0LL;
  workItem.m_WorkItem = 0LL;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0x3Bu, WPP_FxPkgPnp_cpp_Traceguids);
  v6 = 0;
  CurrentStackLocation = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
  _a5 = CurrentStackLocation->Parameters.UsageNotification.Type;
  Lock = CurrentStackLocation->Parameters.SetLock.Lock;
  v10 = this->m_Globals;
  if ( v10->FxVerboseOn )
    WPP_IFR_SF_DDDDDD(
      v10,
      this->m_SpecialSupport[1],
      this->m_SpecialSupport[2],
      this->m_SpecialSupport[0],
      traceGuid,
      _a5,
      Lock,
      this->m_SpecialSupport[0],
      this->m_SpecialSupport[2],
      this->m_SpecialSupport[1],
      this->m_SpecialSupport[3]);
  if ( (unsigned int)(_a5 - 1) <= 3 )
  {
    if ( Lock )
    {
      if ( BYTE1(this->m_DeviceBase[1].m_Globals) )
        goto LABEL_11;
      v11 = this->m_SpecialSupport[_a5 - 1];
    }
    else
    {
      v11 = 1;
    }
    if ( v11 )
    {
LABEL_11:
      if ( !Mx::MxHasEnoughRemainingThreadStack()
        && (FxDevice::IsPdo(this->m_Device) || this->m_UsageDependentDeviceList) )
      {
        v13 = MxWorkItem::Allocate(&workItem, v12[18], v12);
        v6 = v13;
        if ( v13 < 0 )
        {
          m_DeviceBase = this->m_DeviceBase;
          m_DeviceObject = m_DeviceBase->m_DeviceObject.m_DeviceObject;
          if ( m_DeviceBase->m_ObjectSize )
            v16 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v16 = 0LL;
          WPP_IFR_SF_qqddd(
            this->m_Globals,
            (unsigned __int8)m_DeviceObject,
            0xCu,
            0x3Eu,
            WPP_FxPkgPnp_cpp_Traceguids,
            v16,
            m_DeviceObject,
            _a5,
            Lock,
            v13);
          goto LABEL_99;
        }
      }
      v17 = FxPkgPnp::SetUsageNotificationFlags(this, _a5, Lock);
      m_Device = this->m_Device;
      LODWORD(OldFlags.m_DeviceObject) = v17;
      if ( FxDevice::IsPdo(m_Device) )
      {
        topOfParentStack.m_DeviceObject = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(*(_QWORD *)(v19 + 224) + 144LL));
        v20 = IoAllocateIrp(topOfParentStack.m_DeviceObject->StackSize, 0);
        if ( v20 )
        {
          parentIrp.m_Irp = v20;
          v6 = SendDeviceUsageNotification(&topOfParentStack, &parentIrp, &workItem, Irp, 0);
        }
        else
        {
          v6 = -1073741670;
          v21 = this->m_DeviceBase;
          v22 = v21->m_ObjectSize ? (const void *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL) : 0LL;
          WPP_IFR_SF_qqddd(
            this->m_Globals,
            0x9Au,
            0xCu,
            0x3Fu,
            WPP_FxPkgPnp_cpp_Traceguids,
            v22,
            topOfParentStack.m_DeviceObject,
            _a5,
            Lock,
            -1073741670);
        }
        ObfDereferenceObject(topOfParentStack.m_DeviceObject);
        topOfParentStack.m_DeviceObject = 0LL;
        if ( v6 < 0 )
        {
          v23 = this->m_Globals;
          if ( v23->FxVerboseOn )
            WPP_IFR_SF_d(v23, 5u, 0xCu, 0x40u, WPP_FxPkgPnp_cpp_Traceguids, v6);
          FxPkgPnp::RevertUsageNotificationFlags(this, _a5, Lock, v17);
          goto LABEL_99;
        }
      }
      m_UsageDependentDeviceList = this->m_UsageDependentDeviceList;
      v60 = m_UsageDependentDeviceList;
      v25 = 0;
      if ( m_UsageDependentDeviceList )
      {
        FxTransactionedList::LockForEnum(m_UsageDependentDeviceList, this->m_Globals);
        while ( 1 )
        {
          NextEntry = FxRelatedDeviceList::GetNextEntry(this->m_UsageDependentDeviceList, v2);
          v2 = NextEntry;
          if ( !NextEntry )
            break;
          AttachedDeviceReference = IoGetAttachedDeviceReference(NextEntry->m_DeviceObject);
          StackSize = v25;
          if ( AttachedDeviceReference->StackSize > v25 )
            StackSize = AttachedDeviceReference->StackSize;
          v25 = StackSize;
          ObfDereferenceObject(AttachedDeviceReference);
        }
      }
      else
      {
        v60 = 0LL;
      }
      if ( v25 <= 0 )
      {
LABEL_49:
        v30 = 0LL;
      }
      else
      {
        v29 = IoAllocateIrp(v25, 0);
        v30 = 0LL;
        if ( !v29 )
        {
          v6 = -1073741670;
          v31 = this->m_DeviceBase;
          if ( v31->m_ObjectSize )
            v32 = (const void *)((unsigned __int64)v31 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v32 = 0LL;
          WPP_IFR_SF_qddd(this->m_Globals, 0x9Au, 0xCu, 0x41u, WPP_FxPkgPnp_cpp_Traceguids, v32, _a5, Lock, -1073741670);
          v33 = v60;
          goto LABEL_93;
        }
        dependentDevice.m_DeviceObject = 0LL;
        v34 = 0LL;
        relatedIrp.m_Irp = v29;
        while ( 1 )
        {
          v35 = FxRelatedDeviceList::GetNextEntry(this->m_UsageDependentDeviceList, v34);
          v34 = v35;
          if ( !v35 )
            break;
          dependentDevice.m_DeviceObject = v35->m_DeviceObject;
          v6 = SendDeviceUsageNotification(&dependentDevice, &relatedIrp, &workItem, Irp, 0);
          if ( v6 < 0 )
          {
            while ( 1 )
            {
              v36 = FxRelatedDeviceList::GetNextEntry(this->m_UsageDependentDeviceList, v30);
              v30 = v36;
              if ( !v36 || v36 == v34 )
                break;
              dependentDevice.m_DeviceObject = v36->m_DeviceObject;
              SendDeviceUsageNotification(&dependentDevice, &relatedIrp, &workItem, Irp, 1u);
            }
            goto LABEL_49;
          }
        }
      }
      if ( v6 < 0 )
      {
        v33 = v60;
LABEL_93:
        if ( v33 )
          FxTransactionedList::UnlockFromEnum(this->m_UsageDependentDeviceList, this->m_Globals);
        v55 = this->m_Globals;
        if ( v55->FxVerboseOn )
          WPP_IFR_SF_d(v55, 5u, 0xCu, 0x42u, WPP_FxPkgPnp_cpp_Traceguids, v6);
        goto LABEL_99;
      }
      m_Owner = this->m_PowerPolicyMachine.m_Owner;
      LOBYTE(dependentDevice.m_DeviceObject) = 0;
      if ( m_Owner )
      {
        v6 = FxPowerIdleMachine::PowerReferenceWorker(
               &m_Owner->m_PowerIdleMachine,
               1u,
               FxPowerReferenceDefault,
               0LL,
               0,
               0LL);
        if ( v6 < 0 )
        {
          Irp->m_Irp->IoStatus.Status = v6;
LABEL_55:
          if ( v6 < 0 )
            goto LABEL_66;
          if ( Lock && !this->m_HasPowerThread && _a5 != DeviceUsageTypeBoot )
          {
            v6 = this->QueryForPowerThread(this);
            if ( v6 >= 0 )
              goto LABEL_72;
            if ( FxDevice::IsPdo(this->m_Device) )
            {
              topOfParentStack.m_DeviceObject = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(*(_QWORD *)(v38 + 224)
                                                                                               + 144LL));
              SendDeviceUsageNotification(&topOfParentStack, &parentIrp, &workItem, Irp, 1u);
              ObfDereferenceObject(topOfParentStack.m_DeviceObject);
            }
            else
            {
              v39 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
              *(_OWORD *)&v39[-1].MajorFunction = *(_OWORD *)&v39->MajorFunction;
              *(_OWORD *)&v39[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&v39->Parameters.QueryFile.FileInformationClass;
              *(_OWORD *)(&v39[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&v39->Parameters.QueryDeviceRelations
                                                                                    + 6);
              v39[-1].FileObject = v39->FileObject;
              v39[-1].Control = 0;
              Irp->m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.SetLock.Lock = 0;
              Irp->m_Irp->IoStatus.Status = -1073741637;
              FxIrp::SendIrpSynchronously(Irp, this->m_DeviceBase->m_AttachedDevice.m_DeviceObject);
            }
            Irp->m_Irp->IoStatus.Status = v6;
          }
          if ( v6 < 0 )
          {
LABEL_66:
            FxPkgPnp::RevertUsageNotificationFlags(this, _a5, Lock, (unsigned int)OldFlags.m_DeviceObject);
            v33 = v60;
            if ( v60 )
            {
              for ( RelatedDevice.m_DeviceObject = 0LL;
                    ;
                    SendDeviceUsageNotification(&RelatedDevice, &relatedIrp, &workItem, Irp, 1u) )
              {
                v40 = FxRelatedDeviceList::GetNextEntry(this->m_UsageDependentDeviceList, v30);
                v30 = v40;
                if ( !v40 )
                  break;
                RelatedDevice.m_DeviceObject = v40->m_DeviceObject;
              }
              v33 = v60;
            }
LABEL_90:
            if ( LOBYTE(dependentDevice.m_DeviceObject) )
              FxPowerIdleMachine::IoDecrement(&this->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine, 0LL, 0, 0LL);
            goto LABEL_93;
          }
LABEL_72:
          v33 = v60;
          if ( this->m_DeviceUsageNotification.m_Method )
          {
            v41 = FxPkgPnp::_UsageToSpecialType(_a5);
            LOBYTE(v42) = Lock;
            v44(v43, (unsigned int)v41, v42);
          }
          if ( this->m_DeviceUsageNotificationEx.m_Method )
          {
            v45 = FxPkgPnp::_UsageToSpecialType(_a5);
            LOBYTE(v46) = Lock;
            v6 = v48(v47, (unsigned int)v45, v46);
          }
          else
          {
            v6 = 0;
          }
          if ( v6 >= 0 )
          {
            FxPkgPnp::CommitUsageNotification(this, _a5, (__int16)OldFlags.m_DeviceObject);
            v54 = this->m_PowerPolicyMachine.m_Owner;
            if ( v54 && _a5 == DeviceUsageTypeDumpFile )
            {
              if ( Lock )
                FxPowerIdleMachine::PowerReferenceWorker(
                  &v54->m_PowerIdleMachine,
                  0,
                  FxPowerReferenceDefault,
                  0LL,
                  0,
                  0LL);
              else
                FxPowerIdleMachine::IoDecrement(&v54->m_PowerIdleMachine, 0LL, 0, 0LL);
            }
          }
          else
          {
            if ( FxDevice::IsPdo(this->m_Device) )
            {
              topOfParentStack.m_DeviceObject = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(*(_QWORD *)(v49 + 224)
                                                                                               + 144LL));
              SendDeviceUsageNotification(&topOfParentStack, &parentIrp, &workItem, Irp, 1u);
              ObfDereferenceObject(topOfParentStack.m_DeviceObject);
            }
            else
            {
              v50 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
              *(_OWORD *)&v50[-1].MajorFunction = *(_OWORD *)&v50->MajorFunction;
              *(_OWORD *)&v50[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&v50->Parameters.QueryFile.FileInformationClass;
              *(_OWORD *)(&v50[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&v50->Parameters.QueryDeviceRelations
                                                                                    + 6);
              v50[-1].FileObject = v50->FileObject;
              v50[-1].Control = 0;
              Irp->m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.SetLock.Lock = 0;
              Irp->m_Irp->IoStatus.Status = -1073741637;
              FxIrp::SendIrpSynchronously(Irp, this->m_DeviceBase->m_AttachedDevice.m_DeviceObject);
            }
            v51 = (unsigned int)OldFlags.m_DeviceObject;
            Irp->m_Irp->IoStatus.Status = v6;
            FxPkgPnp::RevertUsageNotificationFlags(this, _a5, Lock, v51);
            v52 = 0LL;
            if ( v60 )
            {
              for ( OldFlags.m_DeviceObject = 0LL; ; SendDeviceUsageNotification(
                                                       &OldFlags,
                                                       &relatedIrp,
                                                       &workItem,
                                                       Irp,
                                                       1u) )
              {
                v53 = FxRelatedDeviceList::GetNextEntry(this->m_UsageDependentDeviceList, v52);
                v52 = v53;
                if ( !v53 )
                  break;
                OldFlags.m_DeviceObject = v53->m_DeviceObject;
              }
            }
          }
          goto LABEL_90;
        }
        LOBYTE(dependentDevice.m_DeviceObject) = 1;
      }
      Irp->m_Irp->IoStatus.Status = v6;
      v6 = this->SendIrpSynchronously(this, Irp);
      goto LABEL_55;
    }
  }
  v56 = this->m_Globals;
  v6 = -1073741822;
  if ( v56->FxVerboseOn )
    WPP_IFR_SF_Dd(v56, 5u, 0xCu, 0x3Du, WPP_FxPkgPnp_cpp_Traceguids, _a5, -1073741822);
LABEL_99:
  v57 = FxPkgPnp::CompletePnpRequest(this, Irp, v6);
  MxWorkItem::Free(&workItem);
  FxAutoIrp::~FxAutoIrp(&parentIrp);
  FxAutoIrp::~FxAutoIrp(&relatedIrp);
  return v57;
}
