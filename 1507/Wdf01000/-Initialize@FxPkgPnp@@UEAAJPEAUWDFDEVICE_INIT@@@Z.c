/*
 * XREFs of ?Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C001B520
 * Callers:
 *     ?Initialize@FxPkgPdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0011830 (-Initialize@FxPkgPdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0013030 (-Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C0016050 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0017E30 (WPP_IFR_SF_qqLL.c)
 *     ?QueryForD3ColdInterface@FxPkgPnp@@QEAAXXZ @ 0x1C0018E00 (-QueryForD3ColdInterface@FxPkgPnp@@QEAAXXZ.c)
 *     ?RegisterCallbacks@FxPkgPnp@@QEAAJPEAU_WDF_PNPPOWER_EVENT_CALLBACKS@@@Z @ 0x1C001933C (-RegisterCallbacks@FxPkgPnp@@QEAAJPEAU_WDF_PNPPOWER_EVENT_CALLBACKS@@@Z.c)
 *     ??0FxPowerPolicyOwnerSettings@@QEAA@PEAVFxPkgPnp@@@Z @ 0x1C00279D0 (--0FxPowerPolicyOwnerSettings@@QEAA@PEAVFxPkgPnp@@@Z.c)
 *     ?Init@FxPowerPolicyOwnerSettings@@QEAAJXZ @ 0x1C0027B60 (-Init@FxPowerPolicyOwnerSettings@@QEAAJXZ.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0030D4C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ??0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0031BDC (--0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D1734 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
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
  _LIST_ENTRY *v11; // rax
  _LIST_ENTRY *p_FxPoolFrameworks; // r12
  FxCmResList *v13; // rax
  _FX_DRIVER_GLOBALS *v14; // rdx
  FxCmResList *v15; // rbx
  _FX_DRIVER_GLOBALS *v16; // rax
  KIRQL v17; // al
  FxCmResList *m_Resources; // rdi
  FxCmResList *m_DeviceBase; // rbx
  KIRQL v20; // al
  unsigned __int16 v21; // dx
  KIRQL v22; // r13
  KIRQL v23; // al
  unsigned __int16 v24; // dx
  KIRQL v25; // r13
  _LIST_ENTRY *v26; // rdx
  _LIST_ENTRY *v27; // rax
  int v28; // r12d
  FxCmResList *v29; // rcx
  unsigned int v30; // edx
  _POOL_TYPE v31; // ebx
  ULONG v32; // edi
  _LIST_ENTRY *v33; // rax
  FxCmResList *v34; // rax
  _FX_DRIVER_GLOBALS *v35; // rdx
  FxCmResList *v36; // rdi
  _FX_DRIVER_GLOBALS *v37; // rax
  KIRQL v38; // al
  FxCmResList *m_ResourcesRaw; // rbx
  FxCmResList *Driver; // rdi
  KIRQL v41; // al
  unsigned __int16 m_ObjectState; // dx
  KIRQL v43; // bp
  KIRQL v44; // al
  unsigned __int16 v45; // dx
  KIRQL v46; // r12
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *p_m_ChildEntry; // rax
  int v49; // r12d
  FxCmResList *v50; // rcx
  unsigned int v51; // r14d
  FxPowerPolicyOwnerSettings *m_Owner; // rcx
  _FX_DRIVER_GLOBALS *v53; // r13
  _LIST_ENTRY *v54; // r12
  FxVerifierLock *v55; // rax
  _LIST_ENTRY *v56; // rax
  _LIST_ENTRY *v57; // rdi
  const void *_a2; // rcx
  const void *v59; // rcx
  FxTagTracker *v60; // rcx
  _FX_DRIVER_GLOBALS *v61; // rbp
  _LIST_ENTRY *v62; // r12
  FxVerifierLock *v63; // rax
  _LIST_ENTRY *v64; // rax
  _LIST_ENTRY *v65; // rbx
  const void *v66; // rcx
  const void *v67; // rcx
  FxTagTracker *v68; // rcx
  unsigned __int64 Size[3]; // [rsp+50h] [rbp-58h] BYREF
  _LIST_ENTRY *Caller; // [rsp+A8h] [rbp+0h]
  KIRQL v71; // [rsp+B0h] [rbp+8h]
  KIRQL v72; // [rsp+B0h] [rbp+8h]
  unsigned __int64 Total; // [rsp+C8h] [rbp+20h] BYREF

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
      goto LABEL_126;
    if ( m_Globals->FxPoolTrackingOn )
      v11 = Caller;
    else
      v11 = 0LL;
    p_FxPoolFrameworks = (_LIST_ENTRY *)&m_Globals->FxPoolFrameworks;
    v13 = (FxCmResList *)FxPoolAllocator(m_Globals, (_LIST_ENTRY *)&m_Globals->FxPoolFrameworks, v9, Total, Tag, v11);
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
      goto LABEL_126;
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
      v53 = v15->m_Globals;
      if ( v53->FxVerifierLock )
      {
        v54 = 0LL;
        v55 = (FxVerifierLock *)FxPoolAllocator(
                                  v53,
                                  (_LIST_ENTRY *)&v53->FxPoolFrameworks,
                                  ExDefaultNonPagedPoolType,
                                  0xB0uLL,
                                  v53->Tag,
                                  Caller);
        if ( v55 && (FxVerifierLock::FxVerifierLock(v55, v53, v15), (v57 = v56) != 0LL) )
        {
          if ( BYTE2(v56[7].Blink) )
          {
            LODWORD(v56[3].Flink) = 1;
            v56[3].Blink = 0LL;
            LODWORD(v56[4].Flink) = 0;
            KeInitializeEvent((PRKEVENT)&v56[4].Blink, SynchronizationEvent, 0);
            LOBYTE(v57[2].Blink) = 1;
          }
          v54 = v57;
        }
        else
        {
          WPP_IFR_SF_d(v53, 2u, 0x12u, 0xCu, WPP_FxVerifierLock_hpp_Traceguids, -1073741670);
        }
        v15[-1].m_ListHead.Flink = v54;
        p_FxPoolFrameworks = (_LIST_ENTRY *)&m_Globals->FxPoolFrameworks;
      }
    }
    v15->m_Count = 0;
    v15->m_ListHead.Blink = &v15->m_ListHead;
    v15->m_ListHead.Flink = &v15->m_ListHead;
    v15->__vftable = (FxCmResList_vtbl *)&FxObject::`vftable'.WdfVerifierAllocateFailCount;
    *(_WORD *)&v15->m_AccessFlags = 0;
    v17 = KeAcquireSpinLockRaiseToDpc(&v15->m_SpinLock.m_Lock);
    v15->m_ObjectFlags |= 2u;
    KeReleaseSpinLock(&v15->m_SpinLock.m_Lock, v17);
    v15->__vftable = (FxCmResList_vtbl *)&FxCmResList::`vftable';
    this->m_Resources = v15;
    m_Resources = this->m_Resources;
    m_DeviceBase = (FxCmResList *)this->m_DeviceBase;
    if ( m_Resources->m_ObjectSize )
    {
      if ( !m_DeviceBase
        && (m_Resources->m_ParentObject
         || (m_DeviceBase = (FxCmResList *)m_Resources->m_Globals->Driver, m_DeviceBase == m_Resources))
        || !m_DeviceBase )
      {
LABEL_33:
        m_Resources->m_ObjectFlags |= 8u;
        v29 = this->m_Resources;
        v30 = _InterlockedIncrement(&v29->m_Refcnt);
        if ( SLOBYTE(v29->m_ObjectFlags) < 0 )
        {
          v60 = *(FxTagTracker **)&v29[-1].m_Count;
          if ( v60 )
            FxTagTracker::UpdateTagHistory(
              v60,
              this,
              475,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpnp.cpp",
              TagAddRef,
              v30);
        }
        v31 = ExDefaultNonPagedPoolType;
        this->m_ResourcesRaw = 0LL;
        v32 = m_Globals->Tag;
        if ( (int)FxCalculateObjectTotalSize2(m_Globals, 0x98u, 0, 0LL, Size) >= 0 )
        {
          if ( m_Globals->FxPoolTrackingOn )
            v33 = Caller;
          else
            v33 = 0LL;
          v34 = (FxCmResList *)FxPoolAllocator(m_Globals, p_FxPoolFrameworks, v31, Size[0], v32, v33);
          v36 = v34;
          if ( v34 )
          {
            if ( m_Globals->FxVerifierHandle )
            {
              memset(v34, 0, 0x20uLL);
              *(_DWORD *)(&v36->m_ObjectState + 1) = 1146058822;
              v36 = (FxCmResList *)((char *)v36 + 32);
            }
            memset(&v36[1].m_Type, 0, 0x30uLL);
            *(_QWORD *)&v36[1].m_Type = v36;
          }
          if ( v36 )
          {
            v36->m_Globals = m_Globals;
            v36->__vftable = (FxCmResList_vtbl *)&FxObject::`vftable';
            *(_DWORD *)&v36->m_Type = 10489910;
            v36->m_SpinLock.m_Lock = 0LL;
            v36->m_SpinLock.m_DbgFlagIsInitialized = 1;
            v36->m_Refcnt = 1;
            *(_DWORD *)&v36->m_ObjectFlags = 0x10000;
            v36->m_ParentObject = 0LL;
            v36->m_ChildListHead.Blink = &v36->m_ChildListHead;
            v36->m_ChildListHead.Flink = &v36->m_ChildListHead;
            v36->m_ChildEntry.Blink = &v36->m_ChildEntry;
            v36->m_ChildEntry.Flink = &v36->m_ChildEntry;
            v37 = v36->m_Globals;
            v36->m_DisposeSingleEntry.Next = 0LL;
            v36->m_DeviceBase = 0LL;
            if ( v37->FxVerifierOn )
              FxObject::Vf_VerifyConstruct(v36, v35, 0);
            v36->__vftable = (FxCmResList_vtbl *)&FxNonPagedObject::`vftable';
            v36->m_NPLock.m_Lock = 0LL;
            v36->m_NPLock.m_DbgFlagIsInitialized = 1;
            if ( SLOBYTE(v36->m_ObjectFlags) < 0 )
            {
              v61 = v36->m_Globals;
              if ( v61->FxVerifierLock )
              {
                v62 = 0LL;
                v63 = (FxVerifierLock *)FxPoolAllocator(
                                          v61,
                                          (_LIST_ENTRY *)&v61->FxPoolFrameworks,
                                          ExDefaultNonPagedPoolType,
                                          0xB0uLL,
                                          v61->Tag,
                                          Caller);
                if ( v63 && (FxVerifierLock::FxVerifierLock(v63, v61, v36), (v65 = v64) != 0LL) )
                {
                  if ( BYTE2(v64[7].Blink) )
                  {
                    LODWORD(v64[3].Flink) = 1;
                    v64[3].Blink = 0LL;
                    LODWORD(v64[4].Flink) = 0;
                    KeInitializeEvent((PRKEVENT)&v64[4].Blink, SynchronizationEvent, 0);
                    LOBYTE(v65[2].Blink) = 1;
                  }
                  v62 = v65;
                }
                else
                {
                  WPP_IFR_SF_d(v61, 2u, 0x12u, 0xCu, WPP_FxVerifierLock_hpp_Traceguids, -1073741670);
                }
                v36[-1].m_ListHead.Flink = v62;
              }
            }
            v36->m_Count = 0;
            v36->m_ListHead.Blink = &v36->m_ListHead;
            v36->m_ListHead.Flink = &v36->m_ListHead;
            v36->__vftable = (FxCmResList_vtbl *)&FxObject::`vftable'.WdfVerifierAllocateFailCount;
            *(_WORD *)&v36->m_AccessFlags = 0;
            v38 = KeAcquireSpinLockRaiseToDpc(&v36->m_SpinLock.m_Lock);
            v36->m_ObjectFlags |= 2u;
            KeReleaseSpinLock(&v36->m_SpinLock.m_Lock, v38);
            v36->__vftable = (FxCmResList_vtbl *)&FxCmResList::`vftable';
            this->m_ResourcesRaw = v36;
            m_ResourcesRaw = this->m_ResourcesRaw;
            Driver = (FxCmResList *)this->m_DeviceBase;
            if ( m_ResourcesRaw->m_ObjectSize )
            {
              if ( !Driver
                && (m_ResourcesRaw->m_ParentObject
                 || (Driver = (FxCmResList *)m_ResourcesRaw->m_Globals->Driver, Driver == m_ResourcesRaw))
                || !Driver )
              {
LABEL_56:
                m_ResourcesRaw->m_ObjectFlags |= 8u;
                v50 = this->m_ResourcesRaw;
                v51 = _InterlockedIncrement(&v50->m_Refcnt);
                if ( SLOBYTE(v50->m_ObjectFlags) < 0 )
                {
                  v68 = *(FxTagTracker **)&v50[-1].m_Count;
                  if ( v68 )
                    FxTagTracker::UpdateTagHistory(
                      v68,
                      this,
                      504,
                      "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpnp.cpp",
                      TagAddRef,
                      v51);
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
              v41 = KeAcquireSpinLockRaiseToDpc(&m_ResourcesRaw->m_SpinLock.m_Lock);
              m_ObjectState = m_ResourcesRaw->m_ObjectState;
              v43 = v41;
              v72 = v41;
              if ( m_ObjectState == 1 )
              {
                if ( m_ResourcesRaw->m_ParentObject )
                {
                  KeReleaseSpinLock(&m_ResourcesRaw->m_SpinLock.m_Lock, v41);
                  v49 = -1071644147;
                }
                else
                {
                  v44 = KeAcquireSpinLockRaiseToDpc(&Driver->m_SpinLock.m_Lock);
                  v45 = Driver->m_ObjectState;
                  v46 = v44;
                  if ( v45 == 1 )
                  {
                    Blink = Driver->m_ChildListHead.Blink;
                    p_m_ChildEntry = &m_ResourcesRaw->m_ChildEntry;
                    m_ResourcesRaw->m_ChildEntry.Flink = &Driver->m_ChildListHead;
                    m_ResourcesRaw->m_ChildEntry.Blink = Blink;
                    if ( Blink->Flink != &Driver->m_ChildListHead )
                      __fastfail(3u);
                    Blink->Flink = p_m_ChildEntry;
                    Driver->m_ChildListHead.Blink = p_m_ChildEntry;
                    if ( !m_ResourcesRaw->m_DeviceBase )
                      m_ResourcesRaw->m_DeviceBase = Driver->m_DeviceBase;
                    KeReleaseSpinLock(&Driver->m_SpinLock.m_Lock, v46);
                    m_ResourcesRaw->m_ParentObject = Driver;
                    v49 = 0;
                  }
                  else
                  {
                    if ( (Driver->m_ObjectFlags & 0x200) != 0 )
                    {
                      if ( Driver->m_ObjectSize )
                        v67 = (const void *)((unsigned __int64)Driver ^ 0xFFFFFFFFFFFFFFF8uLL);
                      else
                        v67 = 0LL;
                      WPP_IFR_SF_qqLL(
                        Driver->m_Globals,
                        4u,
                        0x14u,
                        0xBu,
                        WPP_FxObject_hpp_Traceguids,
                        Driver,
                        v67,
                        v45,
                        1u);
                    }
                    KeReleaseSpinLock(&Driver->m_SpinLock.m_Lock, v46);
                    v49 = -1073741738;
                  }
                  KeReleaseSpinLock(&m_ResourcesRaw->m_SpinLock.m_Lock, v72);
                  if ( v49 >= 0 )
                    goto LABEL_56;
                }
              }
              else
              {
                if ( (m_ResourcesRaw->m_ObjectFlags & 0x200) != 0 )
                {
                  if ( m_ResourcesRaw->m_ObjectSize )
                    v66 = (const void *)((unsigned __int64)m_ResourcesRaw ^ 0xFFFFFFFFFFFFFFF8uLL);
                  else
                    v66 = 0LL;
                  WPP_IFR_SF_qqLL(
                    m_ResourcesRaw->m_Globals,
                    4u,
                    0x14u,
                    0xBu,
                    WPP_FxObject_hpp_Traceguids,
                    m_ResourcesRaw,
                    v66,
                    m_ObjectState,
                    0);
                }
                KeReleaseSpinLock(&m_ResourcesRaw->m_SpinLock.m_Lock, v43);
                v49 = -1073741738;
              }
            }
            else
            {
              v49 = -1073741816;
            }
            FxObject::DeleteFromFailedCreate(this->m_ResourcesRaw);
            result = v49;
            this->m_ResourcesRaw = 0LL;
            return result;
          }
        }
LABEL_126:
        WPP_IFR_SF_d(m_Globals, 2u, 0x12u, 0xCu, WPP_FxResource_hpp_Traceguids, -1073741670);
        return -1073741670;
      }
      v20 = KeAcquireSpinLockRaiseToDpc(&m_Resources->m_SpinLock.m_Lock);
      v21 = m_Resources->m_ObjectState;
      v22 = v20;
      v71 = v20;
      if ( v21 == 1 )
      {
        if ( m_Resources->m_ParentObject )
        {
          KeReleaseSpinLock(&m_Resources->m_SpinLock.m_Lock, v20);
          v28 = -1071644147;
        }
        else
        {
          v23 = KeAcquireSpinLockRaiseToDpc(&m_DeviceBase->m_SpinLock.m_Lock);
          v24 = m_DeviceBase->m_ObjectState;
          v25 = v23;
          if ( v24 == 1 )
          {
            v26 = m_DeviceBase->m_ChildListHead.Blink;
            v27 = &m_Resources->m_ChildEntry;
            m_Resources->m_ChildEntry.Flink = &m_DeviceBase->m_ChildListHead;
            m_Resources->m_ChildEntry.Blink = v26;
            if ( v26->Flink != &m_DeviceBase->m_ChildListHead )
              __fastfail(3u);
            v26->Flink = v27;
            m_DeviceBase->m_ChildListHead.Blink = v27;
            if ( !m_Resources->m_DeviceBase )
              m_Resources->m_DeviceBase = m_DeviceBase->m_DeviceBase;
            KeReleaseSpinLock(&m_DeviceBase->m_SpinLock.m_Lock, v25);
            m_Resources->m_ParentObject = m_DeviceBase;
            v28 = 0;
          }
          else
          {
            if ( (m_DeviceBase->m_ObjectFlags & 0x200) != 0 )
            {
              if ( m_DeviceBase->m_ObjectSize )
                v59 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
              else
                v59 = 0LL;
              WPP_IFR_SF_qqLL(
                m_DeviceBase->m_Globals,
                4u,
                0x14u,
                0xBu,
                WPP_FxObject_hpp_Traceguids,
                m_DeviceBase,
                v59,
                v24,
                1u);
            }
            KeReleaseSpinLock(&m_DeviceBase->m_SpinLock.m_Lock, v25);
            v28 = -1073741738;
          }
          KeReleaseSpinLock(&m_Resources->m_SpinLock.m_Lock, v71);
          if ( v28 >= 0 )
          {
            p_FxPoolFrameworks = (_LIST_ENTRY *)&m_Globals->FxPoolFrameworks;
            goto LABEL_33;
          }
        }
      }
      else
      {
        if ( (m_Resources->m_ObjectFlags & 0x200) != 0 )
        {
          if ( m_Resources->m_ObjectSize )
            _a2 = (const void *)((unsigned __int64)m_Resources ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            _a2 = 0LL;
          WPP_IFR_SF_qqLL(
            m_Resources->m_Globals,
            4u,
            0x14u,
            0xBu,
            WPP_FxObject_hpp_Traceguids,
            m_Resources,
            _a2,
            v21,
            0);
        }
        KeReleaseSpinLock(&m_Resources->m_SpinLock.m_Lock, v22);
        v28 = -1073741738;
      }
    }
    else
    {
      v28 = -1073741816;
    }
    FxObject::DeleteFromFailedCreate(this->m_Resources);
    result = v28;
    this->m_Resources = 0LL;
    return result;
  }
  if ( !DeviceInit->Pdo.Raw )
    goto LABEL_10;
LABEL_5:
  v6 = (FxPowerPolicyOwnerSettings *)FxPoolAllocator(
                                       m_Globals,
                                       (_LIST_ENTRY *)&m_Globals->FxPoolFrameworks,
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
