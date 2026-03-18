/*
 * XREFs of ?PnpQueryResources@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C002C290
 * Callers:
 *     ?_PnpQueryResources@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C002E1A0 (-_PnpQueryResources@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0008B90 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?_CreateAndInit@FxCmResList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x1C0015BB8 (-_CreateAndInit@FxCmResList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAU_WDF_OBJECT_A.c)
 *     ?CreateWdmList@FxCmResList@@QEAAPEAU_CM_RESOURCE_LIST@@W4_POOL_TYPE@@@Z @ 0x1C0081A04 (-CreateWdmList@FxCmResList@@QEAAPEAU_CM_RESOURCE_LIST@@W4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall FxPkgPdo::PnpQueryResources(FxPkgPdo *this, FxIrp *Irp, FxDevice *a3, _WDF_OBJECT_ATTRIBUTES *a4)
{
  _CM_RESOURCE_LIST *WdmList; // rbx
  FxIrp *v5; // r14
  FxPkgPdo *v6; // rsi
  int Status; // edi
  FxCmResList *v8; // r15
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int64 v10; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, WDFCMRESLIST__ *); // rax
  unsigned int v12; // r8d
  FxCmResList *pResList; // [rsp+50h] [rbp+8h] BYREF
  WDFCMRESLIST__ *list; // [rsp+60h] [rbp+18h] BYREF

  WdmList = 0LL;
  v5 = Irp;
  v6 = this;
  pResList = 0LL;
  if ( this->m_DeviceResourcesQuery.m_Method )
  {
    Status = FxCmResList::_CreateAndInit(&pResList, this->m_Globals, a3, a4, 3u);
    if ( Status >= 0 )
    {
      v8 = pResList;
      Status = FxObject::Commit(pResList, 0LL, (void **)&list, 0LL, 1u);
      if ( Status >= 0 )
      {
        m_DeviceBase = v6->m_DeviceBase;
        if ( m_DeviceBase->m_ObjectSize )
          v10 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
        else
          v10 = 0LL;
        m_Method = v6->m_DeviceResourcesQuery.m_Method;
        if ( m_Method )
          Status = m_Method((WDFDEVICE__ *)v10, list);
        else
          Status = 0;
        if ( Status >= 0 )
        {
          if ( v8->m_Count )
          {
            WdmList = FxCmResList::CreateWdmList(v8, PagedPool);
          }
          else
          {
            Status = v5->m_Irp->IoStatus.Status;
            WdmList = (_CM_RESOURCE_LIST *)v5->m_Irp->IoStatus.Information;
          }
        }
      }
      v8->DeleteObject(v8);
    }
    v12 = Status;
    Irp = v5;
    this = v6;
    v5->m_Irp->IoStatus.Information = (unsigned __int64)WdmList;
  }
  else
  {
    v12 = Irp->m_Irp->IoStatus.Status;
  }
  return FxPkgPnp::CompletePnpRequest(this, Irp, v12);
}
