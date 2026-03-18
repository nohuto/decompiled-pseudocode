/*
 * XREFs of ?Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0018910
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateEnumInfo@FxPkgPnp@@QEAAJXZ @ 0x1C00160CC (-AllocateEnumInfo@FxPkgPnp@@QEAAJXZ.c)
 *     ?Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0016240 (-Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?_CreateAndInit@FxChildList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@_KPEAVFxDevice@@PEAU_WDF_CHILD_LIST_CONFIG@@E@Z @ 0x1C0025F90 (-_CreateAndInit@FxChildList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@_KP.c)
 *     ?_ComputeTotalDescriptionSize@FxChildList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_CHILD_LIST_CONFIG@@PEA_K@Z @ 0x1C002F828 (-_ComputeTotalDescriptionSize@FxChildList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_CHILD_LIST_CONFIG.c)
 *     memset @ 0x1C0036C40 (memset.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0056B68 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C006EA24 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C0070180 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 */

int __fastcall FxPkgFdo::Initialize(FxPkgFdo *this, WDFDEVICE_INIT *DeviceInit)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  int result; // eax
  __int64 v5; // rdx
  unsigned __int8 v6; // r8
  FxChildList *m_StaticDeviceList; // rbx
  FxDeviceBase *m_DeviceBase; // rdi
  KIRQL v9; // al
  KIRQL v10; // r13
  KIRQL v11; // r8
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *p_m_ChildEntry; // rax
  int v14; // ebp
  FxChildList *v15; // rcx
  unsigned int v16; // r14d
  FxTagTracker *v17; // rcx
  _WDF_CHILD_LIST_CONFIG config; // [rsp+50h] [rbp-98h] BYREF
  KIRQL v19; // [rsp+F0h] [rbp+8h]
  KIRQL v20; // [rsp+100h] [rbp+18h]
  unsigned __int64 totalDescriptionSize; // [rsp+108h] [rbp+20h] BYREF

  m_Globals = this->m_Globals;
  totalDescriptionSize = 0LL;
  result = FxPkgPnp::Initialize(this, DeviceInit);
  if ( result >= 0 )
  {
    result = FxPkgPnp::AllocateEnumInfo(this, v5, v6);
    if ( result >= 0 )
    {
      memset(&config, 0, sizeof(config));
      config.Size = 96;
      config.IdentificationDescriptionSize = 16;
      config.EvtChildListCreateDevice = 0LL;
      result = FxChildList::_ComputeTotalDescriptionSize(m_Globals, &config, &totalDescriptionSize);
      if ( result >= 0 )
      {
        result = FxChildList::_CreateAndInit(
                   &this->m_StaticDeviceList,
                   m_Globals,
                   0LL,
                   totalDescriptionSize,
                   this->m_Device,
                   &config,
                   1u);
        if ( result >= 0 )
        {
          m_StaticDeviceList = this->m_StaticDeviceList;
          m_DeviceBase = this->m_DeviceBase;
          if ( m_StaticDeviceList->m_ObjectSize )
          {
            if ( !m_DeviceBase
              && (m_StaticDeviceList->m_ParentObject
               || (m_DeviceBase = (FxDeviceBase *)m_StaticDeviceList->m_Globals->Driver,
                   m_DeviceBase == (FxDeviceBase *)m_StaticDeviceList))
              || !m_DeviceBase )
            {
LABEL_16:
              m_StaticDeviceList->m_ObjectFlags |= 8u;
              v14 = 0;
              v15 = this->m_StaticDeviceList;
              v16 = _InterlockedIncrement(&v15->m_Refcnt);
              if ( SLOBYTE(v15->m_ObjectFlags) < 0 )
              {
                v17 = *(FxTagTracker **)&v15[-1].m_ScanEvent.m_Event.Header.Lock;
                if ( v17 )
                  FxTagTracker::UpdateTagHistory(
                    v17,
                    this,
                    448,
                    "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\km\\fxpkgfdokm.cpp",
                    TagAddRef,
                    v16);
              }
              return v14;
            }
            v9 = KeAcquireSpinLockRaiseToDpc(&m_StaticDeviceList->m_SpinLock.m_Lock);
            v10 = v9;
            v20 = v9;
            if ( m_StaticDeviceList->m_ObjectState == 1 )
            {
              if ( m_StaticDeviceList->m_ParentObject )
              {
                KeReleaseSpinLock(&m_StaticDeviceList->m_SpinLock.m_Lock, v9);
                v14 = -1071644147;
              }
              else
              {
                v11 = KeAcquireSpinLockRaiseToDpc(&m_DeviceBase->m_SpinLock.m_Lock);
                v19 = v11;
                if ( m_DeviceBase->m_ObjectState == 1 )
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
                  KeReleaseSpinLock(&m_DeviceBase->m_SpinLock.m_Lock, v11);
                  m_StaticDeviceList->m_ParentObject = m_DeviceBase;
                  v14 = 0;
                }
                else
                {
                  FxObject::TraceDroppedEvent(m_DeviceBase, FxObjectDroppedEventAddChildObjectInternal);
                  KeReleaseSpinLock(&m_DeviceBase->m_SpinLock.m_Lock, v19);
                  v14 = -1073741738;
                }
                KeReleaseSpinLock(&m_StaticDeviceList->m_SpinLock.m_Lock, v20);
                if ( v14 >= 0 )
                  goto LABEL_16;
              }
            }
            else
            {
              FxObject::TraceDroppedEvent(m_StaticDeviceList, FxObjectDroppedEventAssignParentObject);
              KeReleaseSpinLock(&m_StaticDeviceList->m_SpinLock.m_Lock, v10);
              v14 = -1073741738;
            }
          }
          else
          {
            v14 = -1073741816;
          }
          FxObject::DeleteFromFailedCreate(this->m_StaticDeviceList);
          this->m_StaticDeviceList = 0LL;
          return v14;
        }
      }
    }
  }
  return result;
}
