/*
 * XREFs of ?Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0013030
 * Callers:
 *     <none>
 * Callees:
 *     ?_ComputeTotalDescriptionSize@FxChildList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_CHILD_LIST_CONFIG@@PEA_K@Z @ 0x1C0010DA8 (-_ComputeTotalDescriptionSize@FxChildList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_CHILD_LIST_CONFIG.c)
 *     ?_CreateAndInit@FxChildList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@_KPEAVFxDevice@@PEAU_WDF_CHILD_LIST_CONFIG@@E@Z @ 0x1C0012320 (-_CreateAndInit@FxChildList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@_KP.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0017E30 (WPP_IFR_SF_qqLL.c)
 *     ?AllocateEnumInfo@FxPkgPnp@@QEAAJXZ @ 0x1C001AAFC (-AllocateEnumInfo@FxPkgPnp@@QEAAJXZ.c)
 *     ?Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C001B520 (-Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0030D4C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     memset @ 0x1C00333C0 (memset.c)
 */

int __fastcall FxPkgFdo::Initialize(FxPkgFdo *this, WDFDEVICE_INIT *DeviceInit)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  int result; // eax
  FxChildList *m_StaticDeviceList; // rbx
  FxChildList *m_DeviceBase; // rdi
  KIRQL v7; // al
  unsigned __int16 m_ObjectState; // dx
  KIRQL v9; // r12
  KIRQL v10; // al
  unsigned __int16 v11; // dx
  KIRQL v12; // r13
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *p_m_ChildEntry; // rax
  int v15; // r12d
  FxChildList *v16; // rcx
  unsigned int v17; // ebp
  const void *v18; // rcx
  const void *v19; // rcx
  FxTagTracker *v20; // rcx
  _WDF_CHILD_LIST_CONFIG config; // [rsp+50h] [rbp-98h] BYREF
  KIRQL v22; // [rsp+F0h] [rbp+8h]
  unsigned __int64 totalDescriptionSize; // [rsp+100h] [rbp+18h] BYREF
  FxChildList *v24; // [rsp+108h] [rbp+20h]

  m_Globals = this->m_Globals;
  totalDescriptionSize = 0LL;
  result = FxPkgPnp::Initialize(this, DeviceInit);
  if ( result < 0 )
    return result;
  result = FxPkgPnp::AllocateEnumInfo(this);
  if ( result < 0 )
    return result;
  memset(&config, 0, sizeof(config));
  config.Size = 96;
  config.IdentificationDescriptionSize = 16;
  config.EvtChildListCreateDevice = 0LL;
  result = FxChildList::_ComputeTotalDescriptionSize(m_Globals, &config, &totalDescriptionSize);
  if ( result < 0 )
    return result;
  result = FxChildList::_CreateAndInit(
             &this->m_StaticDeviceList,
             m_Globals,
             0LL,
             totalDescriptionSize,
             this->m_Device,
             &config,
             1u);
  if ( result < 0 )
    return result;
  m_StaticDeviceList = this->m_StaticDeviceList;
  m_DeviceBase = (FxChildList *)this->m_DeviceBase;
  v24 = 0LL;
  if ( !m_StaticDeviceList->m_ObjectSize )
  {
    v15 = -1073741816;
    goto LABEL_20;
  }
  if ( m_DeviceBase
    || !m_StaticDeviceList->m_ParentObject
    && (m_DeviceBase = (FxChildList *)m_StaticDeviceList->m_Globals->Driver, m_DeviceBase != m_StaticDeviceList) )
  {
    v24 = m_DeviceBase;
    if ( m_DeviceBase )
    {
      v7 = KeAcquireSpinLockRaiseToDpc(&m_StaticDeviceList->m_SpinLock.m_Lock);
      m_ObjectState = m_StaticDeviceList->m_ObjectState;
      v9 = v7;
      v22 = v7;
      if ( m_ObjectState == 1 )
      {
        if ( m_StaticDeviceList->m_ParentObject )
        {
          KeReleaseSpinLock(&m_StaticDeviceList->m_SpinLock.m_Lock, v7);
          v15 = -1071644147;
        }
        else
        {
          v10 = KeAcquireSpinLockRaiseToDpc(&m_DeviceBase->m_SpinLock.m_Lock);
          v11 = m_DeviceBase->m_ObjectState;
          v12 = v10;
          if ( v11 == 1 )
          {
            Blink = m_DeviceBase->m_ChildListHead.Blink;
            p_m_ChildEntry = &m_StaticDeviceList->m_ChildEntry;
            m_StaticDeviceList->m_ChildEntry.Flink = &m_DeviceBase->m_ChildListHead;
            m_StaticDeviceList->m_ChildEntry.Blink = Blink;
            if ( Blink->Flink != &m_DeviceBase->m_ChildListHead )
              __fastfail(3u);
            Blink->Flink = p_m_ChildEntry;
            m_DeviceBase->m_ChildListHead.Blink = p_m_ChildEntry;
            if ( !m_StaticDeviceList->m_DeviceBase )
              m_StaticDeviceList->m_DeviceBase = m_DeviceBase->m_DeviceBase;
            KeReleaseSpinLock(&m_DeviceBase->m_SpinLock.m_Lock, v12);
            m_StaticDeviceList->m_ParentObject = m_DeviceBase;
            v15 = 0;
          }
          else
          {
            if ( (m_DeviceBase->m_ObjectFlags & 0x200) != 0 )
            {
              if ( m_DeviceBase->m_ObjectSize )
                v19 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
              else
                v19 = 0LL;
              WPP_IFR_SF_qqLL(
                m_DeviceBase->m_Globals,
                4u,
                0x14u,
                0xBu,
                WPP_FxObject_hpp_Traceguids,
                m_DeviceBase,
                v19,
                v11,
                1u);
            }
            KeReleaseSpinLock(&m_DeviceBase->m_SpinLock.m_Lock, v12);
            v15 = -1073741738;
          }
          KeReleaseSpinLock(&m_StaticDeviceList->m_SpinLock.m_Lock, v22);
          if ( v15 >= 0 )
            goto LABEL_16;
        }
      }
      else
      {
        if ( (m_StaticDeviceList->m_ObjectFlags & 0x200) != 0 )
        {
          if ( m_StaticDeviceList->m_ObjectSize )
            v18 = (const void *)((unsigned __int64)m_StaticDeviceList ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v18 = 0LL;
          WPP_IFR_SF_qqLL(
            m_StaticDeviceList->m_Globals,
            4u,
            0x14u,
            0xBu,
            WPP_FxObject_hpp_Traceguids,
            m_StaticDeviceList,
            v18,
            m_ObjectState,
            0);
        }
        KeReleaseSpinLock(&m_StaticDeviceList->m_SpinLock.m_Lock, v9);
        v15 = -1073741738;
      }
LABEL_20:
      FxObject::DeleteFromFailedCreate(this->m_StaticDeviceList);
      result = v15;
      this->m_StaticDeviceList = 0LL;
      return result;
    }
  }
LABEL_16:
  m_StaticDeviceList->m_ObjectFlags |= 8u;
  v16 = this->m_StaticDeviceList;
  v17 = _InterlockedIncrement(&v16->m_Refcnt);
  if ( SLOBYTE(v16->m_ObjectFlags) < 0 )
  {
    v20 = *(FxTagTracker **)&v16[-1].m_ScanEvent.m_Event.Header.Lock;
    if ( v20 )
      FxTagTracker::UpdateTagHistory(
        v20,
        this,
        448,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\km\\fxpkgfdokm.cpp",
        TagAddRef,
        v17);
  }
  return 0;
}
