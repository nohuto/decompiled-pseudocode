/*
 * XREFs of imp_WdfIoQueueCreate @ 0x1C001D870
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00097B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?InitializeDefaultQueue@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxIoQueue@@@Z @ 0x1C001DA20 (-InitializeDefaultQueue@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxIoQueue@@@Z.c)
 *     ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x1C001DE30 (-CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@P.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C00277B0 (WPP_IFR_SF_qq.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0056B68 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C006D4B8 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006DFFC (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006E01C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     WPP_IFR_SF_DDDDd @ 0x1C00813C4 (WPP_IFR_SF_DDDDd.c)
 */

__int64 __fastcall imp_WdfIoQueueCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        _WDF_IO_QUEUE_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *QueueAttributes,
        WDFQUEUE__ **Queue)
{
  WDFDEVICE__ *_a1; // rsi
  FxDevice *v9; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  __int64 result; // rax
  unsigned __int8 v12; // dl
  unsigned int v13; // r8d
  unsigned __int16 v14; // r9
  unsigned int Size; // ecx
  unsigned __int8 DefaultQueue; // cl
  WDFQUEUE__ **v17; // r15
  FxPkgIo *m_PkgIo; // r12
  int v19; // eax
  unsigned int v20; // ebx
  FxIoQueue *v21; // rbx
  int v22; // ebp
  unsigned __int64 v23; // rbx
  unsigned __int16 v24; // r9
  const void *v25; // rax
  FxIoQueue **ppQueue; // [rsp+20h] [rbp-68h]
  unsigned int _a2; // [rsp+30h] [rbp-58h]
  unsigned int v28; // [rsp+38h] [rbp-50h]
  unsigned int v29; // [rsp+40h] [rbp-48h]
  int v30; // [rsp+48h] [rbp-40h]
  FxIoQueue *pQueue; // [rsp+50h] [rbp-38h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  FxDevice *pDevice; // [rsp+98h] [rbp+10h] BYREF

  _a1 = (WDFDEVICE__ *)Device;
  if ( !Device )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1002uLL);
  v9 = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Device) = 0;
  if ( ((unsigned __int8)_a1 & 1) != 0 )
  {
    Device = LOWORD(v9->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v9 = (FxDevice *)((char *)v9 - Device);
  }
  if ( v9->m_Type == 4098 )
  {
    pDevice = v9;
  }
  else
  {
    FxObjectHandleGetPtrQI(v9, (void **)&pDevice, _a1, 0x1002u, Device);
    v9 = pDevice;
  }
  m_Globals = v9->m_Globals;
  pQueue = 0LL;
  if ( !Config )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxValidateObjectAttributes(m_Globals, QueueAttributes, 6, (unsigned __int16)QueueAttributes);
  if ( (int)result < 0 )
    return result;
  Size = Config->Size;
  if ( ((Config->Size - 80) & 0xFFFFFFE7) != 0 || Size == 104 )
  {
    WPP_IFR_SF_DDDDd(m_Globals, v12, v13, v14, (const _GUID *)ppQueue, Size, _a2, v28, v29, v30);
    return 3221225476LL;
  }
  DefaultQueue = Config->DefaultQueue;
  v17 = Queue;
  if ( !DefaultQueue && !Queue )
  {
    v20 = -1073741582;
    WPP_IFR_SF_d(m_Globals, 2u, 0xDu, 0xBu, WPP_FxIoQueueApi_cpp_Traceguids, -1073741582);
    return v20;
  }
  m_PkgIo = pDevice->m_PkgIo;
  if ( DefaultQueue )
  {
    if ( pDevice->m_Legacy )
    {
      if ( (pDevice->m_DeviceObject.m_DeviceObject->Flags & 0x80u) != 0 )
        goto LABEL_14;
      v24 = 12;
    }
    else
    {
      if ( pDevice->m_CurrentPnpState == WdfDevStatePnpInit )
        goto LABEL_14;
      v24 = 13;
    }
    v20 = -1073741436;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xCu, v24, WPP_FxIoQueueApi_cpp_Traceguids, _a1, -1073741436);
    return v20;
  }
LABEL_14:
  v19 = FxPkgIo::CreateQueue(
          m_PkgIo,
          Config,
          QueueAttributes,
          *(FxDriver **)&DriverGlobals[-7].DisplaceDriverUnload,
          &pQueue);
  v20 = v19;
  if ( v19 < 0 )
  {
    WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0xEu, WPP_FxIoQueueApi_cpp_Traceguids, _a1, v19);
    return v20;
  }
  v21 = pQueue;
  if ( Config->DefaultQueue && (v22 = FxPkgIo::InitializeDefaultQueue(m_PkgIo, pDevice, pQueue), v22 < 0) )
  {
    WPP_IFR_SF_qq(m_Globals, 2u, 0xDu, 0xFu, WPP_FxIoQueueApi_cpp_Traceguids, m_PkgIo, _a1);
    FxObject::DeleteFromFailedCreate(v21);
    return (unsigned int)v22;
  }
  else
  {
    if ( m_Globals->FxVerboseOn )
    {
      if ( v21->m_ObjectSize )
        v25 = (const void *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v25 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x10u, WPP_FxIoQueueApi_cpp_Traceguids, v25);
    }
    if ( v17 )
    {
      if ( v21->m_ObjectSize )
        v23 = (unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v23 = 0LL;
      *v17 = (WDFQUEUE__ *)v23;
    }
    return 0LL;
  }
}
