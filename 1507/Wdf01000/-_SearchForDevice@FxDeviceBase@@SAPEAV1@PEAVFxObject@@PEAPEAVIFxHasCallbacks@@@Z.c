/*
 * XREFs of ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C001F9E0
 * Callers:
 *     imp_WdfDmaEnablerCreate @ 0x1C0008B20 (imp_WdfDmaEnablerCreate.c)
 *     ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x1C000B290 (-CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@P.c)
 *     ?Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x1C001F628 (-Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@.c)
 *     ?_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBase@@PEAPEAV1@@Z @ 0x1C0020C1C (-_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBa.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0023368 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x1C0023B0C (-Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPE.c)
 *     ?InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C0029B28 (-InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
 *     ?Initialize@FxDpc@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_DPC_CONFIG@@PEAVFxObject@@PEAPEAUWDFDPC__@@@Z @ 0x1C00683E8 (-Initialize@FxDpc@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_DPC_CONFIG@@PEAVFxObject@@PEAPEAUWD.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?GetParentObjectReferenced@FxObject@@QEAAPEAV1@PEAX@Z @ 0x1C001553C (-GetParentObjectReferenced@FxObject@@QEAAPEAV1@PEAX@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 */

FxDeviceBase *__fastcall FxDeviceBase::_SearchForDevice(unsigned __int64 Object, IFxHasCallbacks **Callbacks)
{
  FxDeviceBase *v2; // r14
  const void *_a1; // rdi
  FxObject *v4; // rsi
  unsigned int v7; // ecx
  FxTagTracker *Flink; // rax
  FxObject *ParentObjectReferenced; // rbx
  int v11; // eax
  const void *_a2; // rax
  FxQueryInterfaceParams cbParams; // [rsp+40h] [rbp-28h] BYREF

  v2 = *(FxDeviceBase **)(Object + 96);
  _a1 = 0LL;
  cbParams.Object = (void **)Callbacks;
  v4 = (FxObject *)Object;
  *(_DWORD *)&cbParams.Type = 5379;
  if ( v2 )
  {
    if ( Callbacks )
    {
      *Callbacks = 0LL;
      v7 = _InterlockedIncrement((volatile signed __int32 *)(Object + 12));
      if ( *(char *)(Object + 24) < 0 )
        Flink = (FxTagTracker *)v4[-1].m_ChildEntry.Flink;
      else
        Flink = 0LL;
      if ( Flink )
        FxTagTracker::UpdateTagHistory(
          Flink,
          v4,
          254,
          "minkernel\\wdf\\framework\\shared\\core\\fxdevicebase.cpp",
          TagAddRef,
          v7);
      do
      {
        if ( v4->QueryInterface(v4, &cbParams) >= 0 )
        {
          v4->Release(v4, (void *)Object, 266, "minkernel\\wdf\\framework\\shared\\core\\fxdevicebase.cpp");
          return v2;
        }
        ParentObjectReferenced = FxObject::GetParentObjectReferenced(v4, (void *)Object);
        v4->Release(v4, (void *)Object, 276, "minkernel\\wdf\\framework\\shared\\core\\fxdevicebase.cpp");
        v4 = ParentObjectReferenced;
      }
      while ( ParentObjectReferenced );
      v11 = v2->QueryInterface(v2, &cbParams);
      if ( v11 < 0 )
      {
        if ( v2->m_ObjectSize )
          _a2 = (const void *)((unsigned __int64)v2 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          _a2 = 0LL;
        if ( *(_WORD *)(Object + 10) )
          _a1 = (const void *)(Object ^ 0xFFFFFFFFFFFFFFF8uLL);
        WPP_IFR_SF_qq(*(_FX_DRIVER_GLOBALS **)(Object + 16), 2u, 0x14u, 0xCu, WPP_FxDeviceBase_cpp_Traceguids, _a1, _a2);
      }
    }
    return v2;
  }
  else
  {
    if ( *(_WORD *)(Object + 10) )
      _a1 = (const void *)(Object ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_q(*(_FX_DRIVER_GLOBALS **)(Object + 16), 2u, 0x14u, 0xBu, WPP_FxDeviceBase_cpp_Traceguids, _a1);
    return 0LL;
  }
}
