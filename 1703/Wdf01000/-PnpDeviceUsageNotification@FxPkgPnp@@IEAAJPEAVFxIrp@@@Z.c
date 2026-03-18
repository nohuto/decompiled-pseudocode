/*
 * XREFs of ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C009B474
 * Callers:
 *     ?_PnpDeviceUsageNotification@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C009C450 (-_PnpDeviceUsageNotification@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z @ 0x1C0004560 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z.c)
 *     WPP_IFR_SF_Dd @ 0x1C0017370 (WPP_IFR_SF_Dd.c)
 *     ?Allocate@MxWorkItem@@QEAAJPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0019334 (-Allocate@MxWorkItem@@QEAAJPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 *     ?Free@MxWorkItem@@QEAAXXZ @ 0x1C0019364 (-Free@MxWorkItem@@QEAAXXZ.c)
 *     WPP_IFR_SF_ @ 0x1C0019F44 (WPP_IFR_SF_.c)
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1C001EE5C (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     ?IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z @ 0x1C0022EB0 (-IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z.c)
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C00276AC (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C002C24C (-SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002C9CC (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002CB5C (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qddd @ 0x1C00684F0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qqddd @ 0x1C0080CA8 (WPP_IFR_SF_qqddd.c)
 *     ?MxHasEnoughRemainingThreadStack@Mx@@SAEXZ @ 0x1C0096444 (-MxHasEnoughRemainingThreadStack@Mx@@SAEXZ.c)
 *     ?CommitUsageNotification@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@K@Z @ 0x1C009AD9C (-CommitUsageNotification@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@K@Z.c)
 *     ?RevertUsageNotificationFlags@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@EK@Z @ 0x1C009C0BC (-RevertUsageNotificationFlags@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@EK@Z.c)
 *     ?SetUsageNotificationFlags@FxPkgPnp@@IEAAKW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z @ 0x1C009C2A0 (-SetUsageNotificationFlags@FxPkgPnp@@IEAAKW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z.c)
 *     ?_UsageToSpecialType@FxPkgPnp@@KA?AW4_WDF_SPECIAL_FILE_TYPE@@W4_DEVICE_USAGE_NOTIFICATION_TYPE@@@Z @ 0x1C009C790 (-_UsageToSpecialType@FxPkgPnp@@KA-AW4_WDF_SPECIAL_FILE_TYPE@@W4_DEVICE_USAGE_NOTIFICATION_TYPE@@.c)
 *     WPP_IFR_SF_DDDDDD @ 0x1C009C860 (WPP_IFR_SF_DDDDDD.c)
 *     ?SendDeviceUsageNotification@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@PEAVMxWorkItem@@1E@Z @ 0x1C00A0574 (-SendDeviceUsageNotification@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@PEAVMxWorkItem@@1E@Z.c)
 *     ?GetNextEntry@FxRelatedDeviceList@@QEAAPEAVFxRelatedDevice@@PEAV2@@Z @ 0x1C00A3610 (-GetNextEntry@FxRelatedDeviceList@@QEAAPEAVFxRelatedDevice@@PEAV2@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PnpDeviceUsageNotification(FxPkgPnp *this, FxIrp *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  int v5; // edi
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _DEVICE_USAGE_NOTIFICATION_TYPE _a5; // r14d
  unsigned __int8 Lock; // r12
  _FX_DRIVER_GLOBALS *v9; // rcx
  unsigned __int8 v10; // al
  _DEVICE_OBJECT **v11; // r8
  int v12; // eax
  FxDeviceBase *m_DeviceBase; // r11
  unsigned __int16 m_ObjectSize; // cx
  _DEVICE_OBJECT *m_DeviceObject; // r10
  const void *v16; // r11
  unsigned int v17; // r15d
  FxDevice *m_Device; // rcx
  __int64 v19; // r8
  FxRelatedDevice *v20; // r13
  _IRP *v21; // rax
  FxDeviceBase *v22; // rdx
  __int64 v23; // rax
  const void *v24; // rdx
  _FX_DRIVER_GLOBALS *v25; // rcx
  FxRelatedDeviceList *m_UsageDependentDeviceList; // rax
  CCHAR v27; // r15
  FxRelatedDevice *NextEntry; // rax
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  CCHAR StackSize; // cl
  _IRP *v31; // rax
  FxRelatedDevice *v32; // r15
  FxDeviceBase *v33; // rdx
  __int64 v34; // rax
  const void *v35; // rdx
  FxRelatedDeviceList *v36; // r13
  FxRelatedDevice *v37; // r13
  FxRelatedDevice *v38; // rax
  FxRelatedDevice *v39; // rax
  FxPowerPolicyOwnerSettings *m_Owner; // rcx
  __int64 v41; // r8
  _IO_STACK_LOCATION *v42; // rcx
  FxRelatedDevice *v43; // rax
  _WDF_SPECIAL_FILE_TYPE v44; // eax
  void (__fastcall *v45)(unsigned __int64, _QWORD, __int64); // r10
  __int64 v46; // r9
  unsigned __int64 v47; // r9
  bool v48; // zf
  __int64 v49; // r8
  _WDF_SPECIAL_FILE_TYPE v50; // eax
  __int64 (__fastcall *v51)(unsigned __int64, _QWORD, __int64); // r10
  __int64 v52; // r9
  unsigned __int64 v53; // r9
  __int64 v54; // r8
  __int64 v55; // r8
  _IO_STACK_LOCATION *v56; // rcx
  unsigned int v57; // r9d
  FxRelatedDevice *v58; // r14
  FxRelatedDevice *v59; // rax
  FxPowerPolicyOwnerSettings *v60; // rcx
  _FX_DRIVER_GLOBALS *v61; // rcx
  _FX_DRIVER_GLOBALS *v62; // rcx
  unsigned int v63; // ebx
  const _GUID *traceGuid; // [rsp+20h] [rbp-49h]
  FxRelatedDeviceList *v66; // [rsp+60h] [rbp-9h]
  FxAutoIrp relatedIrp; // [rsp+68h] [rbp-1h] BYREF
  FxAutoIrp parentIrp; // [rsp+70h] [rbp+7h] BYREF
  MxDeviceObject RelatedDevice; // [rsp+78h] [rbp+Fh] BYREF
  MxDeviceObject dependentDevice; // [rsp+D0h] [rbp+67h] BYREF
  MxDeviceObject OldFlags; // [rsp+D8h] [rbp+6Fh] BYREF
  MxDeviceObject topOfParentStack; // [rsp+E0h] [rbp+77h] BYREF
  MxAutoWorkItem workItem; // [rsp+E8h] [rbp+7Fh] BYREF

  relatedIrp.m_Irp = 0LL;
  parentIrp.m_Irp = 0LL;
  topOfParentStack.m_DeviceObject = 0LL;
  workItem.m_WorkItem = 0LL;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0x3Bu, WPP_FxPkgPnp_cpp_Traceguids);
  v5 = 0;
  CurrentStackLocation = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
  _a5 = CurrentStackLocation->Parameters.UsageNotification.Type;
  Lock = CurrentStackLocation->Parameters.SetLock.Lock;
  v9 = this->m_Globals;
  if ( v9->FxVerboseOn )
    WPP_IFR_SF_DDDDDD(
      v9,
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
      v10 = this->m_SpecialSupport[_a5 - 1];
    }
    else
    {
      v10 = 1;
    }
    if ( v10 )
    {
LABEL_11:
      if ( !Mx::MxHasEnoughRemainingThreadStack()
        && (FxDevice::IsPdo(this->m_Device) || this->m_UsageDependentDeviceList) )
      {
        v12 = MxWorkItem::Allocate(&workItem, v11[18], v11);
        v5 = v12;
        if ( v12 < 0 )
        {
          m_DeviceBase = this->m_DeviceBase;
          m_ObjectSize = m_DeviceBase->m_ObjectSize;
          m_DeviceObject = m_DeviceBase->m_DeviceObject.m_DeviceObject;
          v16 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !m_ObjectSize )
            v16 = 0LL;
          WPP_IFR_SF_qqddd(
            this->m_Globals,
            Lock,
            0xCu,
            0x3Eu,
            WPP_FxPkgPnp_cpp_Traceguids,
            v16,
            m_DeviceObject,
            _a5,
            Lock,
            v12);
          goto LABEL_100;
        }
      }
      v17 = FxPkgPnp::SetUsageNotificationFlags(this, _a5, Lock);
      m_Device = this->m_Device;
      LODWORD(OldFlags.m_DeviceObject) = v17;
      v20 = 0LL;
      if ( FxDevice::IsPdo(m_Device) )
      {
        topOfParentStack.m_DeviceObject = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(*(_QWORD *)(v19 + 224) + 144LL));
        v21 = IoAllocateIrp(topOfParentStack.m_DeviceObject->StackSize, 0);
        if ( v21 )
        {
          parentIrp.m_Irp = v21;
          v5 = SendDeviceUsageNotification(&topOfParentStack, &parentIrp, &workItem, Irp, 0);
        }
        else
        {
          v5 = -1073741670;
          v22 = this->m_DeviceBase;
          v23 = v22->m_ObjectSize;
          v24 = (const void *)((unsigned __int64)v22 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !(_WORD)v23 )
            v24 = 0LL;
          WPP_IFR_SF_qqddd(
            this->m_Globals,
            (unsigned __int8)v24,
            0xCu,
            0x3Fu,
            WPP_FxPkgPnp_cpp_Traceguids,
            v24,
            topOfParentStack.m_DeviceObject,
            _a5,
            Lock,
            -1073741670);
        }
        ObfDereferenceObject(topOfParentStack.m_DeviceObject);
        topOfParentStack.m_DeviceObject = 0LL;
        if ( v5 < 0 )
        {
          v25 = this->m_Globals;
          if ( v25->FxVerboseOn )
            WPP_IFR_SF_d(v25, 5u, 0xCu, 0x40u, WPP_FxPkgPnp_cpp_Traceguids, v5);
          FxPkgPnp::RevertUsageNotificationFlags(this, _a5, Lock, v17);
          goto LABEL_100;
        }
      }
      m_UsageDependentDeviceList = this->m_UsageDependentDeviceList;
      v66 = m_UsageDependentDeviceList;
      v27 = 0;
      if ( m_UsageDependentDeviceList )
      {
        FxTransactionedList::LockForEnum(m_UsageDependentDeviceList, this->m_Globals);
        while ( 1 )
        {
          NextEntry = FxRelatedDeviceList::GetNextEntry(this->m_UsageDependentDeviceList, v20);
          v20 = NextEntry;
          if ( !NextEntry )
            break;
          AttachedDeviceReference = IoGetAttachedDeviceReference(NextEntry->m_DeviceObject);
          StackSize = v27;
          if ( AttachedDeviceReference->StackSize > v27 )
            StackSize = AttachedDeviceReference->StackSize;
          v27 = StackSize;
          ObfDereferenceObject(AttachedDeviceReference);
        }
      }
      else
      {
        v66 = 0LL;
      }
      if ( v27 <= 0 )
      {
LABEL_46:
        v32 = 0LL;
      }
      else
      {
        v31 = IoAllocateIrp(v27, 0);
        v32 = 0LL;
        if ( !v31 )
        {
          v5 = -1073741670;
          v33 = this->m_DeviceBase;
          v34 = v33->m_ObjectSize;
          v35 = (const void *)((unsigned __int64)v33 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !(_WORD)v34 )
            v35 = 0LL;
          WPP_IFR_SF_qddd(
            this->m_Globals,
            (unsigned __int8)v35,
            0xCu,
            0x41u,
            WPP_FxPkgPnp_cpp_Traceguids,
            v35,
            _a5,
            Lock,
            -1073741670);
          v36 = v66;
          goto LABEL_94;
        }
        dependentDevice.m_DeviceObject = 0LL;
        v37 = 0LL;
        relatedIrp.m_Irp = v31;
        while ( 1 )
        {
          v38 = FxRelatedDeviceList::GetNextEntry(this->m_UsageDependentDeviceList, v37);
          v37 = v38;
          if ( !v38 )
            break;
          dependentDevice.m_DeviceObject = v38->m_DeviceObject;
          v5 = SendDeviceUsageNotification(&dependentDevice, &relatedIrp, &workItem, Irp, 0);
          if ( v5 < 0 )
          {
            while ( 1 )
            {
              v39 = FxRelatedDeviceList::GetNextEntry(this->m_UsageDependentDeviceList, v32);
              v32 = v39;
              if ( !v39 || v39 == v37 )
                break;
              dependentDevice.m_DeviceObject = v39->m_DeviceObject;
              SendDeviceUsageNotification(&dependentDevice, &relatedIrp, &workItem, Irp, 1u);
            }
            goto LABEL_46;
          }
        }
      }
      if ( v5 < 0 )
      {
        v36 = v66;
LABEL_94:
        if ( v36 )
          FxTransactionedList::UnlockFromEnum(this->m_UsageDependentDeviceList, this->m_Globals);
        v61 = this->m_Globals;
        if ( v61->FxVerboseOn )
          WPP_IFR_SF_d(v61, 5u, 0xCu, 0x42u, WPP_FxPkgPnp_cpp_Traceguids, v5);
        goto LABEL_100;
      }
      m_Owner = this->m_PowerPolicyMachine.m_Owner;
      LOBYTE(dependentDevice.m_DeviceObject) = 0;
      if ( m_Owner )
      {
        v5 = FxPowerIdleMachine::PowerReferenceWorker(
               &m_Owner->m_PowerIdleMachine,
               1u,
               FxPowerReferenceDefault,
               0LL,
               0,
               0LL);
        if ( v5 < 0 )
        {
          Irp->m_Irp->IoStatus.Status = v5;
LABEL_52:
          if ( v5 < 0 )
            goto LABEL_63;
          if ( Lock && !this->m_HasPowerThread && _a5 != DeviceUsageTypeBoot )
          {
            v5 = this->QueryForPowerThread(this);
            if ( v5 >= 0 )
              goto LABEL_69;
            if ( FxDevice::IsPdo(this->m_Device) )
            {
              topOfParentStack.m_DeviceObject = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(*(_QWORD *)(v41 + 224)
                                                                                               + 144LL));
              SendDeviceUsageNotification(&topOfParentStack, &parentIrp, &workItem, Irp, 1u);
              ObfDereferenceObject(topOfParentStack.m_DeviceObject);
            }
            else
            {
              v42 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
              *(_OWORD *)&v42[-1].MajorFunction = *(_OWORD *)&v42->MajorFunction;
              *(_OWORD *)&v42[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&v42->Parameters.QueryFile.FileInformationClass;
              *(_OWORD *)(&v42[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&v42->Parameters.QueryDeviceRelations
                                                                                    + 6);
              v42[-1].FileObject = v42->FileObject;
              v42[-1].Control = 0;
              Irp->m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.SetLock.Lock = 0;
              Irp->m_Irp->IoStatus.Status = -1073741637;
              FxIrp::SendIrpSynchronously(Irp, this->m_DeviceBase->m_AttachedDevice.m_DeviceObject);
            }
            Irp->m_Irp->IoStatus.Status = v5;
          }
          if ( v5 < 0 )
          {
LABEL_63:
            FxPkgPnp::RevertUsageNotificationFlags(this, _a5, Lock, (unsigned int)OldFlags.m_DeviceObject);
            v36 = v66;
            if ( v66 )
            {
              for ( RelatedDevice.m_DeviceObject = 0LL;
                    ;
                    SendDeviceUsageNotification(&RelatedDevice, &relatedIrp, &workItem, Irp, 1u) )
              {
                v43 = FxRelatedDeviceList::GetNextEntry(this->m_UsageDependentDeviceList, v32);
                v32 = v43;
                if ( !v43 )
                  break;
                RelatedDevice.m_DeviceObject = v43->m_DeviceObject;
              }
              v36 = v66;
            }
LABEL_91:
            if ( LOBYTE(dependentDevice.m_DeviceObject) )
              FxPowerIdleMachine::IoDecrement(&this->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine, 0LL, 0, 0LL);
            goto LABEL_94;
          }
LABEL_69:
          v36 = v66;
          if ( this->m_DeviceUsageNotification.m_Method )
          {
            v44 = FxPkgPnp::_UsageToSpecialType(_a5);
            v47 = v46 ^ 0xFFFFFFFFFFFFFFF8uLL;
            v48 = (_WORD)v49 == 0;
            LOBYTE(v49) = Lock;
            if ( v48 )
              v47 = 0LL;
            v45(v47, (unsigned int)v44, v49);
          }
          if ( this->m_DeviceUsageNotificationEx.m_Method )
          {
            v50 = FxPkgPnp::_UsageToSpecialType(_a5);
            v53 = v52 ^ 0xFFFFFFFFFFFFFFF8uLL;
            v48 = (_WORD)v54 == 0;
            LOBYTE(v54) = Lock;
            if ( v48 )
              v53 = 0LL;
            v5 = v51(v53, (unsigned int)v50, v54);
          }
          else
          {
            v5 = 0;
          }
          if ( v5 >= 0 )
          {
            FxPkgPnp::CommitUsageNotification(this, _a5, (__int16)OldFlags.m_DeviceObject);
            v60 = this->m_PowerPolicyMachine.m_Owner;
            if ( v60 && _a5 == DeviceUsageTypeDumpFile )
            {
              if ( Lock )
                FxPowerIdleMachine::PowerReferenceWorker(
                  &v60->m_PowerIdleMachine,
                  0,
                  FxPowerReferenceDefault,
                  0LL,
                  0,
                  0LL);
              else
                FxPowerIdleMachine::IoDecrement(&v60->m_PowerIdleMachine, 0LL, 0, 0LL);
            }
          }
          else
          {
            if ( FxDevice::IsPdo(this->m_Device) )
            {
              topOfParentStack.m_DeviceObject = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(*(_QWORD *)(v55 + 224)
                                                                                               + 144LL));
              SendDeviceUsageNotification(&topOfParentStack, &parentIrp, &workItem, Irp, 1u);
              ObfDereferenceObject(topOfParentStack.m_DeviceObject);
            }
            else
            {
              v56 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
              *(_OWORD *)&v56[-1].MajorFunction = *(_OWORD *)&v56->MajorFunction;
              *(_OWORD *)&v56[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&v56->Parameters.QueryFile.FileInformationClass;
              *(_OWORD *)(&v56[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&v56->Parameters.QueryDeviceRelations
                                                                                    + 6);
              v56[-1].FileObject = v56->FileObject;
              v56[-1].Control = 0;
              Irp->m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.SetLock.Lock = 0;
              Irp->m_Irp->IoStatus.Status = -1073741637;
              FxIrp::SendIrpSynchronously(Irp, this->m_DeviceBase->m_AttachedDevice.m_DeviceObject);
            }
            v57 = (unsigned int)OldFlags.m_DeviceObject;
            Irp->m_Irp->IoStatus.Status = v5;
            FxPkgPnp::RevertUsageNotificationFlags(this, _a5, Lock, v57);
            v58 = 0LL;
            if ( v66 )
            {
              for ( OldFlags.m_DeviceObject = 0LL; ; SendDeviceUsageNotification(
                                                       &OldFlags,
                                                       &relatedIrp,
                                                       &workItem,
                                                       Irp,
                                                       1u) )
              {
                v59 = FxRelatedDeviceList::GetNextEntry(this->m_UsageDependentDeviceList, v58);
                v58 = v59;
                if ( !v59 )
                  break;
                OldFlags.m_DeviceObject = v59->m_DeviceObject;
              }
            }
          }
          goto LABEL_91;
        }
        LOBYTE(dependentDevice.m_DeviceObject) = 1;
      }
      Irp->m_Irp->IoStatus.Status = v5;
      v5 = this->SendIrpSynchronously(this, Irp);
      goto LABEL_52;
    }
  }
  v62 = this->m_Globals;
  v5 = -1073741822;
  if ( v62->FxVerboseOn )
    WPP_IFR_SF_Dd(v62, 5u, 0xCu, 0x3Du, WPP_FxPkgPnp_cpp_Traceguids, _a5, -1073741822);
LABEL_100:
  v63 = FxPkgPnp::CompletePnpRequest(this, Irp, v5);
  MxWorkItem::Free(&workItem);
  if ( parentIrp.m_Irp )
    IoFreeIrp(parentIrp.m_Irp);
  if ( relatedIrp.m_Irp )
    IoFreeIrp(relatedIrp.m_Irp);
  return v63;
}
