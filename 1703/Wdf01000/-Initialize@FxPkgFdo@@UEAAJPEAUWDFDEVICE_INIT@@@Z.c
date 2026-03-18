/*
 * XREFs of ?Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0029310
 * Callers:
 *     <none>
 * Callees:
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C00060A0 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C000D700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?AllocateEnumInfo@FxPkgPnp@@QEAAJXZ @ 0x1C0025414 (-AllocateEnumInfo@FxPkgPnp@@QEAAJXZ.c)
 *     ?Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C00266D0 (-Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?Initialize@FxChildList@@IEAAXPEAU_WDF_CHILD_LIST_CONFIG@@@Z @ 0x1C002CCAC (-Initialize@FxChildList@@IEAAXPEAU_WDF_CHILD_LIST_CONFIG@@@Z.c)
 *     ??0FxChildList@@IEAA@PEAU_FX_DRIVER_GLOBALS@@_KPEAVFxDevice@@E@Z @ 0x1C002D5A0 (--0FxChildList@@IEAA@PEAU_FX_DRIVER_GLOBALS@@_KPEAVFxDevice@@E@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     ?_ComputeTotalDescriptionSize@FxChildList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_CHILD_LIST_CONFIG@@PEA_K@Z @ 0x1C0038400 (-_ComputeTotalDescriptionSize@FxChildList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_CHILD_LIST_CONFIG.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C003F3E8 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003FAE4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     memset @ 0x1C0040480 (memset.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C00671C4 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D4AB0 (-Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

int __fastcall FxPkgFdo::Initialize(FxPkgFdo *this, WDFDEVICE_INIT *DeviceInit)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  int result; // eax
  __int64 v5; // rdx
  unsigned __int8 v6; // r8
  _POOL_TYPE v7; // ebx
  FxDevice *m_Device; // r14
  ULONG Tag; // edi
  void *Caller; // rax
  FxChildList *v11; // rax
  FxChildList *v12; // rdi
  FxChildList *v13; // rax
  FxChildList *v14; // rbx
  _FX_DRIVER_GLOBALS *v15; // rdx
  FxDeviceBase *m_DeviceBase; // rdi
  KIRQL v17; // al
  KIRQL v18; // r12
  KIRQL v19; // r13
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *p_m_ChildEntry; // rax
  int v22; // r15d
  _FX_DRIVER_GLOBALS *v23; // rax
  FxChildList *m_StaticDeviceList; // rcx
  unsigned int v25; // ebp
  FxTagTracker *m_ScanTag; // rcx
  _WDF_CHILD_LIST_CONFIG config; // [rsp+30h] [rbp-98h] BYREF
  void *retaddr; // [rsp+C8h] [rbp+0h]
  unsigned __int64 totalDescriptionSize; // [rsp+D0h] [rbp+8h] BYREF
  FxDeviceBase *v30; // [rsp+E0h] [rbp+18h]
  unsigned __int64 Size; // [rsp+E8h] [rbp+20h] BYREF

  m_Globals = this->m_Globals;
  totalDescriptionSize = 0LL;
  result = FxPkgPnp::Initialize(this, DeviceInit);
  if ( result < 0 )
    return result;
  result = FxPkgPnp::AllocateEnumInfo(this, v5, v6);
  if ( result < 0 )
    return result;
  memset(&config, 0, sizeof(config));
  config.Size = 96;
  config.IdentificationDescriptionSize = 16;
  config.EvtChildListCreateDevice = 0LL;
  result = FxChildList::_ComputeTotalDescriptionSize(m_Globals, &config, &totalDescriptionSize);
  if ( result < 0 )
    return result;
  v7 = ExDefaultNonPagedPoolType;
  m_Device = this->m_Device;
  this->m_StaticDeviceList = 0LL;
  Tag = m_Globals->Tag;
  if ( (int)FxCalculateObjectTotalSize2(m_Globals, 0x168u, 0, 0LL, &Size) < 0 )
    goto LABEL_41;
  if ( m_Globals->FxPoolTrackingOn )
    Caller = retaddr;
  else
    Caller = 0LL;
  v11 = (FxChildList *)FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, v7, Size, Tag, Caller);
  v12 = v11;
  if ( v11 )
  {
    if ( m_Globals->FxVerifierHandle )
    {
      memset(v11, 0, 0x30uLL);
      LODWORD(v12->m_ChildListHead.Flink) = 1146058822;
      v12 = (FxChildList *)((char *)v12 + 48);
    }
    memset(&v12[1].m_Type, 0, 0x30uLL);
    *(_QWORD *)&v12[1].m_Type = v12;
  }
  if ( !v12 || (FxChildList::FxChildList(v12, m_Globals, totalDescriptionSize, m_Device, 1u), (v14 = v13) == 0LL) )
  {
LABEL_41:
    WPP_IFR_SF_d(m_Globals, 2u, 0xCu, 0xAu, WPP_FxChildList_cpp_Traceguids, -1073741670);
    return -1073741670;
  }
  FxChildList::Initialize(v13, &config);
  this->m_StaticDeviceList = v14;
  m_DeviceBase = this->m_DeviceBase;
  v30 = 0LL;
  if ( !v14->m_ObjectSize )
  {
    v22 = -1073741816;
    goto LABEL_31;
  }
  if ( m_DeviceBase
    || !v14->m_ParentObject
    && (m_DeviceBase = (FxDeviceBase *)v14->m_Globals->Driver, m_DeviceBase != (FxDeviceBase *)v14) )
  {
    v30 = m_DeviceBase;
    if ( m_DeviceBase )
    {
      v17 = KeAcquireSpinLockRaiseToDpc(&v14->m_SpinLock.m_Lock);
      v18 = v17;
      if ( v14->m_ObjectState == 1 )
      {
        if ( v14->m_ParentObject )
        {
          KeReleaseSpinLock(&v14->m_SpinLock.m_Lock, v17);
          v22 = -1071644147;
        }
        else
        {
          v19 = KeAcquireSpinLockRaiseToDpc(&m_DeviceBase->m_SpinLock.m_Lock);
          if ( m_DeviceBase->m_ObjectState == 1 )
          {
            Blink = m_DeviceBase->m_ChildListHead.Blink;
            p_m_ChildEntry = &v14->m_ChildEntry;
            if ( Blink->Flink != &m_DeviceBase->m_ChildListHead )
              __fastfail(3u);
            p_m_ChildEntry->Flink = &m_DeviceBase->m_ChildListHead;
            v14->m_ChildEntry.Blink = Blink;
            Blink->Flink = p_m_ChildEntry;
            m_DeviceBase->m_ChildListHead.Blink = p_m_ChildEntry;
            if ( !v14->m_DeviceBase )
              v14->m_DeviceBase = m_DeviceBase->m_DeviceBase;
            KeReleaseSpinLock(&m_DeviceBase->m_SpinLock.m_Lock, v19);
            v14->m_ParentObject = m_DeviceBase;
            v22 = 0;
          }
          else
          {
            FxObject::TraceDroppedEvent(m_DeviceBase, FxObjectDroppedEventAddChildObjectInternal);
            KeReleaseSpinLock(&m_DeviceBase->m_SpinLock.m_Lock, v19);
            v22 = -1073741738;
          }
          KeReleaseSpinLock(&v14->m_SpinLock.m_Lock, v18);
          if ( v22 >= 0 )
            goto LABEL_24;
        }
      }
      else
      {
        FxObject::TraceDroppedEvent(v14, FxObjectDroppedEventAssignParentObject);
        KeReleaseSpinLock(&v14->m_SpinLock.m_Lock, v18);
        v22 = -1073741738;
      }
LABEL_31:
      FxObject::DeleteFromFailedCreate(this->m_StaticDeviceList);
      result = v22;
      this->m_StaticDeviceList = 0LL;
      return result;
    }
  }
LABEL_24:
  v23 = v14->m_Globals;
  v14->m_ObjectFlags |= 8u;
  if ( v23->FxVerifierOn )
    FxObject::Vf_VerifyLeakDetectionConsiderObject(v14, v15);
  m_StaticDeviceList = this->m_StaticDeviceList;
  v25 = _InterlockedIncrement(&m_StaticDeviceList->m_Refcnt);
  if ( SLOBYTE(m_StaticDeviceList->m_ObjectFlags) < 0 )
  {
    m_ScanTag = (FxTagTracker *)m_StaticDeviceList[-1].m_ScanTag;
    if ( m_ScanTag )
      FxTagTracker::UpdateTagHistory(
        m_ScanTag,
        this,
        448,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\km\\fxpkgfdokm.cpp",
        TagAddRef,
        v25);
  }
  return 0;
}
