/*
 * XREFs of ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C009DC84
 * Callers:
 *     ?_PnpDeviceUsageNotification@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C009EBF0 (-_PnpDeviceUsageNotification@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ??0FxCREvent@@QEAA@E@Z @ 0x1C00154B4 (--0FxCREvent@@QEAA@E@Z.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x1C00154DC (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEAD@Z @ 0x1C0017320 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEAD@Z.c)
 *     ?IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEAD@Z @ 0x1C0017540 (-IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEAD@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C001C3A8 (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001E1F0 (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001E298 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_Dd @ 0x1C00256D4 (WPP_IFR_SF_Dd.c)
 *     WPP_IFR_SF_qddd @ 0x1C005DBF0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qqddd @ 0x1C007A20C (WPP_IFR_SF_qqddd.c)
 *     ?CommitUsageNotification@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@K@Z @ 0x1C009D5C0 (-CommitUsageNotification@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@K@Z.c)
 *     ?RevertUsageNotificationFlags@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@EK@Z @ 0x1C009E850 (-RevertUsageNotificationFlags@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@EK@Z.c)
 *     ?SetUsageNotificationFlags@FxPkgPnp@@IEAAKW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z @ 0x1C009EA68 (-SetUsageNotificationFlags@FxPkgPnp@@IEAAKW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z.c)
 *     ?_UsageToSpecialType@FxPkgPnp@@KA?AW4_WDF_SPECIAL_FILE_TYPE@@W4_DEVICE_USAGE_NOTIFICATION_TYPE@@@Z @ 0x1C009EF08 (-_UsageToSpecialType@FxPkgPnp@@KA-AW4_WDF_SPECIAL_FILE_TYPE@@W4_DEVICE_USAGE_NOTIFICATION_TYPE@@.c)
 *     WPP_IFR_SF_DDDDDD @ 0x1C009EFD8 (WPP_IFR_SF_DDDDDD.c)
 *     ?SendDeviceUsageNotification@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@PEAVMxWorkItem@@1E@Z @ 0x1C00A2C40 (-SendDeviceUsageNotification@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@PEAVMxWorkItem@@1E@Z.c)
 *     ?GetNextEntry@FxRelatedDeviceList@@QEAAPEAVFxRelatedDevice@@PEAV2@@Z @ 0x1C00A6B8C (-GetNextEntry@FxRelatedDeviceList@@QEAAPEAVFxRelatedDevice@@PEAV2@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PnpDeviceUsageNotification(FxPkgPnp *this, FxIrp *Irp)
{
  struct _IO_WORKITEM *m_WorkItem; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  int v6; // r14d
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _DEVICE_USAGE_NOTIFICATION_TYPE _a5; // r13d
  unsigned __int8 Lock; // r12
  _FX_DRIVER_GLOBALS *v10; // rcx
  unsigned __int8 v11; // al
  FxDeviceBase *v12; // rcx
  __int64 v13; // rax
  FxDeviceBase *v14; // rcx
  _DEVICE_OBJECT *v15; // rdx
  const void *v16; // rcx
  unsigned int v17; // r8d
  unsigned int v18; // eax
  FxDeviceBase *m_DeviceBase; // rdx
  char *v20; // r8
  __int64 v21; // rcx
  _IRP *v22; // rax
  FxDeviceBase *v23; // rcx
  const void *v24; // rcx
  _FX_DRIVER_GLOBALS *v25; // rcx
  FxRelatedDeviceList *m_UsageDependentDeviceList; // rcx
  CCHAR v27; // al
  FxRelatedDevice *NextEntry; // rax
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  char m_DeviceObject; // cl
  _IRP *v31; // rax
  unsigned __int8 v32; // dl
  FxDeviceBase *v33; // rcx
  const void *v34; // rcx
  FxRelatedDevice *v35; // rdi
  FxRelatedDevice *v36; // rax
  FxRelatedDevice *v37; // r13
  FxRelatedDevice *v38; // rdi
  FxRelatedDevice *v39; // rax
  FxPowerPolicyOwnerSettings *m_Owner; // rcx
  int v41; // eax
  __int64 v42; // rdx
  FxDeviceBase *v43; // rcx
  __int64 v44; // rax
  _IO_STACK_LOCATION *v45; // rcx
  _DEVICE_OBJECT *v46; // rdi
  _IO_STACK_LOCATION *v47; // rdx
  FxRelatedDevice *v48; // rdi
  FxRelatedDevice *v49; // rax
  _WDF_SPECIAL_FILE_TYPE v50; // eax
  __int64 v51; // r8
  __int64 v52; // r9
  void (__fastcall *v53)(__int64, _QWORD, __int64); // r10
  _WDF_SPECIAL_FILE_TYPE v54; // eax
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 (__fastcall *v57)(__int64, _QWORD, __int64); // r10
  FxDeviceBase *v58; // rcx
  __int64 v59; // rax
  _IO_STACK_LOCATION *v60; // rcx
  _DEVICE_OBJECT *v61; // rdi
  _IO_STACK_LOCATION *v62; // rdx
  unsigned int v63; // r9d
  FxRelatedDevice *v64; // rdi
  FxRelatedDevice *v65; // rax
  FxPowerPolicyOwnerSettings *v66; // rcx
  _FX_DRIVER_GLOBALS *v67; // rcx
  _FX_DRIVER_GLOBALS *v68; // rcx
  unsigned int v69; // edi
  const _GUID *traceGuid; // [rsp+20h] [rbp-79h]
  MxAutoWorkItem workItem; // [rsp+60h] [rbp-39h] BYREF
  FxAutoIrp relatedIrp; // [rsp+68h] [rbp-31h] BYREF
  FxAutoIrp parentIrp; // [rsp+70h] [rbp-29h] BYREF
  char *v75; // [rsp+78h] [rbp-21h]
  FxRelatedDevice *Entry; // [rsp+80h] [rbp-19h]
  FxCREvent v77; // [rsp+88h] [rbp-11h] BYREF
  MxDeviceObject dependentDevice; // [rsp+100h] [rbp+67h] BYREF
  unsigned __int64 LowLimit; // [rsp+108h] [rbp+6Fh] BYREF
  MxDeviceObject RelatedDevice; // [rsp+110h] [rbp+77h] BYREF
  MxDeviceObject topOfParentStack; // [rsp+118h] [rbp+7Fh] BYREF

  m_WorkItem = 0LL;
  relatedIrp.m_Irp = 0LL;
  workItem.m_WorkItem = 0LL;
  parentIrp.m_Irp = 0LL;
  topOfParentStack.m_DeviceObject = 0LL;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0x3Bu, WPP_FxPkgPnp_cpp_Traceguids);
  v6 = 0;
  CurrentStackLocation = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
  _a5 = CurrentStackLocation->Parameters.UsageNotification.Type;
  Lock = CurrentStackLocation->Parameters.SetLock.Lock;
  LODWORD(RelatedDevice.m_DeviceObject) = _a5;
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
  if ( (unsigned int)(_a5 - 1) > 3 )
    goto LABEL_104;
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
  if ( !v11 )
  {
LABEL_104:
    v68 = this->m_Globals;
    v6 = -1073741822;
    if ( v68->FxVerboseOn )
      WPP_IFR_SF_Dd(v68, 5u, 0xCu, 0x3Du, WPP_FxPkgPnp_cpp_Traceguids, _a5, -1073741822);
    goto LABEL_106;
  }
LABEL_11:
  IoGetStackLimits(&LowLimit, (PULONG_PTR)&dependentDevice);
  if ( (unsigned __int64)&dependentDevice - LowLimit >= 0x3000
    || ((v12 = this->m_DeviceBase, (v13 = *(_QWORD *)&v12[3].m_SpinLock.m_DbgFlagIsInitialized) == 0)
     || *(_WORD *)(v13 + 8) != 4354)
    && !this->m_UsageDependentDeviceList
    || (workItem.m_WorkItem = IoAllocateWorkItem(v12->m_DeviceObject.m_DeviceObject),
        (m_WorkItem = workItem.m_WorkItem) != 0LL) )
  {
    v18 = FxPkgPnp::SetUsageNotificationFlags(this, _a5, Lock);
    m_DeviceBase = this->m_DeviceBase;
    v20 = 0LL;
    LODWORD(LowLimit) = v18;
    v21 = *(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
    if ( v21 && *(_WORD *)(v21 + 8) == 4354 )
    {
      topOfParentStack.m_DeviceObject = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(*(_QWORD *)&m_DeviceBase[1].m_ObjectFlags
                                                                                       + 144LL));
      v22 = IoAllocateIrp(topOfParentStack.m_DeviceObject->StackSize, 0);
      if ( v22 )
      {
        parentIrp.m_Irp = v22;
        v6 = SendDeviceUsageNotification(&topOfParentStack, &parentIrp, &workItem, Irp, 0);
      }
      else
      {
        v6 = -1073741670;
        v23 = this->m_DeviceBase;
        v24 = v23->m_ObjectSize ? (const void *)((unsigned __int64)v23 ^ 0xFFFFFFFFFFFFFFF8uLL) : 0LL;
        WPP_IFR_SF_qqddd(
          this->m_Globals,
          0,
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
      v20 = 0LL;
      topOfParentStack.m_DeviceObject = 0LL;
      if ( v6 < 0 )
      {
        v25 = this->m_Globals;
        if ( v25->FxVerboseOn )
          WPP_IFR_SF_d(v25, 5u, 0xCu, 0x40u, WPP_FxPkgPnp_cpp_Traceguids, v6);
        FxPkgPnp::RevertUsageNotificationFlags(this, _a5, Lock, LowLimit);
LABEL_106:
        v17 = v6;
        goto LABEL_107;
      }
    }
    m_UsageDependentDeviceList = this->m_UsageDependentDeviceList;
    v27 = 0;
    LOBYTE(dependentDevice.m_DeviceObject) = 0;
    Entry = 0LL;
    v75 = (char *)m_UsageDependentDeviceList;
    if ( m_UsageDependentDeviceList )
    {
      FxTransactionedList::LockForEnum(m_UsageDependentDeviceList, this->m_Globals);
      while ( 1 )
      {
        NextEntry = FxRelatedDeviceList::GetNextEntry(this->m_UsageDependentDeviceList, Entry);
        v20 = 0LL;
        Entry = NextEntry;
        if ( !NextEntry )
          break;
        AttachedDeviceReference = IoGetAttachedDeviceReference(NextEntry->m_DeviceObject);
        m_DeviceObject = (char)dependentDevice.m_DeviceObject;
        if ( AttachedDeviceReference->StackSize > SLOBYTE(dependentDevice.m_DeviceObject) )
          m_DeviceObject = AttachedDeviceReference->StackSize;
        LOBYTE(dependentDevice.m_DeviceObject) = m_DeviceObject;
        ObfDereferenceObject(AttachedDeviceReference);
      }
      v27 = (CCHAR)dependentDevice.m_DeviceObject;
    }
    else
    {
      v75 = 0LL;
    }
    if ( v27 > 0 )
    {
      v31 = IoAllocateIrp(v27, 0);
      if ( !v31 )
      {
        v6 = -1073741670;
        v33 = this->m_DeviceBase;
        if ( v33->m_ObjectSize )
          v34 = (const void *)((unsigned __int64)v33 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v34 = 0LL;
        WPP_IFR_SF_qddd(this->m_Globals, v32, 0xCu, 0x41u, WPP_FxPkgPnp_cpp_Traceguids, v34, _a5, Lock, -1073741670);
        v20 = 0LL;
        goto LABEL_100;
      }
      dependentDevice.m_DeviceObject = 0LL;
      v35 = 0LL;
      relatedIrp.m_Irp = v31;
      while ( 1 )
      {
        v36 = FxRelatedDeviceList::GetNextEntry(this->m_UsageDependentDeviceList, v35);
        Entry = v36;
        v35 = v36;
        if ( !v36 )
          break;
        dependentDevice.m_DeviceObject = v36->m_DeviceObject;
        v6 = SendDeviceUsageNotification(&dependentDevice, &relatedIrp, &workItem, Irp, (unsigned __int8)v20);
        if ( v6 < 0 )
        {
          v37 = Entry;
          v38 = 0LL;
          while ( 1 )
          {
            v39 = FxRelatedDeviceList::GetNextEntry(this->m_UsageDependentDeviceList, v38);
            v38 = v39;
            if ( !v39 || v39 == v37 )
              break;
            dependentDevice.m_DeviceObject = v39->m_DeviceObject;
            SendDeviceUsageNotification(&dependentDevice, &relatedIrp, &workItem, Irp, 1u);
          }
          _a5 = (_DEVICE_USAGE_NOTIFICATION_TYPE)RelatedDevice.m_DeviceObject;
          break;
        }
      }
    }
    if ( v6 < 0 )
    {
LABEL_100:
      if ( v75 != v20 )
      {
        FxTransactionedList::UnlockFromEnum(this->m_UsageDependentDeviceList, this->m_Globals);
        LOBYTE(v20) = 0;
      }
      v67 = this->m_Globals;
      if ( v67->FxVerboseOn != (_BYTE)v20 )
        WPP_IFR_SF_d(v67, 5u, 0xCu, 0x42u, WPP_FxPkgPnp_cpp_Traceguids, v6);
      goto LABEL_106;
    }
    m_Owner = this->m_PowerPolicyMachine.m_Owner;
    LOBYTE(dependentDevice.m_DeviceObject) = (_BYTE)v20;
    if ( m_Owner )
    {
      v41 = FxPowerIdleMachine::PowerReferenceWorker(
              &m_Owner->m_PowerIdleMachine,
              1u,
              FxPowerReferenceDefault,
              0LL,
              (int)v20,
              v20);
      v6 = v41;
      if ( v41 < 0 )
      {
        Irp->m_Irp->IoStatus.Status = v41;
LABEL_59:
        if ( v6 < 0 )
          goto LABEL_72;
        if ( Lock && !this->m_HasPowerThread && _a5 != DeviceUsageTypeBoot )
        {
          v6 = ((__int64 (__fastcall *)(FxPkgPnp *, __int64, _QWORD))this->QueryForPowerThread)(this, v42, 0LL);
          if ( v6 >= 0 )
            goto LABEL_77;
          v43 = this->m_DeviceBase;
          v44 = *(_QWORD *)&v43[3].m_SpinLock.m_DbgFlagIsInitialized;
          if ( v44 && (LOBYTE(v42) = 2, *(_WORD *)(v44 + 8) == 4354) )
          {
            topOfParentStack.m_DeviceObject = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(*(_QWORD *)&v43[1].m_ObjectFlags
                                                                                             + 144LL));
            SendDeviceUsageNotification(&topOfParentStack, &parentIrp, &workItem, Irp, 1u);
            ObfDereferenceObject(topOfParentStack.m_DeviceObject);
          }
          else
          {
            v45 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
            *(_OWORD *)&v45[-1].MajorFunction = *(_OWORD *)&v45->MajorFunction;
            *(_OWORD *)&v45[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&v45->Parameters.QueryFile.FileInformationClass;
            *(_OWORD *)(&v45[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&v45->Parameters.QueryDeviceRelations
                                                                                  + 6);
            v45[-1].FileObject = v45->FileObject;
            v45[-1].Control = 0;
            Irp->m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.SetLock.Lock = 0;
            Irp->m_Irp->IoStatus.Status = -1073741637;
            v46 = this->m_DeviceBase->m_AttachedDevice.m_DeviceObject;
            FxCREvent::FxCREvent(&v77, v42);
            v47 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
            v47[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))FxIrp::_IrpSynchronousCompletion;
            v47[-1].Context = &v77;
            v47[-1].Control = -32;
            if ( IofCallDriver(v46, Irp->m_Irp) == 259 )
              FxCREvent::EnterCRAndWaitAndLeave(&v77);
          }
          Irp->m_Irp->IoStatus.Status = v6;
        }
        if ( v6 < 0 )
        {
LABEL_72:
          FxPkgPnp::RevertUsageNotificationFlags(this, _a5, Lock, LowLimit);
          v20 = 0LL;
          v48 = 0LL;
          if ( v75 )
          {
            for ( RelatedDevice.m_DeviceObject = 0LL;
                  ;
                  SendDeviceUsageNotification(&RelatedDevice, &relatedIrp, &workItem, Irp, 1u) )
            {
              v49 = FxRelatedDeviceList::GetNextEntry(this->m_UsageDependentDeviceList, v48);
              v48 = v49;
              if ( !v49 )
                break;
              RelatedDevice.m_DeviceObject = v49->m_DeviceObject;
            }
          }
LABEL_98:
          if ( LOBYTE(dependentDevice.m_DeviceObject) != (_BYTE)v20 )
          {
            FxPowerIdleMachine::IoDecrement(&this->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine, 0LL, 0, 0LL);
            v20 = 0LL;
          }
          goto LABEL_100;
        }
LABEL_77:
        if ( this->m_DeviceUsageNotification.m_Method )
        {
          v50 = FxPkgPnp::_UsageToSpecialType(_a5);
          LOBYTE(v51) = Lock;
          v53(v52, (unsigned int)v50, v51);
        }
        if ( this->m_DeviceUsageNotificationEx.m_Method )
        {
          v54 = FxPkgPnp::_UsageToSpecialType(_a5);
          LOBYTE(v55) = Lock;
          v6 = v57(v56, (unsigned int)v54, v55);
        }
        else
        {
          v6 = 0;
        }
        if ( v6 >= 0 )
        {
          FxPkgPnp::CommitUsageNotification(this, _a5, LowLimit);
          v66 = this->m_PowerPolicyMachine.m_Owner;
          v20 = 0LL;
          if ( v66 && _a5 == DeviceUsageTypeDumpFile )
          {
            if ( Lock )
              FxPowerIdleMachine::PowerReferenceWorker(
                &v66->m_PowerIdleMachine,
                0,
                FxPowerReferenceDefault,
                0LL,
                0,
                0LL);
            else
              FxPowerIdleMachine::IoDecrement(&v66->m_PowerIdleMachine, 0LL, 0, 0LL);
            v20 = 0LL;
          }
        }
        else
        {
          v58 = this->m_DeviceBase;
          v59 = *(_QWORD *)&v58[3].m_SpinLock.m_DbgFlagIsInitialized;
          if ( v59 && (LOBYTE(v42) = 2, *(_WORD *)(v59 + 8) == 4354) )
          {
            topOfParentStack.m_DeviceObject = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(*(_QWORD *)&v58[1].m_ObjectFlags
                                                                                             + 144LL));
            SendDeviceUsageNotification(&topOfParentStack, &parentIrp, &workItem, Irp, 1u);
            ObfDereferenceObject(topOfParentStack.m_DeviceObject);
          }
          else
          {
            v60 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
            *(_OWORD *)&v60[-1].MajorFunction = *(_OWORD *)&v60->MajorFunction;
            *(_OWORD *)&v60[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&v60->Parameters.QueryFile.FileInformationClass;
            *(_OWORD *)(&v60[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&v60->Parameters.QueryDeviceRelations
                                                                                  + 6);
            v60[-1].FileObject = v60->FileObject;
            v60[-1].Control = 0;
            Irp->m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.SetLock.Lock = 0;
            Irp->m_Irp->IoStatus.Status = -1073741637;
            v61 = this->m_DeviceBase->m_AttachedDevice.m_DeviceObject;
            FxCREvent::FxCREvent(&v77, v42);
            v62 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
            v62[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))FxIrp::_IrpSynchronousCompletion;
            v62[-1].Context = &v77;
            v62[-1].Control = -32;
            if ( IofCallDriver(v61, Irp->m_Irp) == 259 )
              FxCREvent::EnterCRAndWaitAndLeave(&v77);
          }
          v63 = LowLimit;
          Irp->m_Irp->IoStatus.Status = v6;
          FxPkgPnp::RevertUsageNotificationFlags(this, _a5, Lock, v63);
          v20 = 0LL;
          v64 = 0LL;
          if ( v75 )
          {
            for ( LowLimit = 0LL;
                  ;
                  SendDeviceUsageNotification((MxDeviceObject *)&LowLimit, &relatedIrp, &workItem, Irp, 1u) )
            {
              v65 = FxRelatedDeviceList::GetNextEntry(this->m_UsageDependentDeviceList, v64);
              v64 = v65;
              if ( !v65 )
                break;
              LowLimit = (unsigned __int64)v65->m_DeviceObject;
            }
          }
        }
        goto LABEL_98;
      }
      LOBYTE(dependentDevice.m_DeviceObject) = 1;
    }
    Irp->m_Irp->IoStatus.Status = v6;
    v6 = this->SendIrpSynchronously(this, Irp);
    goto LABEL_59;
  }
  v14 = this->m_DeviceBase;
  v15 = v14->m_DeviceObject.m_DeviceObject;
  if ( v14->m_ObjectSize )
    v16 = (const void *)((unsigned __int64)v14 ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v16 = 0LL;
  WPP_IFR_SF_qqddd(
    this->m_Globals,
    (unsigned __int8)v15,
    0xCu,
    0x3Eu,
    WPP_FxPkgPnp_cpp_Traceguids,
    v16,
    v15,
    _a5,
    Lock,
    -1073741670);
  v17 = -1073741670;
LABEL_107:
  v69 = FxPkgPnp::CompletePnpRequest(this, Irp, v17);
  if ( m_WorkItem )
    IoFreeWorkItem(m_WorkItem);
  if ( parentIrp.m_Irp )
    IoFreeIrp(parentIrp.m_Irp);
  if ( relatedIrp.m_Irp )
    IoFreeIrp(relatedIrp.m_Irp);
  return v69;
}
