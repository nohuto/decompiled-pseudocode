/*
 * XREFs of ?OpenTargetHandle@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@PEAUFxIoTargetRemoveOpenParams@@@Z @ 0x1C002CE98
 * Callers:
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C002D058 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qdD @ 0x1C002ECE4 (WPP_IFR_SF_qdD.c)
 *     WPP_IFR_SF_qq @ 0x1C002F548 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qid @ 0x1C007C76C (WPP_IFR_SF_qid.c)
 */

__int64 __fastcall FxIoTargetRemote::OpenTargetHandle(
        FxIoTargetRemote *this,
        _WDF_IO_TARGET_OPEN_PARAMS *OpenParams,
        FxIoTargetRemoveOpenParams *pParams)
{
  ACCESS_MASK DesiredAccess; // edx
  const void *v7; // rsi
  NTSTATUS v8; // eax
  unsigned int Information; // ecx
  unsigned int v10; // ebp
  const void *v11; // rax
  _FX_DRIVER_GLOBALS **p_m_Globals; // r13
  _FILE_OBJECT **p_m_TargetFileObject; // r12
  NTSTATUS v14; // eax
  _DEVICE_OBJECT *RelatedDeviceObject; // rax
  const void *v17; // rdi
  const void *v18; // rdi
  _IO_STATUS_BLOCK ioStatus; // [rsp+60h] [rbp-68h] BYREF
  _OBJECT_ATTRIBUTES oa; // [rsp+70h] [rbp-58h] BYREF
  void **p_m_TargetHandle; // [rsp+D0h] [rbp+8h]

  oa.ObjectName = &pParams->TargetDeviceName;
  oa.Length = 48;
  oa.Attributes = 512;
  *(_OWORD *)&oa.SecurityDescriptor = 0LL;
  DesiredAccess = pParams->DesiredAccess;
  v7 = 0LL;
  p_m_TargetHandle = &this->m_TargetHandle;
  oa.RootDirectory = 0LL;
  v8 = ZwCreateFile(
         &this->m_TargetHandle,
         DesiredAccess,
         &oa,
         &ioStatus,
         pParams->AllocationSizePointer,
         pParams->FileAttributes,
         pParams->ShareAccess,
         pParams->CreateDisposition,
         pParams->CreateOptions,
         pParams->EaBuffer,
         pParams->EaBufferLength);
  Information = ioStatus.Information;
  v10 = v8;
  OpenParams->FileInformation = ioStatus.Information;
  if ( v8 < 0 )
  {
    if ( this->m_ObjectSize )
      v7 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_qdD(this->m_Globals, 2u, 0xEu, 0x13u, WPP_FxIoTargetRemotekm_cpp_Traceguids, v7, v8, Information);
  }
  else
  {
    if ( this->m_ObjectSize )
      v11 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v11 = 0LL;
    p_m_Globals = &this->m_Globals;
    WPP_IFR_SF_qdD(this->m_Globals, 3u, 0xEu, 0x10u, WPP_FxIoTargetRemotekm_cpp_Traceguids, v11, v10, Information);
    p_m_TargetFileObject = &this->m_TargetFileObject;
    v14 = ObReferenceObjectByHandle(
            *p_m_TargetHandle,
            pParams->DesiredAccess,
            (POBJECT_TYPE)IoFileObjectType,
            0,
            (PVOID *)&this->m_TargetFileObject,
            0LL);
    v10 = v14;
    if ( v14 < 0 )
    {
      if ( this->m_ObjectSize )
        v18 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v18 = 0LL;
      WPP_IFR_SF_qid(
        *p_m_Globals,
        2u,
        0xEu,
        0x12u,
        WPP_FxIoTargetRemotekm_cpp_Traceguids,
        v18,
        (__int64)*p_m_TargetHandle,
        v14);
    }
    else
    {
      RelatedDeviceObject = IoGetRelatedDeviceObject(*p_m_TargetFileObject);
      this->m_TargetDevice = RelatedDeviceObject;
      if ( !RelatedDeviceObject )
      {
        if ( this->m_ObjectSize )
          v17 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v17 = 0LL;
        WPP_IFR_SF_qq(*p_m_Globals, 2u, 0xEu, 0x11u, WPP_FxIoTargetRemotekm_cpp_Traceguids, v17, *p_m_TargetFileObject);
        return (unsigned int)-1073741810;
      }
    }
  }
  return v10;
}
