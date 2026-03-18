/*
 * XREFs of ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C001C424
 * Callers:
 *     ?InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C0018128 (-InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0019414 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x1C001C18C (-Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@.c)
 *     ?Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x1C001C9D4 (-Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPE.c)
 *     ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x1C0022700 (-CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@P.c)
 *     ?_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBase@@PEAPEAV1@@Z @ 0x1C002F0E8 (-_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBa.c)
 *     imp_WdfDmaEnablerCreate @ 0x1C0035700 (imp_WdfDmaEnablerCreate.c)
 *     ?Initialize@FxDpc@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_DPC_CONFIG@@PEAVFxObject@@PEAPEAUWDFDPC__@@@Z @ 0x1C0070A08 (-Initialize@FxDpc@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_DPC_CONFIG@@PEAVFxObject@@PEAPEAUWD.c)
 * Callees:
 *     ?GetParentObjectReferenced@FxObject@@QEAAPEAV1@PEAX@Z @ 0x1C001CD08 (-GetParentObjectReferenced@FxObject@@QEAAPEAV1@PEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003FAE4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 */

FxDeviceBase *__fastcall FxDeviceBase::_SearchForDevice(unsigned __int64 Object, IFxHasCallbacks **Callbacks)
{
  FxDeviceBase *v2; // rsi
  unsigned __int64 v3; // rdi
  unsigned int v7; // ecx
  FxTagTracker *v8; // rax
  FxObject *ParentObjectReferenced; // rbx
  unsigned __int16 v11; // ax
  _FX_DRIVER_GLOBALS *v12; // rcx
  const void *_a1; // rdx
  int v14; // eax
  const void *_a2; // rdx
  const void *v16; // r14
  FxQueryInterfaceParams cbParams; // [rsp+40h] [rbp-28h] BYREF

  v2 = *(FxDeviceBase **)(Object + 96);
  cbParams.Object = (void **)Callbacks;
  v3 = Object;
  *(_DWORD *)&cbParams.Type = 5379;
  if ( v2 )
  {
    if ( Callbacks )
    {
      *Callbacks = 0LL;
      v7 = _InterlockedIncrement((volatile signed __int32 *)(Object + 12));
      if ( *(char *)(Object + 24) < 0 )
        v8 = *(FxTagTracker **)(v3 - 48);
      else
        v8 = 0LL;
      if ( v8 )
        FxTagTracker::UpdateTagHistory(
          v8,
          (void *)v3,
          254,
          "minkernel\\wdf\\framework\\shared\\core\\fxdevicebase.cpp",
          TagAddRef,
          v7);
      do
      {
        if ( (*(int (__fastcall **)(unsigned __int64, FxQueryInterfaceParams *))(*(_QWORD *)v3 + 40LL))(v3, &cbParams) >= 0 )
        {
          (*(void (__fastcall **)(unsigned __int64, unsigned __int64, __int64, const char *))(*(_QWORD *)v3 + 16LL))(
            v3,
            Object,
            266LL,
            "minkernel\\wdf\\framework\\shared\\core\\fxdevicebase.cpp");
          return v2;
        }
        ParentObjectReferenced = FxObject::GetParentObjectReferenced((FxObject *)v3, (void *)Object);
        (*(void (__fastcall **)(unsigned __int64, unsigned __int64, __int64, const char *))(*(_QWORD *)v3 + 16LL))(
          v3,
          Object,
          276LL,
          "minkernel\\wdf\\framework\\shared\\core\\fxdevicebase.cpp");
        v3 = (unsigned __int64)ParentObjectReferenced;
      }
      while ( ParentObjectReferenced );
      v14 = v2->QueryInterface(v2, &cbParams);
      if ( v14 < 0 )
      {
        _a2 = (const void *)((unsigned __int64)v2 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v2->m_ObjectSize )
          _a2 = 0LL;
        v16 = (const void *)(Object ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !*(_WORD *)(Object + 10) )
          v16 = 0LL;
        WPP_IFR_SF_qq(*(_FX_DRIVER_GLOBALS **)(Object + 16), 2u, 0x14u, 0xCu, WPP_FxDeviceBase_cpp_Traceguids, v16, _a2);
      }
    }
    return v2;
  }
  else
  {
    v11 = *(_WORD *)(Object + 10);
    v12 = *(_FX_DRIVER_GLOBALS **)(Object + 16);
    _a1 = (const void *)(v3 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v11 )
      _a1 = 0LL;
    WPP_IFR_SF_q(v12, 2u, 0x14u, 0xBu, WPP_FxDeviceBase_cpp_Traceguids, _a1);
    return 0LL;
  }
}
