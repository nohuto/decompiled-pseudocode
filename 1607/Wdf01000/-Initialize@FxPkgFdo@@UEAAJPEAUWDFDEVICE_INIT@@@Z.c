/*
 * XREFs of ?Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0029C70
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateEnumInfo@FxPkgPnp@@QEAAJXZ @ 0x1C0025CD4 (-AllocateEnumInfo@FxPkgPnp@@QEAAJXZ.c)
 *     ?Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0026B60 (-Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?_CreateAndInit@FxChildList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@_KPEAVFxDevice@@PEAU_WDF_CHILD_LIST_CONFIG@@E@Z @ 0x1C002C790 (-_CreateAndInit@FxChildList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@_KP.c)
 *     ?_ComputeTotalDescriptionSize@FxChildList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_CHILD_LIST_CONFIG@@PEA_K@Z @ 0x1C002C8B4 (-_ComputeTotalDescriptionSize@FxChildList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_CHILD_LIST_CONFIG.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C003B8A0 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003BF80 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     memset @ 0x1C003C780 (memset.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0063E54 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 */

int __fastcall FxPkgFdo::Initialize(FxPkgFdo *this, WDFDEVICE_INIT *DeviceInit)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  int result; // eax
  __int64 v5; // rdx
  unsigned __int8 v6; // r8
  FxObject **p_m_StaticDeviceList; // r15
  FxObject *v8; // rbx
  FxDeviceBase *m_DeviceBase; // rsi
  KIRQL v10; // al
  KIRQL v11; // r13
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *p_m_ChildEntry; // rax
  int v14; // edi
  FxObject *v15; // rdx
  unsigned int v16; // ecx
  FxTagTracker *Flink; // rax
  _WDF_CHILD_LIST_CONFIG config; // [rsp+40h] [rbp-39h] BYREF
  KIRQL NewIrql; // [rsp+E0h] [rbp+67h]
  unsigned __int64 totalDescriptionSize; // [rsp+F0h] [rbp+77h] BYREF
  FxDeviceBase *v21; // [rsp+F8h] [rbp+7Fh]

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
        p_m_StaticDeviceList = &this->m_StaticDeviceList;
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
          v8 = *p_m_StaticDeviceList;
          m_DeviceBase = this->m_DeviceBase;
          v21 = 0LL;
          if ( !v8->m_ObjectSize )
          {
            v14 = -1073741816;
            goto LABEL_24;
          }
          if ( !m_DeviceBase )
          {
            if ( v8->m_ParentObject )
              goto LABEL_16;
            m_DeviceBase = (FxDeviceBase *)v8->m_Globals->Driver;
            if ( m_DeviceBase == v8 )
              goto LABEL_16;
          }
          v21 = m_DeviceBase;
          if ( !m_DeviceBase )
            goto LABEL_16;
          v10 = KeAcquireSpinLockRaiseToDpc(&v8->m_SpinLock.m_Lock);
          v11 = v10;
          if ( v8->m_ObjectState == 1 )
          {
            if ( !v8->m_ParentObject )
            {
              NewIrql = KeAcquireSpinLockRaiseToDpc(&m_DeviceBase->m_SpinLock.m_Lock);
              if ( m_DeviceBase->m_ObjectState == 1 )
              {
                Blink = m_DeviceBase->m_ChildListHead.Blink;
                p_m_ChildEntry = &v8->m_ChildEntry;
                if ( Blink->Flink != &m_DeviceBase->m_ChildListHead )
                  __fastfail(3u);
                p_m_ChildEntry->Flink = &m_DeviceBase->m_ChildListHead;
                v8->m_ChildEntry.Blink = Blink;
                Blink->Flink = p_m_ChildEntry;
                m_DeviceBase->m_ChildListHead.Blink = p_m_ChildEntry;
                if ( !v8->m_DeviceBase )
                  v8->m_DeviceBase = m_DeviceBase->m_DeviceBase;
                KeReleaseSpinLock(&m_DeviceBase->m_SpinLock.m_Lock, NewIrql);
                v14 = 0;
                v8->m_ParentObject = m_DeviceBase;
              }
              else
              {
                FxObject::TraceDroppedEvent(m_DeviceBase, FxObjectDroppedEventAddChildObjectInternal);
                KeReleaseSpinLock(&m_DeviceBase->m_SpinLock.m_Lock, NewIrql);
                v14 = -1073741738;
              }
              KeReleaseSpinLock(&v8->m_SpinLock.m_Lock, v11);
              if ( v14 < 0 )
                goto LABEL_24;
LABEL_16:
              v8->m_ObjectFlags |= 8u;
              v14 = 0;
              goto LABEL_17;
            }
            KeReleaseSpinLock(&v8->m_SpinLock.m_Lock, v10);
            v14 = -1071644147;
          }
          else
          {
            FxObject::TraceDroppedEvent(v8, FxObjectDroppedEventAssignParentObject);
            KeReleaseSpinLock(&v8->m_SpinLock.m_Lock, v11);
            v14 = -1073741738;
          }
LABEL_17:
          if ( v14 >= 0 )
          {
            v15 = *p_m_StaticDeviceList;
            v16 = _InterlockedIncrement(&(*p_m_StaticDeviceList)->m_Refcnt);
            if ( SLOBYTE(v15->m_ObjectFlags) < 0 )
              Flink = (FxTagTracker *)v15[-1].m_ChildEntry.Flink;
            else
              Flink = 0LL;
            if ( Flink )
              FxTagTracker::UpdateTagHistory(
                Flink,
                this,
                448,
                "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\km\\fxpkgfdokm.cpp",
                TagAddRef,
                v16);
            return v14;
          }
LABEL_24:
          FxObject::DeleteFromFailedCreate(*p_m_StaticDeviceList);
          *p_m_StaticDeviceList = 0LL;
          return v14;
        }
      }
    }
  }
  return result;
}
