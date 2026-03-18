/*
 * XREFs of ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C0015E00
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C00026E0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z @ 0x1C0003830 (-Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z.c)
 *     ?_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENTS_LIST@@E@Z @ 0x1C0009924 (-_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENT.c)
 *     ?BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z @ 0x1C0009A8C (-BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z.c)
 *     ?BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z @ 0x1C0009F74 (-BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z.c)
 *     ?InstallPackage@FxDevice@@QEAAXPEAVFxPackage@@@Z @ 0x1C000E414 (-InstallPackage@FxDevice@@QEAAXPEAVFxPackage@@@Z.c)
 *     ?FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C000EBA4 (-FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?PnpMatchResources@FxPkgPnp@@IEAAJXZ @ 0x1C001A370 (-PnpMatchResources@FxPkgPnp@@IEAAJXZ.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C001FC00 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C0025330 (-AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmi.c)
 *     imp_WdfDeviceWdmDispatchIrp @ 0x1C006CF50 (imp_WdfDeviceWdmDispatchIrp.c)
 *     FxCmResourceListInsertDescriptor @ 0x1C007E184 (FxCmResourceListInsertDescriptor.c)
 *     FxIoResourceListInsertDescriptor @ 0x1C007E2B8 (FxIoResourceListInsertDescriptor.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1C0017E30 (WPP_IFR_SF_qqLL.c)
 */

__int64 __fastcall FxObject::AssignParentObject(FxObject *this, FxObject *ParentObject)
{
  KIRQL v4; // al
  unsigned __int16 m_ObjectState; // dx
  KIRQL v6; // r15
  KIRQL v7; // al
  unsigned __int16 v8; // dx
  KIRQL v9; // r12
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *p_m_ChildEntry; // rax
  unsigned int v12; // r14d
  const void *_a2; // rcx
  const void *v15; // r14

  v4 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  m_ObjectState = this->m_ObjectState;
  v6 = v4;
  if ( m_ObjectState == 1 )
  {
    if ( this->m_ParentObject )
    {
      KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v4);
      return 3223323149LL;
    }
    else
    {
      v7 = KeAcquireSpinLockRaiseToDpc(&ParentObject->m_SpinLock.m_Lock);
      v8 = ParentObject->m_ObjectState;
      v9 = v7;
      if ( v8 == 1 )
      {
        Blink = ParentObject->m_ChildListHead.Blink;
        p_m_ChildEntry = &this->m_ChildEntry;
        this->m_ChildEntry.Flink = &ParentObject->m_ChildListHead;
        this->m_ChildEntry.Blink = Blink;
        if ( Blink->Flink != &ParentObject->m_ChildListHead )
          __fastfail(3u);
        Blink->Flink = p_m_ChildEntry;
        ParentObject->m_ChildListHead.Blink = p_m_ChildEntry;
        if ( !this->m_DeviceBase )
          this->m_DeviceBase = ParentObject->m_DeviceBase;
        KeReleaseSpinLock(&ParentObject->m_SpinLock.m_Lock, v9);
        v12 = 0;
        this->m_ParentObject = ParentObject;
      }
      else
      {
        if ( (ParentObject->m_ObjectFlags & 0x200) != 0 )
        {
          if ( ParentObject->m_ObjectSize )
            v15 = (const void *)((unsigned __int64)ParentObject ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v15 = 0LL;
          WPP_IFR_SF_qqLL(
            ParentObject->m_Globals,
            4u,
            0x14u,
            0xBu,
            WPP_FxObject_hpp_Traceguids,
            ParentObject,
            v15,
            v8,
            1u);
        }
        KeReleaseSpinLock(&ParentObject->m_SpinLock.m_Lock, v9);
        v12 = -1073741738;
      }
      KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v6);
      return v12;
    }
  }
  else
  {
    if ( (this->m_ObjectFlags & 0x200) != 0 )
    {
      if ( this->m_ObjectSize )
        _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a2 = 0LL;
      WPP_IFR_SF_qqLL(this->m_Globals, 4u, 0x14u, 0xBu, WPP_FxObject_hpp_Traceguids, this, _a2, m_ObjectState, 0);
    }
    KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v6);
    return 3221225558LL;
  }
}
