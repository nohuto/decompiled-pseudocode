/*
 * XREFs of ?Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0026B60
 * Callers:
 *     ?Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0029C70 (-Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?Initialize@FxPkgPdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C002BE50 (-Initialize@FxPkgPdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C0002960 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009FC0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A170 (WPP_IFR_SF_d.c)
 *     ?QueryForD3ColdInterface@FxPkgPnp@@QEAAXXZ @ 0x1C0024D60 (-QueryForD3ColdInterface@FxPkgPnp@@QEAAXXZ.c)
 *     ?RegisterCallbacks@FxPkgPnp@@QEAAJPEAU_WDF_PNPPOWER_EVENT_CALLBACKS@@@Z @ 0x1C00252A8 (-RegisterCallbacks@FxPkgPnp@@QEAAJPEAU_WDF_PNPPOWER_EVENT_CALLBACKS@@@Z.c)
 *     ??0FxPowerPolicyOwnerSettings@@QEAA@PEAVFxPkgPnp@@@Z @ 0x1C0032DF0 (--0FxPowerPolicyOwnerSettings@@QEAA@PEAVFxPkgPnp@@@Z.c)
 *     ?Init@FxPowerPolicyOwnerSettings@@QEAAJXZ @ 0x1C0032F80 (-Init@FxPowerPolicyOwnerSettings@@QEAAJXZ.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C003B8A0 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003BF80 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     memset @ 0x1C003C780 (memset.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0063E54 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0066A4C (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00C9490 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

int __fastcall FxPkgPnp::Initialize(FxPkgPnp *this, WDFDEVICE_INIT *DeviceInit)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  _WDF_TRI_STATE PowerPolicyOwner; // eax
  FxPowerPolicyOwnerSettings *v6; // rax
  FxPowerPolicyOwnerSettings *v7; // rax
  int result; // eax
  _POOL_TYPE v9; // ebx
  ULONG Tag; // edi
  void *v11; // rax
  FX_POOL *p_FxPoolFrameworks; // r12
  FxCmResList *v13; // rax
  _FX_DRIVER_GLOBALS *v14; // rdx
  FxCmResList *v15; // rdi
  _FX_DRIVER_GLOBALS *v16; // rax
  KIRQL v17; // al
  FxDeviceBase *m_DeviceBase; // rbx
  KIRQL v19; // al
  KIRQL v20; // r12
  KIRQL v21; // r8
  _LIST_ENTRY *v22; // rdx
  _LIST_ENTRY *v23; // rax
  int v24; // r12d
  FxCmResList *m_Resources; // rcx
  unsigned int v26; // edx
  _POOL_TYPE v27; // ebx
  ULONG v28; // edi
  void *v29; // rax
  FxCmResList *v30; // rax
  _FX_DRIVER_GLOBALS *v31; // rdx
  FxCmResList *v32; // rbx
  _FX_DRIVER_GLOBALS *v33; // rax
  KIRQL v34; // al
  FxDeviceBase *Driver; // rdi
  KIRQL v36; // al
  KIRQL v37; // r12
  KIRQL v38; // r13
  _LIST_ENTRY *Blink; // r8
  _LIST_ENTRY *p_m_ChildEntry; // rax
  int v41; // r12d
  FxCmResList *m_ResourcesRaw; // rcx
  unsigned int v43; // r14d
  FxPowerPolicyOwnerSettings *m_Owner; // rcx
  _FX_DRIVER_GLOBALS *v45; // rdx
  FxTagTracker *v46; // rcx
  _FX_DRIVER_GLOBALS *v47; // rdx
  FxTagTracker *v48; // rcx
  unsigned __int64 Total; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 Size[3]; // [rsp+40h] [rbp-58h] BYREF
  void *Caller; // [rsp+98h] [rbp+0h]
  KIRQL v52; // [rsp+A0h] [rbp+8h]
  KIRQL v53; // [rsp+A0h] [rbp+8h]
  FxVerifierLock *v54; // [rsp+A8h] [rbp+10h] BYREF
  FxVerifierLock *VerifierLock; // [rsp+B0h] [rbp+18h] BYREF
  FxDeviceBase *v56; // [rsp+B8h] [rbp+20h]

  m_Globals = this->m_Globals;
  this->m_ReleaseHardwareAfterDescendantsOnFailure = DeviceInit->ReleaseHardwareOrderOnFailure == WdfReleaseHardwareOrderOnFailureAfterDescendants;
  KeInitializeEvent(&this->m_QueryInterfaceLock.m_Event.m_Event, SynchronizationEvent, 1u);
  this->m_QueryInterfaceLock.m_Event.m_DbgFlagIsInitialized = 1;
  KeInitializeEvent(&this->m_DeviceInterfaceLock.m_Event.m_Event, SynchronizationEvent, 1u);
  this->m_DeviceInterfaceLock.m_Event.m_DbgFlagIsInitialized = 1;
  PowerPolicyOwner = DeviceInit->PnpPower.PowerPolicyOwner;
  if ( PowerPolicyOwner == WdfTrue )
    goto LABEL_5;
  if ( PowerPolicyOwner == WdfFalse )
    goto LABEL_10;
  if ( DeviceInit->InitType != FxDeviceInitTypePdo )
  {
    if ( !DeviceInit->Fdo.Filter )
      goto LABEL_5;
LABEL_10:
    v9 = ExDefaultNonPagedPoolType;
    this->m_Resources = 0LL;
    Tag = m_Globals->Tag;
    if ( (int)FxCalculateObjectTotalSize2(m_Globals, 0x98u, 0, 0LL, &Total) < 0 )
      goto LABEL_93;
    if ( m_Globals->FxPoolTrackingOn )
      v11 = Caller;
    else
      v11 = 0LL;
    p_FxPoolFrameworks = &m_Globals->FxPoolFrameworks;
    v13 = (FxCmResList *)FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, v9, Total, Tag, v11);
    v15 = v13;
    if ( v13 )
    {
      if ( m_Globals->FxVerifierHandle )
      {
        memset(v13, 0, 0x20uLL);
        *(_DWORD *)(&v15->m_ObjectState + 1) = 1146058822;
        v15 = (FxCmResList *)((char *)v15 + 32);
      }
      memset(&v15[1].m_Type, 0, 0x30uLL);
      *(_QWORD *)&v15[1].m_Type = v15;
    }
    if ( !v15 )
      goto LABEL_93;
    v15->m_Globals = m_Globals;
    v15->__vftable = (FxCmResList_vtbl *)&FxObject::`vftable';
    *(_DWORD *)&v15->m_Type = 10489910;
    v15->m_SpinLock.m_Lock = 0LL;
    v15->m_SpinLock.m_DbgFlagIsInitialized = 1;
    v15->m_Refcnt = 1;
    *(_DWORD *)&v15->m_ObjectFlags = 0x10000;
    v15->m_ParentObject = 0LL;
    v15->m_ChildListHead.Blink = &v15->m_ChildListHead;
    v15->m_ChildListHead.Flink = &v15->m_ChildListHead;
    v15->m_ChildEntry.Blink = &v15->m_ChildEntry;
    v15->m_ChildEntry.Flink = &v15->m_ChildEntry;
    v16 = v15->m_Globals;
    v15->m_DisposeSingleEntry.Next = 0LL;
    v15->m_DeviceBase = 0LL;
    if ( v16->FxVerifierOn )
      FxObject::Vf_VerifyConstruct(v15, v14, 0);
    v15->__vftable = (FxCmResList_vtbl *)&FxNonPagedObject::`vftable';
    v15->m_NPLock.m_Lock = 0LL;
    v15->m_NPLock.m_DbgFlagIsInitialized = 1;
    if ( SLOBYTE(v15->m_ObjectFlags) < 0 )
    {
      v45 = v15->m_Globals;
      if ( v45->FxVerifierLock )
      {
        VerifierLock = 0LL;
        FxVerifierLock::CreateAndInitialize(&VerifierLock, v45, v15);
        v15[-1].m_ListHead.Flink = (_LIST_ENTRY *)VerifierLock;
      }
    }
    v15->m_Count = 0;
    v15->m_ListHead.Blink = &v15->m_ListHead;
    v15->m_ListHead.Flink = &v15->m_ListHead;
    v15->__vftable = (FxCmResList_vtbl *)&FxResourceCollection::`vftable';
    *(_WORD *)&v15->m_AccessFlags = 0;
    v17 = KeAcquireSpinLockRaiseToDpc(&v15->m_SpinLock.m_Lock);
    v15->m_ObjectFlags |= 2u;
    KeReleaseSpinLock(&v15->m_SpinLock.m_Lock, v17);
    v56 = 0LL;
    v15->__vftable = (FxCmResList_vtbl *)&FxCmResList::`vftable';
    this->m_Resources = v15;
    m_DeviceBase = this->m_DeviceBase;
    if ( v15->m_ObjectSize )
    {
      if ( !m_DeviceBase
        && (v15->m_ParentObject
         || (m_DeviceBase = (FxDeviceBase *)v15->m_Globals->Driver, m_DeviceBase == (FxDeviceBase *)v15))
        || (v56 = m_DeviceBase) == 0LL )
      {
LABEL_33:
        v15->m_ObjectFlags |= 8u;
        m_Resources = this->m_Resources;
        v26 = _InterlockedIncrement(&m_Resources->m_Refcnt);
        if ( SLOBYTE(m_Resources->m_ObjectFlags) < 0 )
        {
          v46 = *(FxTagTracker **)&m_Resources[-1].m_Count;
          if ( v46 )
            FxTagTracker::UpdateTagHistory(
              v46,
              this,
              475,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpnp.cpp",
              TagAddRef,
              v26);
        }
        v27 = ExDefaultNonPagedPoolType;
        this->m_ResourcesRaw = 0LL;
        v28 = m_Globals->Tag;
        if ( (int)FxCalculateObjectTotalSize2(m_Globals, 0x98u, 0, 0LL, Size) >= 0 )
        {
          if ( m_Globals->FxPoolTrackingOn )
            v29 = Caller;
          else
            v29 = 0LL;
          v30 = (FxCmResList *)FxPoolAllocator(m_Globals, p_FxPoolFrameworks, v27, Size[0], v28, v29);
          v32 = v30;
          if ( v30 )
          {
            if ( m_Globals->FxVerifierHandle )
            {
              memset(v30, 0, 0x20uLL);
              *(_DWORD *)(&v32->m_ObjectState + 1) = 1146058822;
              v32 = (FxCmResList *)((char *)v32 + 32);
            }
            memset(&v32[1].m_Type, 0, 0x30uLL);
            *(_QWORD *)&v32[1].m_Type = v32;
          }
          if ( v32 )
          {
            v32->m_Globals = m_Globals;
            v32->__vftable = (FxCmResList_vtbl *)&FxObject::`vftable';
            *(_DWORD *)&v32->m_Type = 10489910;
            v32->m_SpinLock.m_Lock = 0LL;
            v32->m_SpinLock.m_DbgFlagIsInitialized = 1;
            v32->m_Refcnt = 1;
            *(_DWORD *)&v32->m_ObjectFlags = 0x10000;
            v32->m_ParentObject = 0LL;
            v32->m_ChildListHead.Blink = &v32->m_ChildListHead;
            v32->m_ChildListHead.Flink = &v32->m_ChildListHead;
            v32->m_ChildEntry.Blink = &v32->m_ChildEntry;
            v32->m_ChildEntry.Flink = &v32->m_ChildEntry;
            v33 = v32->m_Globals;
            v32->m_DisposeSingleEntry.Next = 0LL;
            v32->m_DeviceBase = 0LL;
            if ( v33->FxVerifierOn )
              FxObject::Vf_VerifyConstruct(v32, v31, 0);
            v32->__vftable = (FxCmResList_vtbl *)&FxNonPagedObject::`vftable';
            v32->m_NPLock.m_Lock = 0LL;
            v32->m_NPLock.m_DbgFlagIsInitialized = 1;
            if ( SLOBYTE(v32->m_ObjectFlags) < 0 )
            {
              v47 = v32->m_Globals;
              if ( v47->FxVerifierLock )
              {
                v54 = 0LL;
                FxVerifierLock::CreateAndInitialize(&v54, v47, v32);
                v32[-1].m_ListHead.Flink = (_LIST_ENTRY *)v54;
              }
            }
            v32->m_Count = 0;
            v32->m_ListHead.Blink = &v32->m_ListHead;
            v32->m_ListHead.Flink = &v32->m_ListHead;
            v32->__vftable = (FxCmResList_vtbl *)&FxResourceCollection::`vftable';
            *(_WORD *)&v32->m_AccessFlags = 0;
            v34 = KeAcquireSpinLockRaiseToDpc(&v32->m_SpinLock.m_Lock);
            v32->m_ObjectFlags |= 2u;
            KeReleaseSpinLock(&v32->m_SpinLock.m_Lock, v34);
            v32->__vftable = (FxCmResList_vtbl *)&FxCmResList::`vftable';
            this->m_ResourcesRaw = v32;
            Driver = this->m_DeviceBase;
            if ( v32->m_ObjectSize )
            {
              if ( !Driver
                && (v32->m_ParentObject
                 || (Driver = (FxDeviceBase *)v32->m_Globals->Driver, Driver == (FxDeviceBase *)v32))
                || !Driver )
              {
LABEL_56:
                v32->m_ObjectFlags |= 8u;
                m_ResourcesRaw = this->m_ResourcesRaw;
                v43 = _InterlockedIncrement(&m_ResourcesRaw->m_Refcnt);
                if ( SLOBYTE(m_ResourcesRaw->m_ObjectFlags) < 0 )
                {
                  v48 = *(FxTagTracker **)&m_ResourcesRaw[-1].m_Count;
                  if ( v48 )
                    FxTagTracker::UpdateTagHistory(
                      v48,
                      this,
                      504,
                      "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpnp.cpp",
                      TagAddRef,
                      v43);
                }
                result = FxPkgPnp::RegisterCallbacks(this, &DeviceInit->PnpPower.PnpPowerEventCallbacks);
                if ( result >= 0 )
                {
                  m_Owner = this->m_PowerPolicyMachine.m_Owner;
                  if ( m_Owner )
                  {
                    m_Owner->m_DeviceArmWakeFromS0.m_Method = DeviceInit->PnpPower.PolicyEventCallbacks.EvtDeviceArmWakeFromS0;
                    this->m_PowerPolicyMachine.m_Owner->m_DeviceArmWakeFromSx.m_Method = DeviceInit->PnpPower.PolicyEventCallbacks.EvtDeviceArmWakeFromSx;
                    this->m_PowerPolicyMachine.m_Owner->m_DeviceArmWakeFromSx.m_MethodWithReason = DeviceInit->PnpPower.PolicyEventCallbacks.EvtDeviceArmWakeFromSxWithReason;
                    this->m_PowerPolicyMachine.m_Owner->m_DeviceDisarmWakeFromS0.m_Method = DeviceInit->PnpPower.PolicyEventCallbacks.EvtDeviceDisarmWakeFromS0;
                    this->m_PowerPolicyMachine.m_Owner->m_DeviceDisarmWakeFromSx.m_Method = DeviceInit->PnpPower.PolicyEventCallbacks.EvtDeviceDisarmWakeFromSx;
                    this->m_PowerPolicyMachine.m_Owner->m_DeviceWakeFromS0Triggered.m_Method = DeviceInit->PnpPower.PolicyEventCallbacks.EvtDeviceWakeFromS0Triggered;
                    this->m_PowerPolicyMachine.m_Owner->m_DeviceWakeFromSxTriggered.m_Method = DeviceInit->PnpPower.PolicyEventCallbacks.EvtDeviceWakeFromSxTriggered;
                  }
                }
                return result;
              }
              v36 = KeAcquireSpinLockRaiseToDpc(&v32->m_SpinLock.m_Lock);
              v37 = v36;
              v53 = v36;
              if ( v32->m_ObjectState == 1 )
              {
                if ( v32->m_ParentObject )
                {
                  KeReleaseSpinLock(&v32->m_SpinLock.m_Lock, v36);
                  v41 = -1071644147;
                }
                else
                {
                  v38 = KeAcquireSpinLockRaiseToDpc(&Driver->m_SpinLock.m_Lock);
                  if ( Driver->m_ObjectState == 1 )
                  {
                    Blink = Driver->m_ChildListHead.Blink;
                    p_m_ChildEntry = &v32->m_ChildEntry;
                    if ( Blink->Flink != &Driver->m_ChildListHead )
                      __fastfail(3u);
                    p_m_ChildEntry->Flink = &Driver->m_ChildListHead;
                    v32->m_ChildEntry.Blink = Blink;
                    Blink->Flink = p_m_ChildEntry;
                    Driver->m_ChildListHead.Blink = p_m_ChildEntry;
                    if ( !v32->m_DeviceBase )
                      v32->m_DeviceBase = Driver->m_DeviceBase;
                    KeReleaseSpinLock(&Driver->m_SpinLock.m_Lock, v38);
                    v32->m_ParentObject = Driver;
                    v41 = 0;
                  }
                  else
                  {
                    FxObject::TraceDroppedEvent(Driver, FxObjectDroppedEventAddChildObjectInternal);
                    KeReleaseSpinLock(&Driver->m_SpinLock.m_Lock, v38);
                    v41 = -1073741738;
                  }
                  KeReleaseSpinLock(&v32->m_SpinLock.m_Lock, v53);
                  if ( v41 >= 0 )
                    goto LABEL_56;
                }
              }
              else
              {
                FxObject::TraceDroppedEvent(v32, FxObjectDroppedEventAssignParentObject);
                KeReleaseSpinLock(&v32->m_SpinLock.m_Lock, v37);
                v41 = -1073741738;
              }
            }
            else
            {
              v41 = -1073741816;
            }
            FxObject::DeleteFromFailedCreate(this->m_ResourcesRaw);
            result = v41;
            this->m_ResourcesRaw = 0LL;
            return result;
          }
        }
LABEL_93:
        WPP_IFR_SF_d(m_Globals, 2u, 0x12u, 0xCu, WPP_FxResource_hpp_Traceguids, -1073741670);
        return -1073741670;
      }
      v19 = KeAcquireSpinLockRaiseToDpc(&v15->m_SpinLock.m_Lock);
      v20 = v19;
      LOBYTE(v54) = v19;
      if ( v15->m_ObjectState == 1 )
      {
        if ( v15->m_ParentObject )
        {
          KeReleaseSpinLock(&v15->m_SpinLock.m_Lock, v19);
          v24 = -1071644147;
        }
        else
        {
          v21 = KeAcquireSpinLockRaiseToDpc(&m_DeviceBase->m_SpinLock.m_Lock);
          v52 = v21;
          if ( m_DeviceBase->m_ObjectState == 1 )
          {
            v22 = m_DeviceBase->m_ChildListHead.Blink;
            v23 = &v15->m_ChildEntry;
            if ( v22->Flink != &m_DeviceBase->m_ChildListHead )
              __fastfail(3u);
            v23->Flink = &m_DeviceBase->m_ChildListHead;
            v15->m_ChildEntry.Blink = v22;
            v22->Flink = v23;
            m_DeviceBase->m_ChildListHead.Blink = v23;
            if ( !v15->m_DeviceBase )
              v15->m_DeviceBase = m_DeviceBase->m_DeviceBase;
            KeReleaseSpinLock(&m_DeviceBase->m_SpinLock.m_Lock, v21);
            v24 = 0;
            v15->m_ParentObject = m_DeviceBase;
          }
          else
          {
            FxObject::TraceDroppedEvent(m_DeviceBase, FxObjectDroppedEventAddChildObjectInternal);
            KeReleaseSpinLock(&m_DeviceBase->m_SpinLock.m_Lock, v52);
            v24 = -1073741738;
          }
          KeReleaseSpinLock(&v15->m_SpinLock.m_Lock, (KIRQL)v54);
          if ( v24 >= 0 )
          {
            p_FxPoolFrameworks = &m_Globals->FxPoolFrameworks;
            goto LABEL_33;
          }
        }
      }
      else
      {
        FxObject::TraceDroppedEvent(v15, FxObjectDroppedEventAssignParentObject);
        KeReleaseSpinLock(&v15->m_SpinLock.m_Lock, v20);
        v24 = -1073741738;
      }
    }
    else
    {
      v24 = -1073741816;
    }
    FxObject::DeleteFromFailedCreate(this->m_Resources);
    result = v24;
    this->m_Resources = 0LL;
    return result;
  }
  if ( !DeviceInit->Pdo.Raw )
    goto LABEL_10;
LABEL_5:
  v6 = (FxPowerPolicyOwnerSettings *)FxPoolAllocator(
                                       m_Globals,
                                       &m_Globals->FxPoolFrameworks,
                                       ExDefaultNonPagedPoolType,
                                       0x238uLL,
                                       m_Globals->Tag,
                                       Caller);
  if ( v6 )
    FxPowerPolicyOwnerSettings::FxPowerPolicyOwnerSettings(v6, this);
  else
    v7 = 0LL;
  this->m_PowerPolicyMachine.m_Owner = v7;
  if ( !v7 )
    return -1073741670;
  result = FxPowerPolicyOwnerSettings::Init(v7);
  if ( result >= 0 )
  {
    FxPkgPnp::QueryForD3ColdInterface(this);
    goto LABEL_10;
  }
  return result;
}
